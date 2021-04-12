/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SFSearchResult *)result;
-(void)setResult:(SFSearchResult *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(id<SFFeedbackListener>)feedbackDelegate;
-(void)setFeedbackDelegate:(id<SFFeedbackListener>)arg1 ;
-(void)addActionForGrade:(unsigned long long)arg1 title:(id)arg2 ;
-(UIViewController *)viewControllerForPresenting;
-(void)setViewControllerForPresenting:(UIViewController *)arg1 ;
-(id)initWithResult:(id)arg1 feedbackDelegate:(id)arg2 ;
@end

