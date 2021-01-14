/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface NSXPCStoreNotificationObserver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _token;
	id _store;

}
-(void)setStore:(id)arg1 ;
-(id)_store;
-(id)initForObservationWithName:(id)arg1 store:(id)arg2 ;
-(void)dealloc;
@end

