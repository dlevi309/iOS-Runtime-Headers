/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <UIKitCore/UIAlertController.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@protocol SFFeedbackListener;
@class SFSearchResult, UIViewController, NSString;

@interface SearchUIGradingFeedbackViewController : UIAlertController <MFMailComposeViewControllerDelegate> {

	SFSearchResult* _result;
	UIViewController* _viewControllerForPresenting;
	id<SFFeedbackListener> _feedbackDelegate;

}

@property (nonatomic,retain) SFSearchResult * result;                                     //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) UIViewController * viewControllerForPresenting;              //@synthesize viewControllerForPresenting=_viewControllerForPresenting - In the implementation block
@property (assign,nonatomic,__weak) id<SFFeedbackListener> feedbackDelegate;              //@synthesize feedbackDelegate=_feedbackDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setResult:(SFSearchResult *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(void)addActionForGrade:(unsigned long long)arg1 title:(id)arg2 ;
-(void)setViewControllerForPresenting:(UIViewController *)arg1 ;
-(id)initWithResult:(id)arg1 feedbackDelegate:(id)arg2 ;
-(void)setFeedbackDelegate:(id<SFFeedbackListener>)arg1 ;
-(SFSearchResult *)result;
-(id<SFFeedbackListener>)feedbackDelegate;
-(UIViewController *)viewControllerForPresenting;
@end

