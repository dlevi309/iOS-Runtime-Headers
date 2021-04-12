/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

@class NSString;


@protocol MTLCounterSampleBuffer <NSObject>
@property (readonly) id<MTLDevice> device; 
@property (readonly) NSString * label; 
@property (readonly) unsigned long long sampleCount; 
@required
-(id<MTLDevice>)device;
-(unsigned long long)sampleCount;
-(NSString *)label;
-(id)resolveCounterRange:(NSRange)arg1;

@end

