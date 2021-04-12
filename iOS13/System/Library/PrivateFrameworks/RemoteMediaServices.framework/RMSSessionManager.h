/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/


@protocol OS_dispatch_queue, RMSSessionManagerDelegate;
@class NSMutableDictionary, NSObject;

@interface RMSSessionManager : NSObject {

	NSMutableDictionary* _sessions;
	NSObject*<OS_dispatch_queue> _sessionManagerQueue;
	id<RMSSessionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RMSSessionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<RMSSessionManagerDelegate>)delegate;
-(void)setDelegate:(id<RMSSessionManagerDelegate>)arg1 ;
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

