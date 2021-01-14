/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUNewUserEducationWrapperViewDelegate.h>

@protocol HUGridEmptyHomeViewDelegate;
@class UILabel, HUColoredButton, HUChevronButton, HUNewUserEducationWrapperView, NSArray, NSString;

@interface HUGridEmptyHomeView : UIView <HUNewUserEducationWrapperViewDelegate> {

	id<HUGridEmptyHomeViewDelegate> _delegate;
	UILabel* _instructionsLabel;
	HUColoredButton* _addAccessoryButton;
	HUChevronButton* _learnToAddAccessoryButton;
	HUChevronButton* _storeButton;
	HUNewUserEducationWrapperView* _userEducationView;
	NSArray* _constraints;

}

@property (nonatomic,retain) UILabel * instructionsLabel;                                    //@synthesize instructionsLabel=_instructionsLabel - In the implementation block
@property (nonatomic,retain) HUColoredButton * addAccessoryButton;                           //@synthesize addAccessoryButton=_addAccessoryButton - In the implementation block
@property (nonatomic,retain) HUChevronButton * learnToAddAccessoryButton;                    //@synthesize learnToAddAccessoryButton=_learnToAddAccessoryButton - In the implementation block
@property (nonatomic,retain) HUChevronButton * storeButton;                                  //@synthesize storeButton=_storeButton - In the implementation block
@property (nonatomic,retain) HUNewUserEducationWrapperView * userEducationView;              //@synthesize userEducationView=_userEducationView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                          //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,readonly) BOOL canAddAccessories; 
@property (assign,nonatomic,__weak) id<HUGridEmptyHomeViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<HUGridEmptyHomeViewDelegate>)delegate;
-(void)didMoveToSuperview;
-(void)setDelegate:(id<HUGridEmptyHomeViewDelegate>)arg1 ;
-(void)updateConstraints;
-(id)initWithCoder:(id)arg1 ;
-(void)setInstructionsLabel:(UILabel *)arg1 ;
-(UILabel *)instructionsLabel;
-(void)newUserEducationWrapperViewLearnMoreButtonPressed:(id)arg1 ;
-(void)_setupCommonAppearance;
-(BOOL)canAddAccessories;
-(void)setAddAccessoryButton:(HUColoredButton *)arg1 ;
-(HUColoredButton *)addAccessoryButton;
-(void)_addNewAccessory:(id)arg1 ;
-(void)setLearnToAddAccessoryButton:(HUChevronButton *)arg1 ;
-(HUChevronButton *)learnToAddAccessoryButton;
-(void)_openLearnToAddAccessories:(id)arg1 ;
-(void)setStoreButton:(HUChevronButton *)arg1 ;
-(HUChevronButton *)storeButton;
-(void)_openStore:(id)arg1 ;
-(HUNewUserEducationWrapperView *)userEducationView;
-(void)setUserEducationView:(HUNewUserEducationWrapperView *)arg1 ;
@end

