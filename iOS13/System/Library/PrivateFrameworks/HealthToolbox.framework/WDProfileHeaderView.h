/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILabel, NSPersonNameComponentsFormatter;

@interface WDProfileHeaderView : UIView {

	UIView* _avatarView;
	UILabel* _nameLabel;
	NSPersonNameComponentsFormatter* _nameFormatter;

}

@property (nonatomic,retain) UILabel * nameLabel;                                          //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) NSPersonNameComponentsFormatter * nameFormatter;              //@synthesize nameFormatter=_nameFormatter - In the implementation block
@property (nonatomic,retain) UIView * avatarView;                                          //@synthesize avatarView=_avatarView - In the implementation block
@property (assign,getter=isNameHidden,nonatomic) BOOL nameHidden; 
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(NSPersonNameComponentsFormatter *)nameFormatter;
-(UIView *)avatarView;
-(void)setAvatarView:(UIView *)arg1 ;
-(void)_updateFont;
-(void)setNameFormatter:(NSPersonNameComponentsFormatter *)arg1 ;
-(void)setFirstName:(id)arg1 lastName:(id)arg2 ;
-(void)setNameHidden:(BOOL)arg1 ;
-(BOOL)isNameHidden;
@end

