/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(UILabel *)defaultLabel;
-(void)setDefaultLabel:(UILabel *)arg1 ;
-(void)_updateLabelFonts;
-(void)dealloc;
-(void)_contentSizeCategoryDidChangeInternally:(id)arg1 ;
-(void)_updateDefaultLabelVisibilityForContentSizeCategory:(id)arg1 ;
-(UILabel *)textSizeLabel;
-(void)setTextSizeLabel:(UILabel *)arg1 ;
@end

