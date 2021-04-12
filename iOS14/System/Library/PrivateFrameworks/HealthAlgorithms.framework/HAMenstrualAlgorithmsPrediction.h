/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
*/


#import <HealthAlgorithms/HealthAlgorithms-Structs.h>
@class NSArray;

@interface HAMenstrualAlgorithmsPrediction : NSObject {

	BOOL _isOngoingMenstruation;
	unsigned _julianDayOfWindowStart;
	NSArray* _startProbability;
	NSArray* _endProbability;
	NSArray* _convolvedProbability;
	double _startProbabilityMean;
	double _endProbabilityMean;
	double _convolvedProbabilityMean;
	double _startProbabilityStdDev;
	double _endProbabilityStdDev;
	double _convolvedProbabilityStdDev;
	NSRange _lowRange;

}

@property (assign,nonatomic) unsigned julianDayOfWindowStart;                //@synthesize julianDayOfWindowStart=_julianDayOfWindowStart - In the implementation block
@property (nonatomic,retain) NSArray * startProbability;                     //@synthesize startProbability=_startProbability - In the implementation block
@property (nonatomic,retain) NSArray * endProbability;                       //@synthesize endProbability=_endProbability - In the implementation block
@property (nonatomic,retain) NSArray * convolvedProbability;                 //@synthesize convolvedProbability=_convolvedProbability - In the implementation block
@property (assign,nonatomic) double startProbabilityMean;                    //@synthesize startProbabilityMean=_startProbabilityMean - In the implementation block
@property (assign,nonatomic) double endProbabilityMean;                      //@synthesize endProbabilityMean=_endProbabilityMean - In the implementation block
@property (assign,nonatomic) double convolvedProbabilityMean;                //@synthesize convolvedProbabilityMean=_convolvedProbabilityMean - In the implementation block
@property (assign,nonatomic) double startProbabilityStdDev;                  //@synthesize startProbabilityStdDev=_startProbabilityStdDev - In the implementation block
@property (assign,nonatomic) double endProbabilityStdDev;                    //@synthesize endProbabilityStdDev=_endProbabilityStdDev - In the implementation block
@property (assign,nonatomic) double convolvedProbabilityStdDev;              //@synthesize convolvedProbabilityStdDev=_convolvedProbabilityStdDev - In the implementation block
@property (assign,nonatomic) NSRange lowRange;                               //@synthesize lowRange=_lowRange - In the implementation block
@property (assign,nonatomic) BOOL isOngoingMenstruation;                     //@synthesize isOngoingMenstruation=_isOngoingMenstruation - In the implementation block
-(unsigned)julianDayOfWindowStart;
-(void)setJulianDayOfWindowStart:(unsigned)arg1 ;
-(NSArray *)startProbability;
-(NSArray *)endProbability;
-(void)setStartProbability:(NSArray *)arg1 ;
-(void)setEndProbability:(NSArray *)arg1 ;
-(NSArray *)convolvedProbability;
-(void)setConvolvedProbability:(NSArray *)arg1 ;
-(double)startProbabilityMean;
-(void)setStartProbabilityMean:(double)arg1 ;
-(double)endProbabilityMean;
-(void)setEndProbabilityMean:(double)arg1 ;
-(double)convolvedProbabilityMean;
-(void)setConvolvedProbabilityMean:(double)arg1 ;
-(double)startProbabilityStdDev;
-(void)setStartProbabilityStdDev:(double)arg1 ;
-(double)endProbabilityStdDev;
-(void)setEndProbabilityStdDev:(double)arg1 ;
-(double)convolvedProbabilityStdDev;
-(void)setConvolvedProbabilityStdDev:(double)arg1 ;
-(void)setLowRange:(NSRange)arg1 ;
-(BOOL)isOngoingMenstruation;
-(void)setIsOngoingMenstruation:(BOOL)arg1 ;
-(NSRange)lowRange;
@end

