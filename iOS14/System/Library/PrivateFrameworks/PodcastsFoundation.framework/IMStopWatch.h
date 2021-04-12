/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/


@class NSString;

@interface IMStopWatch : NSObject {

	unsigned long long _startTime;
	NSString* _descriptionString;

}
+(void)initialize;
+(id)stopwatchWithDescription:(id)arg1 ;
+(id)stopwatch;
-(double)time;
-(id)init;
-(void)start;
-(void)report;
-(id)description;
-(void)reset;
-(void)setDescription:(id)arg1 ;
-(void)reportWithMarker:(id)arg1 ;
@end

