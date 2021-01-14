/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)suspensionHandler;
-(NSArray *)URLs;
-(void)safelySendMessageWithReplyUsingBlock:(/*^block*/id)arg1 ;
-(void)_ensureMonitor;
-(void)invalidate;
-(void)preventSuspensionWithActivityName:(id)arg1 ;
-(void)allowSuspension;
-(void)killProcessWithMessage:(id)arg1 ;
-(id)initWithClient:(id)arg1 queue:(id)arg2 ;
-(void)setURLs:(NSArray *)arg1 ;
-(void)setSuspensionHandler:(id)arg1 ;
-(void)dealloc;
@end

