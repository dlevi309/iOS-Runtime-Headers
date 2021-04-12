/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUJSProxy.h>
#import <libobjc.A.dylib/NUJSRAWNoiseReductionImagePropertiesExport.h>

@interface NUJSRAWNoiseReductionProperties : NUJSProxy <NUJSRAWNoiseReductionImagePropertiesExport>

@property (readonly) id<NURAWNoiseReductionProperties> rawNoiseReductionProperties; 
@property (readonly) double luminance; 
@property (readonly) double color; 
-(double)color;
-(double)luminance;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(id)initWithRAWNoiseReductionProperties:(id)arg1 context:(id)arg2 ;
-(id<NURAWNoiseReductionProperties>)rawNoiseReductionProperties;
@end

