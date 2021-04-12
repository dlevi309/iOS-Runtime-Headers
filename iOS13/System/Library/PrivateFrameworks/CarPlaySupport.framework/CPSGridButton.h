/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CPSButton.h>

@protocol CPTemplateDelegate;
@class CPSAbridgableLabel, UIView, CPGridButton;

@interface CPSGridButton : CPSButton {

	CPSAbridgableLabel* _customTitleLabel;
	UIView* _focusView;
	CPGridButton* _gridButton;
	id<CPTemplateDelegate> _templateDelegate;

}

@property (nonatomic,retain) CPSAbridgableLabel * customTitleLabel;                       //@synthesize customTitleLabel=_customTitleLabel - In the implementation block
@property (nonatomic,retain) UIView * focusView;                                          //@synthesize focusView=_focusView - In the implementation block
@property (nonatomic,retain) CPGridButton * gridButton;                                   //@synthesize gridButton=_gridButton - In the implementation block
@property (assign,nonatomic,__weak) id<CPTemplateDelegate> templateDelegate;              //@synthesize templateDelegate=_templateDelegate - In the implementation block
+(id)buttonWithGridButton:(id)arg1 templateDelegate:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)layoutSubviews;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_updateLabelColor;
-(UIView *)focusView;
-(void)setFocusView:(UIView *)arg1 ;
-(CPSAbridgableLabel *)customTitleLabel;
-(void)setCustomTitleLabel:(CPSAbridgableLabel *)arg1 ;
-(id<CPTemplateDelegate>)templateDelegate;
-(void)setTemplateDelegate:(id<CPTemplateDelegate>)arg1 ;
-(void)setGridButton:(CPGridButton *)arg1 ;
-(CPGridButton *)gridButton;
-(double)preferredLabelWidth;
@end

