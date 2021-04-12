/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWCoreAnalyticsPayload.h>

@class NSDictionary, NSString;

@interface BWMovieFileOutputAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {

	BWCoreAnalyticsMovieRecordingSphereAFStatistics* _sphereAFStatistics;
	NSDictionary* _sphereModeByPortType;
	NSDictionary* _APSModeByPortType;
	NSDictionary* _variableFrameRateStatistics;
	BOOL _afDriverShortOccurred;
	BOOL _videoMirrored;
	int _activeDeviceMask;
	int _devicePosition;
	int _videoOrientation;
	int _deviceType;
	int _clientIDType;
	float _nominalFramerate;
	int _height;
	int _width;
	double _duration;
	double _durationFront;
	double _durationRearWide;
	double _durationRearTele;
	double _durationRearSuperWide;

}

@property (assign,nonatomic) int activeDeviceMask;                                                             //@synthesize activeDeviceMask=_activeDeviceMask - In the implementation block
@property (assign,nonatomic) int devicePosition;                                                               //@synthesize devicePosition=_devicePosition - In the implementation block
@property (assign,nonatomic) int videoOrientation;                                                             //@synthesize videoOrientation=_videoOrientation - In the implementation block
@property (assign,nonatomic) BOOL videoMirrored;                                                               //@synthesize videoMirrored=_videoMirrored - In the implementation block
@property (assign,nonatomic) int deviceType;                                                                   //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) int clientIDType;                                                                 //@synthesize clientIDType=_clientIDType - In the implementation block
@property (assign,nonatomic) double duration;                                                                  //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double durationFront;                                                             //@synthesize durationFront=_durationFront - In the implementation block
@property (assign,nonatomic) double durationRearWide;                                                          //@synthesize durationRearWide=_durationRearWide - In the implementation block
@property (assign,nonatomic) double durationRearTele;                                                          //@synthesize durationRearTele=_durationRearTele - In the implementation block
@property (assign,nonatomic) double durationRearSuperWide;                                                     //@synthesize durationRearSuperWide=_durationRearSuperWide - In the implementation block
@property (assign,nonatomic) float nominalFramerate;                                                           //@synthesize nominalFramerate=_nominalFramerate - In the implementation block
@property (assign,nonatomic) int height;                                                                       //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) int width;                                                                        //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) BWCoreAnalyticsMovieRecordingSphereAFStatistics* sphereAFStatistics;              //@synthesize sphereAFStatistics=_sphereAFStatistics - In the implementation block
@property (nonatomic,retain) NSDictionary * sphereModeByPortType;                                              //@synthesize sphereModeByPortType=_sphereModeByPortType - In the implementation block
@property (nonatomic,retain) NSDictionary * APSModeByPortType;                                                 //@synthesize APSModeByPortType=_APSModeByPortType - In the implementation block
@property (nonatomic,retain) NSDictionary * variableFrameRateStatistics;                                       //@synthesize variableFrameRateStatistics=_variableFrameRateStatistics - In the implementation block
@property (assign,nonatomic) BOOL afDriverShortOccurred;                                                       //@synthesize afDriverShortOccurred=_afDriverShortOccurred - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHeight:(int)arg1 ;
-(void)setDurationFront:(double)arg1 ;
-(int)deviceType;
-(void)setDuration:(double)arg1 ;
-(int)width;
-(id)init;
-(void)setVideoMirrored:(BOOL)arg1 ;
-(int)devicePosition;
-(void)setDeviceType:(int)arg1 ;
-(int)videoOrientation;
-(void)setSphereAFStatistics:(BWCoreAnalyticsMovieRecordingSphereAFStatistics*)arg1 ;
-(void)setWidth:(int)arg1 ;
-(id)eventName;
-(void)setDurationRearTele:(double)arg1 ;
-(int)height;
-(void)setDurationRearSuperWide:(double)arg1 ;
-(double)durationRearSuperWide;
-(NSDictionary *)APSModeByPortType;
-(int)clientIDType;
-(id)eventDictionary;
-(double)durationRearTele;
-(void)setVariableFrameRateStatistics:(NSDictionary *)arg1 ;
-(double)durationRearWide;
-(void)setVideoOrientation:(int)arg1 ;
-(void)setClientIDType:(int)arg1 ;
-(void)setSphereModeByPortType:(NSDictionary *)arg1 ;
-(void)setDevicePosition:(int)arg1 ;
-(void)setAfDriverShortOccurred:(BOOL)arg1 ;
-(float)nominalFramerate;
-(NSDictionary *)sphereModeByPortType;
-(void)reset;
-(int)activeDeviceMask;
-(void)setActiveDeviceMask:(int)arg1 ;
-(NSDictionary *)variableFrameRateStatistics;
-(BWCoreAnalyticsMovieRecordingSphereAFStatistics*)sphereAFStatistics;
-(void)setAPSModeByPortType:(NSDictionary *)arg1 ;
-(BOOL)videoMirrored;
-(double)duration;
-(void)setNominalFramerate:(float)arg1 ;
-(void)setDurationRearWide:(double)arg1 ;
-(BOOL)afDriverShortOccurred;
-(double)durationFront;
-(void)dealloc;
@end

