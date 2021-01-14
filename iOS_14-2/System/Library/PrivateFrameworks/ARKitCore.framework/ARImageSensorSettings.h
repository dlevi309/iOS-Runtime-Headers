/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ARVideoFormat, NSString, NSDictionary;

@interface ARImageSensorSettings : NSObject <NSCopying> {

	BOOL _autoFocusEnabled;
	BOOL _mirrorVideoOutput;
	BOOL _visionDataOutputEnabled;
	BOOL _calibrationDataOutputEnabled;
	BOOL _geometricDistortionCorrectionEnabled;
	BOOL _enabled;
	float _maxGainOverride;
	ARVideoFormat* _videoFormat;
	NSString* _metaData;
	NSDictionary* _visionDataOutputParameters;
	unsigned long long _maximumNumberOfTrackedFaces;

}

@property (nonatomic,retain) ARVideoFormat * videoFormat;                                 //@synthesize videoFormat=_videoFormat - In the implementation block
@property (assign,nonatomic) BOOL autoFocusEnabled;                                       //@synthesize autoFocusEnabled=_autoFocusEnabled - In the implementation block
@property (assign,nonatomic) BOOL mirrorVideoOutput;                                      //@synthesize mirrorVideoOutput=_mirrorVideoOutput - In the implementation block
@property (assign,nonatomic) BOOL visionDataOutputEnabled;                                //@synthesize visionDataOutputEnabled=_visionDataOutputEnabled - In the implementation block
@property (assign,nonatomic) BOOL calibrationDataOutputEnabled;                           //@synthesize calibrationDataOutputEnabled=_calibrationDataOutputEnabled - In the implementation block
@property (assign,nonatomic) float maxGainOverride;                                       //@synthesize maxGainOverride=_maxGainOverride - In the implementation block
@property (assign,nonatomic) BOOL geometricDistortionCorrectionEnabled;                   //@synthesize geometricDistortionCorrectionEnabled=_geometricDistortionCorrectionEnabled - In the implementation block
@property (nonatomic,copy) NSString * metaData;                                           //@synthesize metaData=_metaData - In the implementation block
@property (nonatomic,retain) NSDictionary * visionDataOutputParameters;                   //@synthesize visionDataOutputParameters=_visionDataOutputParameters - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfTrackedFaces;              //@synthesize maximumNumberOfTrackedFaces=_maximumNumberOfTrackedFaces - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                               //@synthesize enabled=_enabled - In the implementation block
-(void)setGeometricDistortionCorrectionEnabled:(BOOL)arg1 ;
-(void)setMaxGainOverride:(float)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(ARVideoFormat *)videoFormat;
-(void)setVideoFormat:(ARVideoFormat *)arg1 ;
-(void)setMetaData:(NSString *)arg1 ;
-(id)description;
-(NSString *)metaData;
-(unsigned long long)hash;
-(BOOL)geometricDistortionCorrectionEnabled;
-(float)maxGainOverride;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithVideoFormat:(id)arg1 ;
-(unsigned long long)maximumNumberOfTrackedFaces;
-(void)setMaximumNumberOfTrackedFaces:(unsigned long long)arg1 ;
-(BOOL)mirrorVideoOutput;
-(void)setAutoFocusEnabled:(BOOL)arg1 ;
-(void)setMirrorVideoOutput:(BOOL)arg1 ;
-(void)setVisionDataOutputEnabled:(BOOL)arg1 ;
-(BOOL)visionDataOutputEnabled;
-(void)setVisionDataOutputParameters:(NSDictionary *)arg1 ;
-(BOOL)autoFocusEnabled;
-(NSDictionary *)visionDataOutputParameters;
-(BOOL)calibrationDataOutputEnabled;
-(void)setCalibrationDataOutputEnabled:(BOOL)arg1 ;
@end

