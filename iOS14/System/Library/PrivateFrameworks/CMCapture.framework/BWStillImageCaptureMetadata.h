/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface BWStillImageCaptureMetadata : NSObject <NSSecureCoding> {

	int _snrType;
	float _snr;
	int _deviceType;
	NSArray* _slaveFocalLengths;
	NSArray* _slaveLensFNumbers;
	float _totalZoomFactor;
	BOOL _intelligentDistortionCorrectionEnabled;
	BOOL _geometricDistortionCorrectionEnabled;
	int _intelligentDistortionCorrectionVersion;
	int _systemPressureLevel;
	int _cameraControlsStatisticsMaster;

}

@property (assign,nonatomic) int snrType;                                              //@synthesize snrType=_snrType - In the implementation block
@property (assign,nonatomic) float snr;                                                //@synthesize snr=_snr - In the implementation block
@property (assign,nonatomic) int deviceType;                                           //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,retain) NSArray * slaveFocalLengths;                              //@synthesize slaveFocalLengths=_slaveFocalLengths - In the implementation block
@property (nonatomic,retain) NSArray * slaveLensFNumbers;                              //@synthesize slaveLensFNumbers=_slaveLensFNumbers - In the implementation block
@property (assign,nonatomic) float totalZoomFactor;                                    //@synthesize totalZoomFactor=_totalZoomFactor - In the implementation block
@property (assign,nonatomic) BOOL intelligentDistortionCorrectionEnabled;              //@synthesize intelligentDistortionCorrectionEnabled=_intelligentDistortionCorrectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL geometricDistortionCorrectionEnabled;                //@synthesize geometricDistortionCorrectionEnabled=_geometricDistortionCorrectionEnabled - In the implementation block
@property (assign,nonatomic) int intelligentDistortionCorrectionVersion;               //@synthesize intelligentDistortionCorrectionVersion=_intelligentDistortionCorrectionVersion - In the implementation block
@property (assign,nonatomic) int systemPressureLevel;                                  //@synthesize systemPressureLevel=_systemPressureLevel - In the implementation block
@property (assign,nonatomic) int cameraControlsStatisticsMaster;                       //@synthesize cameraControlsStatisticsMaster=_cameraControlsStatisticsMaster - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setGeometricDistortionCorrectionEnabled:(BOOL)arg1 ;
-(int)deviceType;
-(int)systemPressureLevel;
-(float)totalZoomFactor;
-(NSArray *)slaveFocalLengths;
-(NSArray *)slaveLensFNumbers;
-(void)setSlaveLensFNumbers:(NSArray *)arg1 ;
-(void)setDeviceType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(float)snr;
-(void)setIntelligentDistortionCorrectionEnabled:(BOOL)arg1 ;
-(int)snrType;
-(void)setTotalZoomFactor:(float)arg1 ;
-(void)setSnr:(float)arg1 ;
-(int)intelligentDistortionCorrectionVersion;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)geometricDistortionCorrectionEnabled;
-(void)setSlaveFocalLengths:(NSArray *)arg1 ;
-(void)setSystemPressureLevel:(int)arg1 ;
-(int)cameraControlsStatisticsMaster;
-(BOOL)intelligentDistortionCorrectionEnabled;
-(void)setIntelligentDistortionCorrectionVersion:(int)arg1 ;
-(void)setCameraControlsStatisticsMaster:(int)arg1 ;
-(void)setSnrType:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

