/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface CalFileSensor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;
	/*^block*/id _eventBlock;
	BOOL _started;
	NSString* _path;

}

@property (nonatomic,retain,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL started;                        //@synthesize started=_started - In the implementation block
@property (nonatomic,copy,readonly) id eventBlock;                  //@synthesize eventBlock=_eventBlock - In the implementation block
-(id)init;
-(id)initWithPath:(id)arg1 eventBlock:(/*^block*/id)arg2 ;
-(id)eventBlock;
-(void)start;
-(BOOL)started;
-(NSString *)path;
-(void)stop;
-(id)description;
-(void)dealloc;
@end

