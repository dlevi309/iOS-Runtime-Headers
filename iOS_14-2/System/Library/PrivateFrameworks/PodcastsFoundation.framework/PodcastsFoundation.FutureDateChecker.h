/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/


@interface PodcastsFoundation.FutureDateChecker : NSObject {

	 leniency;
	 assertOnFutures;

}
+(id)sharedInstance;
+(BOOL)sharedInstanceShouldAssertTestsOnly;
+(void)setSharedInstanceShouldAssertTestsOnly:(BOOL)arg1 ;
-(id)init;
-(id)initWithLeniency:(double)arg1 assertOnFutures:(BOOL)arg2 ;
-(BOOL)isFutureWithTimestamp:(double)arg1 boundBy:(double)arg2 ;
-(BOOL)isFutureWithTimestamp:(double)arg1 ;
-(BOOL)isFutureWithDate:(id)arg1 boundBy:(id)arg2 ;
-(double)timestamp:(double)arg1 boundBy:(double)arg2 ;
-(double)timestampForDate:(id)arg1 boundBy:(id)arg2 ;
-(double)timestampBoundByNow:(double)arg1 ;
-(double)timestampBoundByNowForDate:(id)arg1 ;
@end

