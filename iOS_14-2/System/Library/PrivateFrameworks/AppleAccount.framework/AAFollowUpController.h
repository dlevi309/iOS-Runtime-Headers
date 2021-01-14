/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <libobjc.A.dylib/AAFollowUpProtocol.h>

@interface AAFollowUpController : NSObject <AAFollowUpProtocol>
-(BOOL)_shouldPostRenewFollowup:(id)arg1 ;
-(id)followUpItemForIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)pendingFollowUpWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissFollowUpWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_followUpItemForStartUsing:(id)arg1 ;
-(id)_followUpItemForVerifyTerms:(id)arg1 ;
-(id)_followUpItemForRenewCredentials:(id)arg1 ;
-(id)_followupActionUserInfo:(id)arg1 ;
-(id)_followUpController;
-(void)_dismissFollowUpWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pendingFollowUpsForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)followUpItemForIdentifier:(id)arg1 ;
-(void)postFollowUpWithIdentifier:(id)arg1 forAccount:(id)arg2 userInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dismissFollowUpWithIdentifier:(id)arg1 forAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissFollowUpsForAccount:(id)arg1 identifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

