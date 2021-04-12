/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol FLFollowUpControllerDelegate;
@class NSString, NSXPCListener;

@interface FLFollowUpController : NSObject <NSXPCListenerDelegate> {

	NSString* _clientIdentifier;
	NSString* _machServiceName;
	NSXPCListener* _listener;
	id<FLFollowUpControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FLFollowUpControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FLFollowUpControllerDelegate>)delegate;
-(void)setDelegate:(id<FLFollowUpControllerDelegate>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithClientIdentifier:(id)arg1 ;
-(void)postFollowUpItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pendingFollowUpItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)clearPendingFollowUpItems:(id*)arg1 ;
-(id)pendingFollowUpItems:(id*)arg1 ;
-(BOOL)postFollowUpItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)arg1 error:(id*)arg2 ;
-(BOOL)clearNotificationForItem:(id)arg1 error:(id*)arg2 ;
-(id)initWithClientIdentifier:(id)arg1 xpcEndpoint:(id)arg2 ;
-(id)initWithClientIdentifier:(id)arg1 machServiceName:(id)arg2 delegate:(id)arg3 ;
-(unsigned long long)countOfPendingFollowUpItems:(id*)arg1 ;
-(void)countOfPendingFollowUpItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)clearPendingFollowUpItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)_postHSA2LoginNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_postHSA2PasswordChangeForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_postHSA2LoginCode:(id)arg1 withNotification:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_tearDownHSA2LoginNotificationWithPushMessageID:(id)arg1 ;
-(void)_postHSA2PasswordResetNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didActivateHSA2LoginNotification:(id)arg1 ;
@end

