/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@protocol MTLAccelerationStructureCommandEncoderSPI <MTLAccelerationStructureCommandEncoder>
@required
-(void)writeSerializedAccelerationStructureSize:(id)arg1 toBuffer:(id)arg2 sizeBufferOffset:(unsigned long long)arg3;
-(void)writeDeserializedAccelerationStructureSize:(id)arg1 serializedOffset:(unsigned long long)arg2 toBuffer:(id)arg3 sizeBufferOffset:(unsigned long long)arg4;
-(void)writeDeserializedPrimitiveAccelerationStructureSizes:(id)arg1 serializedOffset:(unsigned long long)arg2 toBuffer:(id)arg3 sizesBufferOffset:(unsigned long long)arg4;
-(void)serializeAccelerationStructure:(id)arg1 toBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;
-(void)deserializeAccelerationStructure:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;
-(void)deserializeAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 fromBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4;
-(void)writeGeometrySizeOfAccelerationStructure:(id)arg1 toBuffer:(id)arg2 sizeBufferOffset:(unsigned long long)arg3;
-(void)writeGeometryOfAccelerationStructure:(id)arg1 toBuffer:(id)arg2 geometryBufferOffset:(unsigned long long)arg3;

@end

