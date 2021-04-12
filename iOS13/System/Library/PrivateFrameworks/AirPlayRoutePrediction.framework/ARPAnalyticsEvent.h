/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
*/


@class NSString;

@interface ARPAnalyticsEvent : NSObject {

	BOOL _predictionCorrect;
	NSString* _prediction;
	NSString* _predictionReason;
	NSString* _suppressionReason;
	NSString* _predictedDevice;
	NSString* _actualDevice;
	NSString* _correction;
	NSString* _correctionTiming;
	NSString* _failure;
	unsigned long long _numberOfMicrolocations;

}

@property (nonatomic,copy) NSString * prediction;                                    //@synthesize prediction=_prediction - In the implementation block
@property (nonatomic,copy) NSString * predictionReason;                              //@synthesize predictionReason=_predictionReason - In the implementation block
@property (nonatomic,copy) NSString * suppressionReason;                             //@synthesize suppressionReason=_suppressionReason - In the implementation block
@property (assign,nonatomic) BOOL predictionCorrect;                                 //@synthesize predictionCorrect=_predictionCorrect - In the implementation block
@property (nonatomic,copy) NSString * predictedDevice;                               //@synthesize predictedDevice=_predictedDevice - In the implementation block
@property (nonatomic,copy) NSString * actualDevice;                                  //@synthesize actualDevice=_actualDevice - In the implementation block
@property (nonatomic,copy) NSString * correction;                                    //@synthesize correction=_correction - In the implementation block
@property (nonatomic,copy) NSString * correctionTiming;                              //@synthesize correctionTiming=_correctionTiming - In the implementation block
@property (nonatomic,copy) NSString * failure;                                       //@synthesize failure=_failure - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMicrolocations;              //@synthesize numberOfMicrolocations=_numberOfMicrolocations - In the implementation block
+(id)feedbackEventsFromAppUsageEvents:(id)arg1 playingEvents:(id)arg2 microLocationEvents:(id)arg3 feedbackEvents:(id)arg4 ;
-(id)init;
-(id)description;
-(NSString *)correction;
-(NSString *)prediction;
-(void)setPrediction:(NSString *)arg1 ;
-(NSString *)failure;
-(void)setFailure:(NSString *)arg1 ;
-(id)analyticsDictionary;
-(void)setActualDevice:(NSString *)arg1 ;
-(void)setNumberOfMicrolocations:(unsigned long long)arg1 ;
-(void)setSuppressionReason:(NSString *)arg1 ;
-(void)setPredictionCorrect:(BOOL)arg1 ;
-(void)setCorrection:(NSString *)arg1 ;
-(NSString *)predictionReason;
-(NSString *)suppressionReason;
-(BOOL)predictionCorrect;
-(NSString *)predictedDevice;
-(NSString *)actualDevice;
-(NSString *)correctionTiming;
-(unsigned long long)numberOfMicrolocations;
-(void)setPredictionReason:(NSString *)arg1 ;
-(void)setPredictedDevice:(NSString *)arg1 ;
-(void)setCorrectionTiming:(NSString *)arg1 ;
@end

