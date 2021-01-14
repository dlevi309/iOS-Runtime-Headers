/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_PI23 _depthVersionInfo;

}

@property (assign,nonatomic) float aperture;                                       //@synthesize aperture=_aperture - In the implementation block
@property (assign,nonatomic) float portraitStrength;                               //@synthesize portraitStrength=_portraitStrength - In the implementation block
@property (nonatomic,retain) NSNumber * minimumAperture;                           //@synthesize minimumAperture=_minimumAperture - In the implementation block
@property (nonatomic,retain) NSNumber * maximumAperture;                           //@synthesize maximumAperture=_maximumAperture - In the implementation block
@property (assign,nonatomic) unsigned long long portraitMajorVersion;              //@synthesize portraitMajorVersion=_portraitMajorVersion - In the implementation block
@property (assign,nonatomic) unsigned long long portraitMinorVersion;              //@synthesize portraitMinorVersion=_portraitMinorVersion - In the implementation block
@property (assign,nonatomic) SCD_Struct_PI23 depthVersionInfo;                     //@synthesize depthVersionInfo=_depthVersionInfo - In the implementation block
+(id)valuesAtCaptureFromImageProperties:(id)arg1 error:(out id*)arg2 ;
-(void)setAperture:(float)arg1 ;
-(id)description;
-(float)aperture;
-(id)initFromMinAperture:(float)arg1 maxAperture:(float)arg2 aperture:(float)arg3 portraitStrength:(float)arg4 SDOFRenderingVerion:(int)arg5 depthVersionInfo:(SCD_Struct_PI23)arg6 ;
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
-(SCD_Struct_PI23)depthVersionInfo;
-(void)setDepthVersionInfo:(SCD_Struct_PI23)arg1 ;
@end

