/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@protocol OS_nw_activity;
@class NSObject, NSMutableSet;

@interface SiriCoreNetworkActivity : NSObject {

	NSObject*<OS_nw_activity> _activity;
	long long _state;
	long long _parentLabel;
	NSMutableSet* _connections;

}
-(void)stop;
-(id)nwActivity;
-(void)activate;
-(void)addConnection:(id)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(long long)parentLabel;
-(id)initWithLabel:(long long)arg1 parent:(id)arg2 ;
-(void)_networkActivityState:(long long)arg1 ;
-(void)_networkActivityAbort;
-(void)_networkActivityRestart;
@end

