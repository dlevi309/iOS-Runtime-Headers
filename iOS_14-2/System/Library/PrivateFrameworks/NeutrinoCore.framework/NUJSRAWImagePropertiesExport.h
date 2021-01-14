/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

@class NSString, NUJSRAWNoiseReductionProperties;


@protocol NUJSRAWImagePropertiesExport <JSExport>
@property (readonly) NSString * decoderVersion; 
@property (readonly) double temperature; 
@property (readonly) double tint; 
@property (readonly) NUJSRAWNoiseReductionProperties * noiseReductionProperties; 
@required
-(double)temperature;
-(double)tint;
-(NSString *)decoderVersion;
-(NUJSRAWNoiseReductionProperties *)noiseReductionProperties;

@end

