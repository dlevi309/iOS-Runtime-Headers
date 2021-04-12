/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIViewController.h>

@class CNMeCardSharingAvatarViewController, NSString, CNMeCardSharingPickerLayoutAttributes, UILabel;

@interface CNMeCardSharingHeaderViewController : UIViewController {

	CNMeCardSharingAvatarViewController* _avatarViewController;
	NSString* _name;
	unsigned long long _mode;
	CNMeCardSharingPickerLayoutAttributes* _layoutAttributes;
	UILabel* _nameLabel;

}

@property (nonatomic,retain) CNMeCardSharingAvatarViewController * avatarViewController;              //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,retain) NSString * name;                                                         //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                 //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) CNMeCardSharingPickerLayoutAttributes * layoutAttributes;                //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                                     //@synthesize nameLabel=_nameLabel - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(CNMeCardSharingPickerLayoutAttributes *)layoutAttributes;
-(void)setLayoutAttributes:(CNMeCardSharingPickerLayoutAttributes *)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(id)initWithAvatarViewController:(id)arg1 name:(id)arg2 layoutAttributes:(id)arg3 ;
-(double)desiredHeight;
-(CNMeCardSharingAvatarViewController *)avatarViewController;
-(void)setAvatarViewController:(CNMeCardSharingAvatarViewController *)arg1 ;
@end

