/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTitle:(id)arg1 ;
-(void)addBulletedListItemWithTitle:(id)arg1 description:(id)arg2 ;
-(UIStackView *)stackView;
-(void)loadView;
-(void)addSectionWithHeader:(id)arg1 content:(id)arg2 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)addSectionWithHeader:(id)arg1 content:(id)arg2 accessoryButton:(id)arg3 ;
-(void)setCurrentBulletedList:(OBTextBulletedList *)arg1 ;
-(OBTextBulletedList *)currentBulletedList;
-(void)addBulletedListItemWithTitle:(id)arg1 description:(id)arg2 accessoryButton:(id)arg3 ;
-(BOOL)shouldInlineButtonTray;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 contentLayout:(long long)arg3 ;
@end

