/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CARDNDUI.framework/CARDNDUI
*/

#import <UIKitCore/UIViewController.h>

@class NSString, UITextView, NSLayoutConstraint;

@interface _CARLearnMoreViewController : UIViewController {

	NSString* _resourcePath;
	UITextView* _textView;
	NSLayoutConstraint* _bottomMarginConstraint;

}

@property (nonatomic,copy) NSString * resourcePath;                                    //@synthesize resourcePath=_resourcePath - In the implementation block
@property (nonatomic,retain) UITextView * textView;                                    //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomMarginConstraint;              //@synthesize bottomMarginConstraint=_bottomMarginConstraint - In the implementation block
-(NSString *)resourcePath;
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)setResourcePath:(NSString *)arg1 ;
-(NSLayoutConstraint *)bottomMarginConstraint;
-(id)initWithContentsOfResource:(id)arg1 ofType:(id)arg2 ;
-(void)_configureLearnMoreView;
-(void)setBottomMarginConstraint:(NSLayoutConstraint *)arg1 ;
@end

