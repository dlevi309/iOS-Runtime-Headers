/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@class NSString;

@interface IMStopWatch : NSObject {

	unsigned long long _startTime;
	NSString* _descriptionString;

}
+(void)initialize;
+(id)stopwatchWithDescription:(id)arg1 ;
+(id)stopwatch;
-(id)init;
-(id)description;
-(void)start;
-(void)reset;
-(double)time;
-(void)report;
-(void)setDescription:(id)arg1 ;
-(void)reportWithMarker:(id)arg1 ;
@end

