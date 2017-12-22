// automatically generated by the FlatBuffers compiler, do not modify

/**
 * @const
 * @namespace
 */
var nd4j = nd4j || {};

/**
 * @const
 * @namespace
 */
nd4j.graph = nd4j.graph || {};

/**
 * @constructor
 */
nd4j.graph.FlatTiming = function() {
  /**
   * @type {flatbuffers.ByteBuffer}
   */
  this.bb = null;

  /**
   * @type {number}
   */
  this.bb_pos = 0;
};

/**
 * @param {number} i
 * @param {flatbuffers.ByteBuffer} bb
 * @returns {nd4j.graph.FlatTiming}
 */
nd4j.graph.FlatTiming.prototype.__init = function(i, bb) {
  this.bb_pos = i;
  this.bb = bb;
  return this;
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {nd4j.graph.FlatTiming=} obj
 * @returns {nd4j.graph.FlatTiming}
 */
nd4j.graph.FlatTiming.getRootAsFlatTiming = function(bb, obj) {
  return (obj || new nd4j.graph.FlatTiming).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @returns {number}
 */
nd4j.graph.FlatTiming.prototype.id = function() {
  var offset = this.bb.__offset(this.bb_pos, 4);
  return offset ? this.bb.readInt32(this.bb_pos + offset) : 0;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
nd4j.graph.FlatTiming.prototype.name = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 6);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {nd4j.graph.LongPair=} obj
 * @returns {nd4j.graph.LongPair|null}
 */
nd4j.graph.FlatTiming.prototype.timing = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 8);
  return offset ? (obj || new nd4j.graph.LongPair).__init(this.bb.__indirect(this.bb_pos + offset), this.bb) : null;
};

/**
 * @param {flatbuffers.Builder} builder
 */
nd4j.graph.FlatTiming.startFlatTiming = function(builder) {
  builder.startObject(3);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {number} id
 */
nd4j.graph.FlatTiming.addId = function(builder, id) {
  builder.addFieldInt32(0, id, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} nameOffset
 */
nd4j.graph.FlatTiming.addName = function(builder, nameOffset) {
  builder.addFieldOffset(1, nameOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} timingOffset
 */
nd4j.graph.FlatTiming.addTiming = function(builder, timingOffset) {
  builder.addFieldOffset(2, timingOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @returns {flatbuffers.Offset}
 */
nd4j.graph.FlatTiming.endFlatTiming = function(builder) {
  var offset = builder.endObject();
  return offset;
};

/**
 * @constructor
 */
nd4j.graph.FlatResult = function() {
  /**
   * @type {flatbuffers.ByteBuffer}
   */
  this.bb = null;

  /**
   * @type {number}
   */
  this.bb_pos = 0;
};

/**
 * @param {number} i
 * @param {flatbuffers.ByteBuffer} bb
 * @returns {nd4j.graph.FlatResult}
 */
nd4j.graph.FlatResult.prototype.__init = function(i, bb) {
  this.bb_pos = i;
  this.bb = bb;
  return this;
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {nd4j.graph.FlatResult=} obj
 * @returns {nd4j.graph.FlatResult}
 */
nd4j.graph.FlatResult.getRootAsFlatResult = function(bb, obj) {
  return (obj || new nd4j.graph.FlatResult).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @returns {flatbuffers.Long}
 */
nd4j.graph.FlatResult.prototype.id = function() {
  var offset = this.bb.__offset(this.bb_pos, 4);
  return offset ? this.bb.readInt64(this.bb_pos + offset) : this.bb.createLong(0, 0);
};

/**
 * @param {number} index
 * @param {nd4j.graph.FlatVariable=} obj
 * @returns {nd4j.graph.FlatVariable}
 */
nd4j.graph.FlatResult.prototype.variables = function(index, obj) {
  var offset = this.bb.__offset(this.bb_pos, 6);
  return offset ? (obj || new nd4j.graph.FlatVariable).__init(this.bb.__indirect(this.bb.__vector(this.bb_pos + offset) + index * 4), this.bb) : null;
};

/**
 * @returns {number}
 */
nd4j.graph.FlatResult.prototype.variablesLength = function() {
  var offset = this.bb.__offset(this.bb_pos, 6);
  return offset ? this.bb.__vector_len(this.bb_pos + offset) : 0;
};

/**
 * @param {number} index
 * @param {nd4j.graph.FlatTiming=} obj
 * @returns {nd4j.graph.FlatTiming}
 */
nd4j.graph.FlatResult.prototype.timing = function(index, obj) {
  var offset = this.bb.__offset(this.bb_pos, 8);
  return offset ? (obj || new nd4j.graph.FlatTiming).__init(this.bb.__indirect(this.bb.__vector(this.bb_pos + offset) + index * 4), this.bb) : null;
};

/**
 * @returns {number}
 */
nd4j.graph.FlatResult.prototype.timingLength = function() {
  var offset = this.bb.__offset(this.bb_pos, 8);
  return offset ? this.bb.__vector_len(this.bb_pos + offset) : 0;
};

/**
 * @param {flatbuffers.Builder} builder
 */
nd4j.graph.FlatResult.startFlatResult = function(builder) {
  builder.startObject(3);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Long} id
 */
nd4j.graph.FlatResult.addId = function(builder, id) {
  builder.addFieldInt64(0, id, builder.createLong(0, 0));
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} variablesOffset
 */
nd4j.graph.FlatResult.addVariables = function(builder, variablesOffset) {
  builder.addFieldOffset(1, variablesOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {Array.<flatbuffers.Offset>} data
 * @returns {flatbuffers.Offset}
 */
nd4j.graph.FlatResult.createVariablesVector = function(builder, data) {
  builder.startVector(4, data.length, 4);
  for (var i = data.length - 1; i >= 0; i--) {
    builder.addOffset(data[i]);
  }
  return builder.endVector();
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {number} numElems
 */
nd4j.graph.FlatResult.startVariablesVector = function(builder, numElems) {
  builder.startVector(4, numElems, 4);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} timingOffset
 */
nd4j.graph.FlatResult.addTiming = function(builder, timingOffset) {
  builder.addFieldOffset(2, timingOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {Array.<flatbuffers.Offset>} data
 * @returns {flatbuffers.Offset}
 */
nd4j.graph.FlatResult.createTimingVector = function(builder, data) {
  builder.startVector(4, data.length, 4);
  for (var i = data.length - 1; i >= 0; i--) {
    builder.addOffset(data[i]);
  }
  return builder.endVector();
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {number} numElems
 */
nd4j.graph.FlatResult.startTimingVector = function(builder, numElems) {
  builder.startVector(4, numElems, 4);
};

/**
 * @param {flatbuffers.Builder} builder
 * @returns {flatbuffers.Offset}
 */
nd4j.graph.FlatResult.endFlatResult = function(builder) {
  var offset = builder.endObject();
  return offset;
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} offset
 */
nd4j.graph.FlatResult.finishFlatResultBuffer = function(builder, offset) {
  builder.finish(offset);
};

// Exports for Node.js and RequireJS
this.nd4j = nd4j;
