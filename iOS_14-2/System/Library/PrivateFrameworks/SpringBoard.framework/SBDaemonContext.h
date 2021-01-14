/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol OS_dispatch_source;
@class NSObject, NSMutableDictionary;

@interface SBDaemonContext : NSObject {

	NSObject*<OS_dispatch_source> _dispatchSource;
	NSMutableDictionary* _daemonRequests;
	int _pid;

}
-(int)pid;
-(id)description;
-(id)initWithPid:(int)arg1 queue:(id)arg2 ;
-(void)addRequest:(id)arg1 forKey:(id)arg2 ;
-(void)removeRequestForKey:(id)arg1 ;
-(id)_newDispatchSourceForPid:(int)arg1 queue:(id)arg2 ;
-(void)_handleCancelation;
@end

