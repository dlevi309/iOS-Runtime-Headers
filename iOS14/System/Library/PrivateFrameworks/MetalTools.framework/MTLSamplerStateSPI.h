/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


@protocol MTLSamplerStateSPI <MTLSamplerState>
@property (nonatomic,readonly) unsigned long long pixelFormat; 
@property (nonatomic,readonly) unsigned long long resourceIndex; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@property (readonly) unsigned long long uniqueIdentifier; 
@optional
-(unsigned long long)resourceIndex;
-(unsigned long long)uniqueIdentifier;
-(unsigned long long)gpuAddress;

@required
-(unsigned long long)pixelFormat;

@end

