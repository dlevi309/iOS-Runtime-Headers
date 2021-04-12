/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@class NSNumber;

@interface PIValuesAtCapture : NSObject {

	float _aperture;
	float _portraitStrength;
	NSNumber* _minimumAperture;
	NSNumber* _maximumAperture;
	unsigned long long _portraitMajorVersion;
	unsigned long long _portraitMinorVersion;
	SCD_Struct_PI22 _versionInfo;

}

@property (assign,nonatomic) float aperture;                                       //@synthesize aperture=_aperture - In the implementation block
@property (assign,nonatomic) float portraitStrength;                               //@synthesize portraitStrength=_portraitStrength - In the implementation block
@property (nonatomic,retain) NSNumber * minimumAperture;                           //@synthesize minimumAperture=_minimumAperture - In the implementation block
@property (nonatomic,retain) NSNumber * maximumAperture;                           //@synthesize maximumAperture=_maximumAperture - In the implementation block
@property (assign,nonatomic) unsigned long long portraitMajorVersion;              //@synthesize portraitMajorVersion=_portraitMajorVersion - In the implementation block
@property (assign,nonatomic) unsigned long long portraitMinorVersion;              //@synthesize portraitMinorVersion=_portraitMinorVersion - In the implementation block
@property (assign,nonatomic) SCD_Struct_PI22 versionInfo;                          //@synthesize versionInfo=_versionInfo - In the implementation block
+(id)valuesAtCaptureFromImageProperties:(id)arg1 error:(out id*)arg2 ;
-(id)description;
-(SCD_Struct_PI22)versionInfo;
-(void)setAperture:(float)arg1 ;
-(float)aperture;
-(void)setVersionInfo:(SCD_Struct_PI22)arg1 ;
-(float)portraitStrength;
-(void)setPortraitStrength:(float)arg1 ;
-(NSNumber *)minimumAperture;
-(void)setMinimumAperture:(NSNumber *)arg1 ;
-(NSNumber *)maximumAperture;
-(void)setMaximumAperture:(NSNumber *)arg1 ;
-(unsigned long long)portraitMajorVersion;
-(void)setPortraitMajorVersion:(unsigned long long)arg1 ;
-(unsigned long long)portraitMinorVersion;
-(void)setPortraitMinorVersion:(unsigned long long)arg1 ;
@end

