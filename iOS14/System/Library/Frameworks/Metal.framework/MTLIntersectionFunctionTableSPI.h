/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@protocol MTLIntersectionFunctionTableSPI <MTLIntersectionFunctionTable>
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

@end

