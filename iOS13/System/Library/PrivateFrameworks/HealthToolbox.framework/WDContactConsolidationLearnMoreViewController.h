/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKViewController.h>

@class UITextView;

@interface WDContactConsolidationLearnMoreViewController : HKViewController {

	UITextView* _textView;
	/*^block*/id _dismissHandler;

}

@property (nonatomic,retain) UITextView * textView;              //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) id dismissHandler;                    //@synthesize dismissHandler=_dismissHandler - In the implementation block
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setDismissHandler:(id)arg1 ;
-(id)dismissHandler;
-(void)dismissButtonPressed:(id)arg1 ;
-(void)createTextView;
-(void)createDismissButton;
@end

