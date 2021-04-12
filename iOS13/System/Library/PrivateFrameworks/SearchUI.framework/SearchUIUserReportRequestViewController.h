/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <UIKitCore/UIAlertController.h>

@protocol SearchUIFeedbackDelegate;
@interface SearchUIUserReportRequestViewController : UIAlertController {

	id<SearchUIFeedbackDelegate> _feedbackDelegate;

}

@property (retain) id<SearchUIFeedbackDelegate> feedbackDelegate;              //@synthesize feedbackDelegate=_feedbackDelegate - In the implementation block
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(void)setFeedbackDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(id)initWithResult:(id)arg1 cardSection:(id)arg2 feedbackDelegate:(id)arg3 sourceView:(id)arg4 ;
-(void)sendFeedbackForResult:(id)arg1 cardSection:(id)arg2 selectedPunchout:(id)arg3 ;
@end

