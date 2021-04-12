/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@protocol MTLVisibleFunctionTableSPI <MTLVisibleFunctionTable>
@property (nonatomic,readonly) unsigned long long resourceIndex; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,retain) id<MTLBuffer> globalBuffer; 
@property (assign,nonatomic) unsigned long long globalBufferOffset; 
@optional
-(unsigned long long)resourceIndex;
-(id<MTLBuffer>)globalBuffer;
-(void)setGlobalBuffer:(id)arg1;
-(unsigned long long)globalBufferOffset;
-(void)setGlobalBufferOffset:(unsigned long long)arg1;
-(unsigned long long)uniqueIdentifier;

@required
-(void)setValue:(unsigned long long)arg1 withRange:(NSRange)arg2;
-(void)setVisibleFunctionTables:(const id*)arg1 withBufferRange:(NSRange)arg2;
-(void)setValue:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3;
-(void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;

@end

