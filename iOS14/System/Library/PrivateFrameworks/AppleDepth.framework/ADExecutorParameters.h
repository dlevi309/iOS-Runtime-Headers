/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


@class NSString, ADTimeProfiler;

@interface ADExecutorParameters : NSObject {

	BOOL _powerMeasureMode;
	NSString* _intermediatesOutputPath;
	long long _stepsToSkip;
	ADTimeProfiler* _timeProfiler;

}

@property (nonatomic,copy) NSString * intermediatesOutputPath;              //@synthesize intermediatesOutputPath=_intermediatesOutputPath - In the implementation block
@property (assign,nonatomic) BOOL powerMeasureMode;                         //@synthesize powerMeasureMode=_powerMeasureMode - In the implementation block
@property (assign,nonatomic) long long stepsToSkip;                         //@synthesize stepsToSkip=_stepsToSkip - In the implementation block
@property (nonatomic,retain) ADTimeProfiler * timeProfiler;                 //@synthesize timeProfiler=_timeProfiler - In the implementation block
-(id)init;
-(NSString *)intermediatesOutputPath;
-(BOOL)powerMeasureMode;
-(long long)stepsToSkip;
-(ADTimeProfiler *)timeProfiler;
-(void)setIntermediatesOutputPath:(NSString *)arg1 ;
-(void)setPowerMeasureMode:(BOOL)arg1 ;
-(void)setStepsToSkip:(long long)arg1 ;
-(void)setTimeProfiler:(ADTimeProfiler *)arg1 ;
@end

