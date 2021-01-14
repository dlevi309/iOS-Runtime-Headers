/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITextView *)textView;
-(NSString *)resourcePath;
-(void)setTextView:(UITextView *)arg1 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewDidLoad;
-(NSLayoutConstraint *)bottomMarginConstraint;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setResourcePath:(NSString *)arg1 ;
-(id)initWithContentsOfResource:(id)arg1 ofType:(id)arg2 ;
-(void)_configureLearnMoreView;
-(void)setBottomMarginConstraint:(NSLayoutConstraint *)arg1 ;
@end

