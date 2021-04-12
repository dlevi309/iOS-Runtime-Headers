/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)pause;
-(void)resume;
-(void)stop;
-(void)start;
-(double)elapsedTime;
-(void)setElapsedTime:(double)arg1 ;
-(void)setStartingDate:(NSDate *)arg1 ;
-(NSDate *)startingDate;
@end

