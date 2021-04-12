/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface ASAsyncTransactionQueue : NSObject {

	NSObject*<OS_dispatch_queue> _lockingQueue;
	NSObject*<OS_dispatch_queue> _targetQueue;
	NSString* _description;

}
-(void)performTransaction:(/*^block*/id)arg1 ;
-(id)initWithDescription:(id)arg1 targetSerialQueue:(id)arg2 ;
@end

