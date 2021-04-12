/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@interface BSMonotonicReferenceTime : NSObject {

	double _startTimeStamp;

}

@property (nonatomic,readonly) double timeIntervalSinceNow; 
@property (nonatomic,readonly) double timeIntervalToNow; 
+(id)now;
+(id)distantFuture;
+(id)distantPast;
+(id)referenceTimeForDate:(id)arg1 ;
+(id)referenceTimeWithTimeIntervalSinceNow:(double)arg1 ;
-(double)timeIntervalSinceReferenceTime:(id)arg1 ;
-(double)timeIntervalToNow;
-(id)date;
-(double)timeIntervalSinceNow;
@end

