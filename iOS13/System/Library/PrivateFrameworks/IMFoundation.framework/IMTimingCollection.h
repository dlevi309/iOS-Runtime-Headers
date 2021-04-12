/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface IMTimingCollection : NSObject {

	NSMutableDictionary* _timings;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(void)startTimingForKey:(id)arg1 ;
-(void)stopTimingForKey:(id)arg1 ;
-(double)totalTimeForKey:(id)arg1 ;
-(void)removeTimingForKey:(id)arg1 ;
-(BOOL)hasKey:(id)arg1 ;
@end

