/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKDASession.h>

@class DAKeySharingSession;

@interface PKAppletSubcredentialSharingSession : PKDASession

@property (nonatomic,retain) DAKeySharingSession * session; 
+(id)createSessionWithDelegate:(id)arg1 ;
-(BOOL)cancelSharingInvitationWithIdentifier:(id)arg1 ;
-(void)acceptSharingInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestSharingInvitation:(id)arg1 from:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAccountAttestation:(id)arg1 forCredential:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)accountAttestionRequestForCredential:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)sendSharingInvitationWithRequest:(id)arg1 auth:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendSharingInvitation:(id)arg1 forInvitationRequest:(id)arg2 withSharedCredential:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

