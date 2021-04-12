/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class FLFollowUpController;

@interface SSFollowUpController : NSObject {

	FLFollowUpController* _followUpController;

}

@property (nonatomic,retain) FLFollowUpController * followUpController;              //@synthesize followUpController=_followUpController - In the implementation block
+(id)sharedController;
-(id)init;
-(id)pendingFollowUpWithIdentifier:(id)arg1 ;
-(id)dismissFollowUpWithIdentifier:(id)arg1 account:(id)arg2 ;
-(id)_dismissFollowUpWithIdentifier:(id)arg1 ;
-(id)_postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(id)postFollowUpWithIdentifier:(id)arg1 account:(id)arg2 userInfo:(id)arg3 ;
-(id)_createFollowUpItemForRenewCredentialsWithUserInfo:(id)arg1 ;
-(id)_createFollowUpItemForIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(id)dismissFollowUpWithIdentifier:(id)arg1 ;
-(id)postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(FLFollowUpController *)followUpController;
-(void)setFollowUpController:(FLFollowUpController *)arg1 ;
@end

