/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

