/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class NSDate;

@interface ICDebugTimer : NSObject {

	double _elapsedTime;
	NSDate* _startingDate;

}

@property (retain) NSDate * startingDate;              //@synthesize startingDate=_startingDate - In the implementation block
@property (assign) double elapsedTime;                 //@synthesize elapsedTime=_elapsedTime - In the implementation block
+(id)debugTimerForClass:(Class)arg1 ;
+(void)enableTimersForClass:(Class)arg1 ;
-(void)setElapsedTime:(double)arg1 ;
-(void)start;
-(void)pause;
-(void)setStartingDate:(NSDate *)arg1 ;
-(NSDate *)startingDate;
-(void)stop;
-(double)elapsedTime;
-(void)resume;
@end

