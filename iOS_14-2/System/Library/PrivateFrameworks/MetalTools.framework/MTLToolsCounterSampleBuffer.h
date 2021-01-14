/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLCounterSampleBuffer.h>

@class NSString;

@interface MTLToolsCounterSampleBuffer : MTLToolsObject <MTLCounterSampleBuffer>

@property (readonly) id<MTLDevice> device; 
@property (readonly) NSString * label; 
@property (readonly) unsigned long long sampleCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)sampleCount;
-(NSString *)label;
-(id)resolveCounterRange:(NSRange)arg1 ;
@end

