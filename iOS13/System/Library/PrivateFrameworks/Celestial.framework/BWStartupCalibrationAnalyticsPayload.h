/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <libobjc.A.dylib/BWCoreAnalyticsPayload.h>

@class NSString;

@interface BWStartupCalibrationAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {

	NSString* _portType;
	float _accelStandardDeviation;
	float _gyroStandardDeviation;
	float _sessionOffset;
	float _deltaOffset;
	int _apsVoltage;
	float _maxAcceleration;
	float _deltaAcceleration;
	BOOL _headroomErrorOccurred;
	BOOL _convergeErrorOccurred;
	BOOL _motionErrorOccurred;
	BOOL _confidenceErrorOccurred;
	BOOL _largeOffsetErrorOccurred;
	BOOL _saturationErrorOccurred;
	BOOL _success;
	BOOL _gcolEntry;
	BOOL _closedLoopEntry;

}

@property (nonatomic,retain) NSString * portType;                        //@synthesize portType=_portType - In the implementation block
@property (assign,nonatomic) float accelStandardDeviation;               //@synthesize accelStandardDeviation=_accelStandardDeviation - In the implementation block
@property (assign,nonatomic) float gyroStandardDeviation;                //@synthesize gyroStandardDeviation=_gyroStandardDeviation - In the implementation block
@property (assign,nonatomic) float sessionOffset;                        //@synthesize sessionOffset=_sessionOffset - In the implementation block
@property (assign,nonatomic) float deltaOffset;                          //@synthesize deltaOffset=_deltaOffset - In the implementation block
@property (assign,nonatomic) int apsVoltage;                             //@synthesize apsVoltage=_apsVoltage - In the implementation block
@property (assign,nonatomic) float maxAcceleration;                      //@synthesize maxAcceleration=_maxAcceleration - In the implementation block
@property (assign,nonatomic) float deltaAcceleration;                    //@synthesize deltaAcceleration=_deltaAcceleration - In the implementation block
@property (assign,nonatomic) BOOL headroomErrorOccurred;                 //@synthesize headroomErrorOccurred=_headroomErrorOccurred - In the implementation block
@property (assign,nonatomic) BOOL convergeErrorOccurred;                 //@synthesize convergeErrorOccurred=_convergeErrorOccurred - In the implementation block
@property (assign,nonatomic) BOOL motionErrorOccurred;                   //@synthesize motionErrorOccurred=_motionErrorOccurred - In the implementation block
@property (assign,nonatomic) BOOL confidenceErrorOccurred;               //@synthesize confidenceErrorOccurred=_confidenceErrorOccurred - In the implementation block
@property (assign,nonatomic) BOOL largeOffsetErrorOccurred;              //@synthesize largeOffsetErrorOccurred=_largeOffsetErrorOccurred - In the implementation block
@property (assign,nonatomic) BOOL saturationErrorOccurred;               //@synthesize saturationErrorOccurred=_saturationErrorOccurred - In the implementation block
@property (assign,nonatomic) BOOL success;                               //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL gcolEntry;                             //@synthesize gcolEntry=_gcolEntry - In the implementation block
@property (assign,nonatomic) BOOL closedLoopEntry;                       //@synthesize closedLoopEntry=_closedLoopEntry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)reset;
-(id)eventName;
-(NSString *)portType;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setPortType:(NSString *)arg1 ;
-(void)setAccelStandardDeviation:(float)arg1 ;
-(void)setGyroStandardDeviation:(float)arg1 ;
-(void)setSessionOffset:(float)arg1 ;
-(void)setDeltaOffset:(float)arg1 ;
-(void)setApsVoltage:(int)arg1 ;
-(void)setHeadroomErrorOccurred:(BOOL)arg1 ;
-(void)setConvergeErrorOccurred:(BOOL)arg1 ;
-(void)setMotionErrorOccurred:(BOOL)arg1 ;
-(void)setConfidenceErrorOccurred:(BOOL)arg1 ;
-(void)setLargeOffsetErrorOccurred:(BOOL)arg1 ;
-(void)setSaturationErrorOccurred:(BOOL)arg1 ;
-(void)setGcolEntry:(BOOL)arg1 ;
-(void)setClosedLoopEntry:(BOOL)arg1 ;
-(void)setMaxAcceleration:(float)arg1 ;
-(void)setDeltaAcceleration:(float)arg1 ;
-(id)eventDictionary;
-(float)accelStandardDeviation;
-(float)gyroStandardDeviation;
-(float)sessionOffset;
-(float)deltaOffset;
-(int)apsVoltage;
-(float)maxAcceleration;
-(float)deltaAcceleration;
-(BOOL)headroomErrorOccurred;
-(BOOL)convergeErrorOccurred;
-(BOOL)motionErrorOccurred;
-(BOOL)confidenceErrorOccurred;
-(BOOL)largeOffsetErrorOccurred;
-(BOOL)saturationErrorOccurred;
-(BOOL)gcolEntry;
-(BOOL)closedLoopEntry;
@end

