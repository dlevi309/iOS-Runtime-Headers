/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

