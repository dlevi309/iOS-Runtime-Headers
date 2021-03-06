/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <libobjc.A.dylib/NURAWImageProperties.h>

@protocol NURAWNoiseReductionProperties;
@class NSString, NSArray, CIFilter, _NURAWCameraSpaceProperties;

@interface _NURAWImageProperties : NSObject <NURAWImageProperties> {

	NSString* _decoderVersion;
	NSArray* _availableDecoderVersions;
	double _temperature;
	double _tint;
	CIFilter* _rawConvert;
	id<NURAWNoiseReductionProperties> _noiseReductionProperties;
	_NURAWCameraSpaceProperties* _rawCameraSpaceProperties;

}

@property (retain) NSString * decoderVersion;                                               //@synthesize decoderVersion=_decoderVersion - In the implementation block
@property (retain) NSArray * availableDecoderVersions;                                      //@synthesize availableDecoderVersions=_availableDecoderVersions - In the implementation block
@property (assign) double temperature;                                                      //@synthesize temperature=_temperature - In the implementation block
@property (assign) double tint;                                                             //@synthesize tint=_tint - In the implementation block
@property (retain) CIFilter * rawConvert;                                                   //@synthesize rawConvert=_rawConvert - In the implementation block
@property (retain) id<NURAWNoiseReductionProperties> noiseReductionProperties;              //@synthesize noiseReductionProperties=_noiseReductionProperties - In the implementation block
@property (retain) _NURAWCameraSpaceProperties * rawCameraSpaceProperties;                  //@synthesize rawCameraSpaceProperties=_rawCameraSpaceProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)temperature;
-(NSString *)description;
-(void)setTemperature:(double)arg1 ;
-(NSArray *)availableDecoderVersions;
-(void)setTint:(double)arg1 ;
-(double)tint;
-(void)setRawCameraSpaceProperties:(_NURAWCameraSpaceProperties *)arg1 ;
-(void)setNoiseReductionProperties:(id<NURAWNoiseReductionProperties>)arg1 ;
-(void)setAvailableDecoderVersions:(NSArray *)arg1 ;
-(void)setDecoderVersion:(NSString *)arg1 ;
-(id)inputNeutralXYFromRGB:(const double*)arg1 ;
-(NSString *)decoderVersion;
-(id<NURAWNoiseReductionProperties>)noiseReductionProperties;
-(CIFilter *)rawConvert;
-(void)setRawConvert:(CIFilter *)arg1 ;
-(_NURAWCameraSpaceProperties *)rawCameraSpaceProperties;
@end

