/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OBWelcomeController.h>

@class UIStackView, OBTextBulletedList;

@interface OBTextWelcomeController : OBWelcomeController {

	UIStackView* _stackView;
	OBTextBulletedList* _currentBulletedList;

}

@property (nonatomic,retain) UIStackView * stackView;                               //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) OBTextBulletedList * currentBulletedList;              //@synthesize currentBulletedList=_currentBulletedList - In the implementation block
-(void)loadView;
-(UIStackView *)stackView;
-(id)initWithTitle:(id)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)addSectionWithHeader:(id)arg1 content:(id)arg2 accessoryButton:(id)arg3 ;
-(void)setCurrentBulletedList:(OBTextBulletedList *)arg1 ;
-(void)addBulletedListItemWithTitle:(id)arg1 description:(id)arg2 accessoryButton:(id)arg3 ;
-(OBTextBulletedList *)currentBulletedList;
-(BOOL)shouldInlineButtonTray;
-(void)addSectionWithHeader:(id)arg1 content:(id)arg2 ;
-(void)addBulletedListItemWithTitle:(id)arg1 description:(id)arg2 ;
@end

