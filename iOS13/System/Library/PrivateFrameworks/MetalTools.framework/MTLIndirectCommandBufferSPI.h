/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


@protocol MTLIndirectCommandBufferSPI <MTLIndirectCommandBuffer>
@property (readonly) unsigned long long uniqueIdentifier; 
@property (readonly) unsigned long long storageMode; 
@property (assign,nonatomic) unsigned long long resourceIndex; 
@required
-(unsigned long long)uniqueIdentifier;
-(unsigned long long)storageMode;
-(unsigned long long)resourceIndex;
-(void)setResourceIndex:(unsigned long long)arg1;
-(void)getHeader:(void*)arg1 headerSize:(unsigned long long*)arg2;

@end

