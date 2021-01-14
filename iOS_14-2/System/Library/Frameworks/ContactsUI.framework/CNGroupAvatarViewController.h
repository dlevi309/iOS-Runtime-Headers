/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIViewController.h>

@class CNGroupIdentity, CNVisualIdentityAvatarViewController;

@interface CNGroupAvatarViewController : UIViewController {

	CNGroupIdentity* _group;
	CNVisualIdentityAvatarViewController* _avatarViewController;

}

@property (nonatomic,retain) CNGroupIdentity * group;                                                  //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) CNVisualIdentityAvatarViewController * avatarViewController;              //@synthesize avatarViewController=_avatarViewController - In the implementation block
+(id)descriptorForRequiredKeys;
+(id)log;
+(unsigned long long)maxContactAvatars;
-(void)setGroup:(CNGroupIdentity *)arg1 ;
-(CNGroupIdentity *)group;
-(CNVisualIdentityAvatarViewController *)avatarViewController;
-(void)setAvatarViewController:(CNVisualIdentityAvatarViewController *)arg1 ;
-(id)initWithGroup:(id)arg1 avatarViewControllerSettings:(id)arg2 ;
-(void)groupIdentityDidUpdate:(id)arg1 ;
-(id)initWithGroup:(id)arg1 ;
@end

