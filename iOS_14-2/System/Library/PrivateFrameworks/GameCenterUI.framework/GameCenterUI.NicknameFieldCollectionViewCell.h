/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GameCenterUI.BaseCollectionViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class _TtC12GameCenterUI20DynamicTypeTextField;

@interface GameCenterUI.NicknameFieldCollectionViewCell : GameCenterUI.BaseCollectionViewCell <UITextFieldDelegate> {

	 previousTitleTextColor;
	 textLabel;
	 loadingIndicator;
	 nicknamePresenter;
	 accessoryAction;
	 disabled;

}

@property (readonly,nonatomic) _TtC12GameCenterUI20DynamicTypeTextField * accessibilityTextLabel; 
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2 ;
-(void)textFieldDidChangeSelection:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(_TtC12GameCenterUI20DynamicTypeTextField *)accessibilityTextLabel;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

