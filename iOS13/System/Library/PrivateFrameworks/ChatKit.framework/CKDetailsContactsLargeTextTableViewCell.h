/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKDetailsContactsTableViewCell.h>

@class UIStackView, NSLayoutConstraint;

@interface CKDetailsContactsLargeTextTableViewCell : CKDetailsContactsTableViewCell {

	UIStackView* _buttonStackView;
	NSLayoutConstraint* _buttonsTopConstraint;

}

@property (nonatomic,retain) UIStackView * buttonStackView;                          //@synthesize buttonStackView=_buttonStackView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * buttonsTopConstraint;              //@synthesize buttonsTopConstraint=_buttonsTopConstraint - In the implementation block
+(double)preferredHeight;
+(double)estimatedHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setShowsLocation:(BOOL)arg1 ;
-(void)configureWithViewModel:(id)arg1 ;
-(void)_initConstraints;
-(void)_updateVisibleButtons;
-(void)setButtonStackView:(UIStackView *)arg1 ;
-(UIStackView *)buttonStackView;
-(void)setButtonsTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)buttonsTopConstraint;
@end

