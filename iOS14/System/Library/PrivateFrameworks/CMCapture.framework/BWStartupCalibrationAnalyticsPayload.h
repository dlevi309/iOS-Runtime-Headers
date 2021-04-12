/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
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
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setPortType:(NSString *)arg1 ;
-(id)init;
-(NSString *)portType;
-(id)eventName;
-(void)setGyroStandardDeviation:(float)arg1 ;
-(float)gyroStandardDeviation;
-(id)eventDictionary;
-(float)sessionOffset;
-(void)setSessionOffset:(float)arg1 ;
-(float)deltaOffset;
-(void)setDeltaOffset:(float)arg1 ;
-(int)apsVoltage;
-(void)setApsVoltage:(int)arg1 ;
-(float)maxAcceleration;
-(void)setMaxAcceleration:(float)arg1 ;
-(float)deltaAcceleration;
-(void)setDeltaAcceleration:(float)arg1 ;
-(BOOL)headroomErrorOccurred;
-(void)setHeadroomErrorOccurred:(BOOL)arg1 ;
-(BOOL)convergeErrorOccurred;
-(void)setConvergeErrorOccurred:(BOOL)arg1 ;
-(BOOL)motionErrorOccurred;
-(void)setMotionErrorOccurred:(BOOL)arg1 ;
-(BOOL)confidenceErrorOccurred;
-(BOOL)gcolEntry;
-(void)setConfidenceErrorOccurred:(BOOL)arg1 ;
-(BOOL)largeOffsetErrorOccurred;
-(void)setLargeOffsetErrorOccurred:(BOOL)arg1 ;
-(BOOL)saturationErrorOccurred;
-(void)setSaturationErrorOccurred:(BOOL)arg1 ;
-(void)setGcolEntry:(BOOL)arg1 ;
-(BOOL)closedLoopEntry;
-(void)setClosedLoopEntry:(BOOL)arg1 ;
-(void)reset;
-(float)accelStandardDeviation;
-(void)setAccelStandardDeviation:(float)arg1 ;
-(void)dealloc;
@end

