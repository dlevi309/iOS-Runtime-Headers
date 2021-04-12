/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface br_pacer : NSObject {

	NSObject*<OS_dispatch_source> source;
	NSObject*<OS_dispatch_source> timer;
	NSObject*<OS_dispatch_queue> queue;
	/*^block*/id event_block;
	double last_fire_time;
	double min_fire_interval;
	AB ever_resumed;

}
-(void)dealloc;
@end

