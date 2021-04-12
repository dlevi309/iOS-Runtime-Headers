/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol OS_dispatch_queue, TVRMSSessionManagerDelegate;
@class NSMutableDictionary, NSObject;

@interface TVRMSSessionManager : NSObject {

	NSMutableDictionary* _sessions;
	NSObject*<OS_dispatch_queue> _sessionManagerQueue;
	id<TVRMSSessionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVRMSSessionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<TVRMSSessionManagerDelegate>)delegate;
-(void)setDelegate:(id<TVRMSSessionManagerDelegate>)arg1 ;
-(id)sessionWithIdentifier:(int)arg1 ;
-(id)persistedSessionIdentifiers;
-(void)refreshSessionWithIdentifier:(int)arg1 ;
-(void)beginSession:(id)arg1 timeout:(int)arg2 shouldTakePowerAssertion:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)endSessionWithIdentifier:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)identifierForSession:(id)arg1 ;
-(int)_uniqueSessionIdentifier;
-(void)_updatePersistedSessionIdentifiers;
-(void)_scheduleSessionExpirationWithIdentifier:(int)arg1 timeout:(int)arg2 ;
@end

