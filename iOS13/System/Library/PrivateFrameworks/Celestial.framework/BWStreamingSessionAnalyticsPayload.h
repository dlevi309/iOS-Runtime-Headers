/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <libobjc.A.dylib/BWCoreAnalyticsPayload.h>

@class NSSet, NSDictionary, NSString;

@interface BWStreamingSessionAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {

	int _deviceType;
	int _devicePosition;
	unsigned _streamingTime;
	int _clientIDType;
	NSSet* _sunburnDetectOccurred;
	NSDictionary* _numberOfSphereJitterDetectAttempts;
	NSDictionary* _numberOfSphereJitterDetects;
	NSDictionary* _actuatorVendor;
	NSString* _sphereMode;
	unsigned _numberOfPhotoCaptures;
	unsigned _numberOfBurstPhotoCaptures;
	unsigned _numberOfBalancedPhotoCaptures;
	unsigned _timeToFirstPhotoCapture;
	unsigned _maxTimeSinceLastPhotoCapture;
	unsigned _minTimeSinceLastPhotoCapture;
	unsigned _numberOfButtonMashingCapturesAtRate0;
	unsigned _numberOfButtonMashingCapturesAtRate1;
	unsigned _numberOfButtonMashingEventsAtRate0;
	unsigned _numberOfButtonMashingEventsAtRate1;

}

@property (assign,nonatomic) int deviceType;                                                 //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) int devicePosition;                                             //@synthesize devicePosition=_devicePosition - In the implementation block
@property (assign,nonatomic) unsigned streamingTime;                                         //@synthesize streamingTime=_streamingTime - In the implementation block
@property (assign,nonatomic) int clientIDType;                                               //@synthesize clientIDType=_clientIDType - In the implementation block
@property (nonatomic,retain) NSSet * sunburnDetectOccurred;                                  //@synthesize sunburnDetectOccurred=_sunburnDetectOccurred - In the implementation block
@property (nonatomic,retain) NSDictionary * numberOfSphereJitterDetectAttempts;              //@synthesize numberOfSphereJitterDetectAttempts=_numberOfSphereJitterDetectAttempts - In the implementation block
@property (nonatomic,retain) NSDictionary * numberOfSphereJitterDetects;                     //@synthesize numberOfSphereJitterDetects=_numberOfSphereJitterDetects - In the implementation block
@property (nonatomic,retain) NSDictionary * actuatorVendor;                                  //@synthesize actuatorVendor=_actuatorVendor - In the implementation block
@property (nonatomic,retain) NSString * sphereMode;                                          //@synthesize sphereMode=_sphereMode - In the implementation block
@property (assign,nonatomic) unsigned numberOfPhotoCaptures;                                 //@synthesize numberOfPhotoCaptures=_numberOfPhotoCaptures - In the implementation block
@property (assign,nonatomic) unsigned numberOfBurstPhotoCaptures;                            //@synthesize numberOfBurstPhotoCaptures=_numberOfBurstPhotoCaptures - In the implementation block
@property (assign,nonatomic) unsigned numberOfBalancedPhotoCaptures;                         //@synthesize numberOfBalancedPhotoCaptures=_numberOfBalancedPhotoCaptures - In the implementation block
@property (assign,nonatomic) unsigned timeToFirstPhotoCapture;                               //@synthesize timeToFirstPhotoCapture=_timeToFirstPhotoCapture - In the implementation block
@property (assign,nonatomic) unsigned maxTimeSinceLastPhotoCapture;                          //@synthesize maxTimeSinceLastPhotoCapture=_maxTimeSinceLastPhotoCapture - In the implementation block
@property (assign,nonatomic) unsigned minTimeSinceLastPhotoCapture;                          //@synthesize minTimeSinceLastPhotoCapture=_minTimeSinceLastPhotoCapture - In the implementation block
@property (assign,nonatomic) unsigned numberOfButtonMashingCapturesAtRate0;                  //@synthesize numberOfButtonMashingCapturesAtRate0=_numberOfButtonMashingCapturesAtRate0 - In the implementation block
@property (assign,nonatomic) unsigned numberOfButtonMashingCapturesAtRate1;                  //@synthesize numberOfButtonMashingCapturesAtRate1=_numberOfButtonMashingCapturesAtRate1 - In the implementation block
@property (assign,nonatomic) unsigned numberOfButtonMashingEventsAtRate0;                    //@synthesize numberOfButtonMashingEventsAtRate0=_numberOfButtonMashingEventsAtRate0 - In the implementation block
@property (assign,nonatomic) unsigned numberOfButtonMashingEventsAtRate1;                    //@synthesize numberOfButtonMashingEventsAtRate1=_numberOfButtonMashingEventsAtRate1 - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)reset;
-(id)eventName;
-(int)deviceType;
-(void)setDeviceType:(int)arg1 ;
-(void)setClientIDType:(int)arg1 ;
-(id)eventDictionary;
-(NSString *)sphereMode;
-(void)setSphereMode:(NSString *)arg1 ;
-(int)devicePosition;
-(void)setDevicePosition:(int)arg1 ;
-(unsigned)streamingTime;
-(void)setStreamingTime:(unsigned)arg1 ;
-(int)clientIDType;
-(NSSet *)sunburnDetectOccurred;
-(void)setSunburnDetectOccurred:(NSSet *)arg1 ;
-(NSDictionary *)numberOfSphereJitterDetectAttempts;
-(void)setNumberOfSphereJitterDetectAttempts:(NSDictionary *)arg1 ;
-(NSDictionary *)numberOfSphereJitterDetects;
-(void)setNumberOfSphereJitterDetects:(NSDictionary *)arg1 ;
-(NSDictionary *)actuatorVendor;
-(void)setActuatorVendor:(NSDictionary *)arg1 ;
-(unsigned)numberOfPhotoCaptures;
-(void)setNumberOfPhotoCaptures:(unsigned)arg1 ;
-(unsigned)numberOfBurstPhotoCaptures;
-(void)setNumberOfBurstPhotoCaptures:(unsigned)arg1 ;
-(unsigned)numberOfBalancedPhotoCaptures;
-(void)setNumberOfBalancedPhotoCaptures:(unsigned)arg1 ;
-(unsigned)timeToFirstPhotoCapture;
-(void)setTimeToFirstPhotoCapture:(unsigned)arg1 ;
-(unsigned)maxTimeSinceLastPhotoCapture;
-(void)setMaxTimeSinceLastPhotoCapture:(unsigned)arg1 ;
-(unsigned)minTimeSinceLastPhotoCapture;
-(void)setMinTimeSinceLastPhotoCapture:(unsigned)arg1 ;
-(unsigned)numberOfButtonMashingCapturesAtRate0;
-(void)setNumberOfButtonMashingCapturesAtRate0:(unsigned)arg1 ;
-(unsigned)numberOfButtonMashingCapturesAtRate1;
-(void)setNumberOfButtonMashingCapturesAtRate1:(unsigned)arg1 ;
-(unsigned)numberOfButtonMashingEventsAtRate0;
-(void)setNumberOfButtonMashingEventsAtRate0:(unsigned)arg1 ;
-(unsigned)numberOfButtonMashingEventsAtRate1;
-(void)setNumberOfButtonMashingEventsAtRate1:(unsigned)arg1 ;
@end

