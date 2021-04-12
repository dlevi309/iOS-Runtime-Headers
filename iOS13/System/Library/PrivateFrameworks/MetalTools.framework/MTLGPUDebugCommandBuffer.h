/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsCommandBuffer.h>
#import <libobjc.A.dylib/MTLGPUDebugBufferEncoder.h>

@protocol MTLArgumentEncoder, MTLBuffer;
@interface MTLGPUDebugCommandBuffer : MTLToolsCommandBuffer <MTLGPUDebugBufferEncoder> {

	id<MTLArgumentEncoder> _stageArgumentEncoder;
	id<MTLBuffer> _vertexComputeReportBuffer;
	unsigned long long _vertexComputeReportOffset;
	id<MTLBuffer> _fragmentReportBuffer;
	unsigned long long _fragmentReportOffset;
	vector<MetalBuffer, std::__1::allocator<MetalBuffer> >* _usedBuffers;
	MetalBuffer* _currentPooledBuffer;
	unsigned long long _currentPooledBufferOffset;
	unsigned _currentEncoderID;
	unsigned _currentReportID;
	vector<id<MTLBuffer>, std::__1::allocator<id<MTLBuffer> > >* _reportBufferList;
	vector<ReportBufferEntry, std::__1::allocator<ReportBufferEntry> >* _reportEntryList;
	vector<NSString *, std::__1::allocator<NSString *> >* _encoderLabels;
	mutex _allocationLock;

}
-(void)dealloc;
-(id)computeCommandEncoder;
-(id)renderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1 ;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(SCD_Struct_MT8*)arg2 capacity:(unsigned long long)arg3 ;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(SCD_Struct_MT8*)arg1 capacity:(unsigned long long)arg2 ;
-(id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(SCD_Struct_MT8*)arg2 capacity:(unsigned long long)arg3 ;
-(id)fragmentRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)sampledFragmentRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(SCD_Struct_MT8*)arg2 capacity:(unsigned long long)arg3 ;
-(void)onEncoderEnd:(id)arg1 type:(unsigned long long)arg2 ;
-(pair<id<MTLBuffer>, unsigned long>)setBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)preCompletionHandlers;
-(id)_newReportBuffer;
-(pair<id<MTLBuffer>, unsigned long>)_temporaryBufferWithLength:(unsigned long long)arg1 ;
-(void)_encodeReportBuffer:(id)arg1 type:(unsigned long long)arg2 ;
-(ReportBufferEntry)_allocReportEntryStorageForType:(unsigned long long)arg1 ;
-(void)onEncoderBegin:(id)arg1 type:(unsigned long long)arg2 ;
-(void)_checkReportBuffers;
-(id)encodeBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 resultOffset:(unsigned long long*)arg4 ;
-(id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2 ;
@end

