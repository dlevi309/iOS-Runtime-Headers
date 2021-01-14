/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateCellWithContact:(id)arg1 ;
-(id)localizedGroupState;
-(id)initWithGroup:(id)arg1 groupController:(id)arg2 reuseIdentifier:(id)arg3 delegate:(id)arg4 ;
@end

