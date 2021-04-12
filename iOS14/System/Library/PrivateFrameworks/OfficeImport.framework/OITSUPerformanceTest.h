/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)precision;
-(void)setPrecision:(double)arg1 ;
-(TSUOpstat_s)timing;
-(void)run;
-(void)setTiming:(TSUOpstat_s)arg1 ;
-(BOOL)quiet;
-(void)report;
-(NSString *)name;
-(BOOL)passed;
-(void)dealloc;
-(void)setQuiet:(BOOL)arg1 ;
-(id)csvString;
-(id)initWithName:(id)arg1 selector:(SEL)arg2 target:(id)arg3 goalTime:(double)arg4 ;
-(double)goalTime;
-(void)setGoalTime:(double)arg1 ;
@end

