/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/AccessibilityTextSizeModule.bundle/AccessibilityTextSizeModule
*/

#import <UIKitCore/UIViewController.h>

@class UILabel;

@interface AXCCTextSizeBackgroundViewController : UIViewController {

	UILabel* _textSizeLabel;
	UILabel* _defaultLabel;

}

@property (nonatomic,retain) UILabel * textSizeLabel;              //@synthesize textSizeLabel=_textSizeLabel - In the implementation block
@property (nonatomic,retain) UILabel * defaultLabel;               //@synthesize defaultLabel=_defaultLabel - In the implementation block
-(void)dealloc;
-(UILabel *)defaultLabel;
-(void)setDefaultLabel:(UILabel *)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)_updateLabelFonts;
-(void)_contentSizeCategoryDidChangeInternally:(id)arg1 ;
-(void)_updateDefaultLabelVisibilityForContentSizeCategory:(id)arg1 ;
-(UILabel *)textSizeLabel;
-(void)setTextSizeLabel:(UILabel *)arg1 ;
@end

