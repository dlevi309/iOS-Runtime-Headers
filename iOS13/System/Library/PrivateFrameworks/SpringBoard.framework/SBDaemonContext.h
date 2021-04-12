/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol OS_dispatch_source;
@class NSObject, NSMutableDictionary;

@interface SBDaemonContext : NSObject {

	NSObject*<OS_dispatch_source> _dispatchSource;
	NSMutableDictionary* _daemonRequests;
	int _pid;

}
-(id)description;
-(int)pid;
-(id)initWithPid:(int)arg1 queue:(id)arg2 ;
-(void)addRequest:(id)arg1 forKey:(id)arg2 ;
-(void)removeRequestForKey:(id)arg1 ;
-(id)_newDispatchSourceForPid:(int)arg1 queue:(id)arg2 ;
-(void)_handleCancelation;
@end

