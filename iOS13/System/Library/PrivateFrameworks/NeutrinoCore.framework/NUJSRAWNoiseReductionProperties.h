/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

