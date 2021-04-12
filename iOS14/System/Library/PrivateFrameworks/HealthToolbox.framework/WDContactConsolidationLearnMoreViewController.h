/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setDismissHandler:(id)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(id)dismissHandler;
-(void)viewDidLoad;
-(void)dismissButtonPressed:(id)arg1 ;
-(void)createTextView;
-(void)createDismissButton;
@end

