/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKDASession.h>

@class DAKeySharingSession;

@interface PKAppletSubcredentialSharingSession : PKDASession

@property (nonatomic,retain) DAKeySharingSession * session; 
+(id)createSessionWithDelegate:(id)arg1 ;
-(void)setAccountAttestation:(id)arg1 forCredential:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)accountAttestionRequestForCredential:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)cancelSharingInvitationWithIdentifier:(id)arg1 ;
-(void)sendSharingInvitationWithRequest:(id)arg1 auth:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendSharingInvitation:(id)arg1 forInvitationRequest:(id)arg2 withSharedCredential:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)requestSharingInvitation:(id)arg1 from:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)acceptSharingInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

