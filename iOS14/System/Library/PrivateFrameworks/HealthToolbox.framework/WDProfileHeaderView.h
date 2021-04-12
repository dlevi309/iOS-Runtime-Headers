/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)avatarView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setFirstName:(id)arg1 lastName:(id)arg2 ;
-(void)setNameHidden:(BOOL)arg1 ;
-(void)setAvatarView:(UIView *)arg1 ;
-(UILabel *)nameLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateFont;
-(void)setNameLabel:(UILabel *)arg1 ;
-(NSPersonNameComponentsFormatter *)nameFormatter;
-(void)setNameFormatter:(NSPersonNameComponentsFormatter *)arg1 ;
-(BOOL)isNameHidden;
@end

