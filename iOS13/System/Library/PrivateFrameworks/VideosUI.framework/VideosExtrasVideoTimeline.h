/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSArray;

@interface VideosExtrasVideoTimeline : NSObject {

	NSArray* _timelineElements;
	NSArray* _events;

}

@property (nonatomic,readonly) NSArray * events;              //@synthesize events=_events - In the implementation block
-(id)description;
-(NSArray *)events;
-(id)initWithTimelineElements:(id)arg1 ;
-(id)eventForTime:(double)arg1 ;
@end

