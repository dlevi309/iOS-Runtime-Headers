/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface CalAccumulatingQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _tags;
	NSMutableDictionary* _context;
	/*^block*/id _block;
	float _delay;
	BOOL _executionPending;

}
-(id)initWithQueue:(id)arg1 andBlock:(/*^block*/id)arg2 ;
-(void)executeBlock;
-(id)initWithQueue:(id)arg1 andBlock:(/*^block*/id)arg2 delay:(float)arg3 ;
-(void)updateTags:(id)arg1 withContext:(id)arg2 ;
-(void)updateTagsAndExecuteBlock:(id)arg1 withContext:(id)arg2 ;
-(void)updateTags:(id)arg1 ;
-(void)updateTagsAndExecuteBlock:(id)arg1 ;
@end

