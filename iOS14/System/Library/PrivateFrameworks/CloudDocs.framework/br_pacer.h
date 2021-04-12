/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

