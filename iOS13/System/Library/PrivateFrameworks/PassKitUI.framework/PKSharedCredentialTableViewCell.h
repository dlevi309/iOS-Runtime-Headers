/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKAvatarTableViewCell.h>

@class PKSharedCredentialsGroupController, PKSharedCredentialGroup;

@interface PKSharedCredentialTableViewCell : PKAvatarTableViewCell {

	PKSharedCredentialsGroupController* _groupController;
	PKSharedCredentialGroup* _group;

}

@property (nonatomic,retain) PKSharedCredentialGroup * group;              //@synthesize group=_group - In the implementation block
-(void)setGroup:(PKSharedCredentialGroup *)arg1 ;
-(PKSharedCredentialGroup *)group;
-(void)layoutSubviews;
-(id)initWithGroup:(id)arg1 groupController:(id)arg2 reuseIdentifier:(id)arg3 delegate:(id)arg4 ;
@end

