/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

@class NSString, NSArray;


@protocol NURAWImageProperties <NSObject>
@property (readonly) NSString * decoderVersion; 
@property (readonly) NSArray * availableDecoderVersions; 
@property (readonly) double temperature; 
@property (readonly) double tint; 
@property (readonly) id<NURAWNoiseReductionProperties> noiseReductionProperties; 
@required
-(double)temperature;
-(double)tint;
-(NSArray *)availableDecoderVersions;
-(id)inputNeutralXYFromRGB:(const double*)arg1;
-(NSString *)decoderVersion;
-(id<NURAWNoiseReductionProperties>)noiseReductionProperties;

@end

