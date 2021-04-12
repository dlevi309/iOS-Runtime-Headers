/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


@protocol MTLHeapSPI <MTLHeap>
@property (readonly) unsigned long long unfilteredResourceOptions; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@optional
-(unsigned long long)gpuAddress;

@required
-(id)formattedDescription:(unsigned long long)arg1;
-(unsigned long long)unfilteredResourceOptions;

@end

