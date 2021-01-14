/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


@protocol MTLIndirectCommandBufferSPI <MTLIndirectCommandBuffer>
@property (readonly) unsigned long long uniqueIdentifier; 
@property (readonly) unsigned long long storageMode; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@property (nonatomic,readonly) unsigned long long resourceIndex; 
@optional
-(unsigned long long)resourceIndex;
-(unsigned long long)gpuAddress;

@required
-(unsigned long long)storageMode;
-(unsigned long long)uniqueIdentifier;
-(void)getHeader:(void*)arg1 headerSize:(unsigned long long*)arg2;

@end

