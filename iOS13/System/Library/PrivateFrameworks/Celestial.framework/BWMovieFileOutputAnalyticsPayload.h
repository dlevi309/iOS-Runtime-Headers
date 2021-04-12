/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWCoreAnalyticsPayload.h>

@class NSDictionary, NSString;

@interface BWMovieFileOutputAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {

	BWCoreAnalyticsMovieRecordingSphereAFStatistics* _sphereAFStatistics;
	NSDictionary* _sphereModeByPortType;
	NSDictionary* _APSModeByPortType;
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)reset;
-(double)duration;
-(id)eventName;
-(int)width;
-(int)height;
-(void)setWidth:(int)arg1 ;
-(void)setHeight:(int)arg1 ;
-(int)deviceType;
-(void)setDuration:(double)arg1 ;
-(void)setDeviceType:(int)arg1 ;
-(int)videoOrientation;
-(BOOL)videoMirrored;
-(void)setVideoMirrored:(BOOL)arg1 ;
-(void)setVideoOrientation:(int)arg1 ;
-(void)setClientIDType:(int)arg1 ;
-(id)eventDictionary;
-(int)activeDeviceMask;
-(void)setActiveDeviceMask:(int)arg1 ;
-(int)devicePosition;
-(void)setDevicePosition:(int)arg1 ;
-(int)clientIDType;
-(BWCoreAnalyticsMovieRecordingSphereAFStatistics*)sphereAFStatistics;
-(void)setSphereAFStatistics:(BWCoreAnalyticsMovieRecordingSphereAFStatistics*)arg1 ;
-(NSDictionary *)sphereModeByPortType;
-(void)setSphereModeByPortType:(NSDictionary *)arg1 ;
-(NSDictionary *)APSModeByPortType;
-(void)setAPSModeByPortType:(NSDictionary *)arg1 ;
-(double)durationFront;
-(void)setDurationFront:(double)arg1 ;
-(double)durationRearWide;
-(void)setDurationRearWide:(double)arg1 ;
-(double)durationRearTele;
-(void)setDurationRearTele:(double)arg1 ;
-(double)durationRearSuperWide;
-(void)setDurationRearSuperWide:(double)arg1 ;
-(float)nominalFramerate;
-(void)setNominalFramerate:(float)arg1 ;
@end

