/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HUGridEmptyHomeViewDelegate;
@class UILabel, HUColoredButton, HUChevronButton, NSArray;

@interface HUGridEmptyHomeView : UIView {

	id<HUGridEmptyHomeViewDelegate> _delegate;
	UILabel* _instructionsLabel;
	HUColoredButton* _addAccessoryButton;
	HUChevronButton* _learnToAddAccessoryButton;
	HUChevronButton* _storeButton;
	NSArray* _constraints;

}

@property (nonatomic,retain) UILabel * instructionsLabel;                                  //@synthesize instructionsLabel=_instructionsLabel - In the implementation block
@property (nonatomic,retain) HUColoredButton * addAccessoryButton;                         //@synthesize addAccessoryButton=_addAccessoryButton - In the implementation block
@property (nonatomic,retain) HUChevronButton * learnToAddAccessoryButton;                  //@synthesize learnToAddAccessoryButton=_learnToAddAccessoryButton - In the implementation block
@property (nonatomic,retain) HUChevronButton * storeButton;                                //@synthesize storeButton=_storeButton - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                        //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,readonly) BOOL canAddAccessories; 
@property (assign,nonatomic,__weak) id<HUGridEmptyHomeViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithCoder:(id)arg1 ;
-(id<HUGridEmptyHomeViewDelegate>)delegate;
-(void)setDelegate:(id<HUGridEmptyHomeViewDelegate>)arg1 ;
-(NSArray *)constraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)tintColorDidChange;
-(void)didMoveToSuperview;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)setInstructionsLabel:(UILabel *)arg1 ;
-(UILabel *)instructionsLabel;
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
@end

