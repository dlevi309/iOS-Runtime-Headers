/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface NSXPCStoreNotificationObserver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _token;
	id _store;

}
-(void)dealloc;
-(void)setStore:(id)arg1 ;
-(id)_store;
-(id)initForObservationWithName:(id)arg1 store:(id)arg2 ;
@end

