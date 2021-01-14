/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@protocol OS_nw_activity;
@class NSObject, NSMutableSet;

@interface SiriCoreNetworkActivity : NSObject {

	NSObject*<OS_nw_activity> _activity;
	long long _state;
	long long _parentLabel;
	NSMutableSet* _connections;
	BOOL _hasStarted;

}
-(id)nwActivity;
-(void)setHasStarted:(BOOL)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(BOOL)hasStarted;
-(void)activate;
-(void)addConnection:(id)arg1 ;
-(id)nwActivityToken;
-(long long)parentLabel;
-(id)initWithLabel:(long long)arg1 parent:(id)arg2 ;
-(void)stopWithCompletionReason:(long long)arg1 ;
-(void)_networkActivityState:(long long)arg1 ;
-(int)_completionReasonToNWActivityCompletionReason:(long long)arg1 ;
-(void)_networkActivityAbort;
-(void)_networkActivityRestart;
@end

