/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

@class NSDictionary, NSMutableDictionary;


@protocol MTLCommandBufferSPI <MTLCommandBuffer>
@property (getter=getListIndex,nonatomic,readonly) unsigned long long listIndex; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (readonly) NSDictionary * profilingResults; 
@property (nonatomic,readonly) NSMutableDictionary * userDictionary; 
@property (readonly) unsigned long long globalTraceObjectID; 
@optional
-(unsigned long long)getListIndex;
-(unsigned long long)protectionOptions;
-(unsigned long long)globalTraceObjectID;
-(void)setProtectionOptions:(unsigned long long)arg1;
-(void)commitAndHold;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3;
-(void*)debugBufferContentsWithLength:(unsigned long long*)arg1;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(/*function pointer*/void**)arg1 capacity:(unsigned long long)arg2;
-(id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3;
-(id)sampledComputeCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3;
-(id)debugCommandEncoder;
-(void)setResourceGroups:(const id*)arg1 count:(unsigned long long)arg2;
-(void)dropResourceGroups:(const id*)arg1 count:(unsigned long long)arg2;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3;
-(void)encodeCacheHintFinalize:(unsigned long long)arg1 resourceGroups:(const id*)arg2 count:(unsigned long long)arg3;
-(void)encodeCacheHintTag:(unsigned long long)arg1 resourceGroups:(const id*)arg2 count:(unsigned long long)arg3;
-(BOOL)commitAndWaitUntilSubmitted;

@required
-(NSMutableDictionary *)userDictionary;
-(BOOL)isProfilingEnabled;
-(void)setProfilingEnabled:(BOOL)arg1;
-(void)addPurgedHeap:(id)arg1;
-(void)addPurgedResource:(id)arg1;
-(NSDictionary *)profilingResults;

@end

