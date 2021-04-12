/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface OITSUPerformanceTest : NSObject {

	NSString* mName;
	SEL mSelector;
	id mTarget;
	double mGoalTime;
	double mPrecision;
	BOOL mQuiet;
	TSUOpstat_s mTiming;
	BOOL mPassed;

}

@property (nonatomic,readonly) NSString * name; 
@property (assign,nonatomic) TSUOpstat_s timing; 
@property (assign,nonatomic) double goalTime; 
@property (assign,nonatomic) double precision; 
@property (assign,nonatomic) BOOL quiet; 
@property (nonatomic,readonly) BOOL passed; 
+(id)csvHeader;
-(void)dealloc;
-(void)run;
-(NSString *)name;
-(double)precision;
-(void)setPrecision:(double)arg1 ;
-(void)report;
-(TSUOpstat_s)timing;
-(void)setTiming:(TSUOpstat_s)arg1 ;
-(BOOL)quiet;
-(void)setQuiet:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 selector:(SEL)arg2 target:(id)arg3 goalTime:(double)arg4 ;
-(id)csvString;
-(double)goalTime;
-(void)setGoalTime:(double)arg1 ;
-(BOOL)passed;
@end

