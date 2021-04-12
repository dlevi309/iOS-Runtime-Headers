/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSArray, BKSApplicationStateMonitor;

@interface NSFileAccessProcessManager : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _suspensionHandler;
	NSArray* _urls;
	BKSApplicationStateMonitor* _monitor;
	id _assertionToken;
	int _pendingMessageCount;

}

@property (copy) id suspensionHandler; 
@property (copy) NSArray * URLs; 
+(BOOL)needToManageConnection:(id)arg1 forURLs:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)killProcessWithMessage:(id)arg1 ;
-(void)_ensureMonitor;
-(void)setSuspensionHandler:(id)arg1 ;
-(void)allowSuspension;
-(id)initWithClient:(id)arg1 queue:(id)arg2 ;
-(id)suspensionHandler;
-(void)setURLs:(NSArray *)arg1 ;
-(NSArray *)URLs;
-(void)safelySendMessageWithReplyUsingBlock:(/*^block*/id)arg1 ;
-(void)preventSuspensionWithActivityName:(id)arg1 ;
@end

