/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
*/

#import <libobjc.A.dylib/TCSClientXPC.h>

@protocol TCSCallCenterDelegate;
@class NSXPCConnection, TCSCall, NSString;

@interface TCSCallCenter : NSObject <TCSClientXPC> {

	NSXPCConnection* _connection;
	TCSCall* _call;
	id<TCSCallCenterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TCSCallCenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applicationWillEnterForeground;
-(void)callStatusChanged:(id)arg1 ;
-(id)init;
-(id<TCSCallCenterDelegate>)delegate;
-(void)disconnectCall:(id)arg1 ;
-(void)setDelegate:(id<TCSCallCenterDelegate>)arg1 ;
-(BOOL)hasValidConnection;
-(void)invalidate;
-(id)activeCall;
-(id)currentCall;
-(void)sessionViewControllerViewDidAppear;
-(void)setUplinkMuted:(BOOL)arg1 for:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)queryIsTinCannable:(id)arg1 ;
-(void)callConnected:(id)arg1 ;
-(void)remoteUplinkMuteChanged:(id)arg1 ;
-(void)synchronouslyFetchCall;
-(id)_callPassingPredicate:(/*^block*/id)arg1 ;
-(id)ringingCall;
-(id)endingCall;
-(void)logEntryForCallWithUniqueProxyIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

