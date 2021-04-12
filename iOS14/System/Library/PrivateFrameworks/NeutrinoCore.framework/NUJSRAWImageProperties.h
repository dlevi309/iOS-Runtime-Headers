/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUJSProxy.h>
#import <libobjc.A.dylib/NUJSRAWImagePropertiesExport.h>

@class NSString, NUJSRAWNoiseReductionProperties;

@interface NUJSRAWImageProperties : NUJSProxy <NUJSRAWImagePropertiesExport>

@property (readonly) id<NURAWImageProperties> rawImageProperties; 
@property (readonly) NSString * decoderVersion; 
@property (readonly) double temperature; 
@property (readonly) double tint; 
@property (readonly) NUJSRAWNoiseReductionProperties * noiseReductionProperties; 
-(double)temperature;
-(double)tint;
-(NSString *)decoderVersion;
-(NUJSRAWNoiseReductionProperties *)noiseReductionProperties;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(id<NURAWImageProperties>)rawImageProperties;
-(id)initWithRAWImageProperties:(id)arg1 context:(id)arg2 ;
@end

