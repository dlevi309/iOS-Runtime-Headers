/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillLayoutSubviews;
-(unsigned long long)mode;
-(void)setLayoutAttributes:(CNMeCardSharingPickerLayoutAttributes *)arg1 ;
-(CNMeCardSharingPickerLayoutAttributes *)layoutAttributes;
-(id)initWithAvatarViewController:(id)arg1 name:(id)arg2 layoutAttributes:(id)arg3 ;
-(double)desiredHeight;
-(CNMeCardSharingAvatarViewController *)avatarViewController;
-(void)setAvatarViewController:(CNMeCardSharingAvatarViewController *)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(NSString *)name;
-(void)viewDidLoad;
-(void)setName:(NSString *)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
@end

