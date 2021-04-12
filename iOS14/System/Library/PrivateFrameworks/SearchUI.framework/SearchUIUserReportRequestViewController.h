/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <UIKitCore/UIAlertController.h>

@protocol SearchUIFeedbackDelegate;
@interface SearchUIUserReportRequestViewController : UIAlertController {

	id<SearchUIFeedbackDelegate> _feedbackDelegate;

}

@property (retain) id<SearchUIFeedbackDelegate> feedbackDelegate;              //@synthesize feedbackDelegate=_feedbackDelegate - In the implementation block
-(id)initWithResult:(id)arg1 cardSection:(id)arg2 feedbackDelegate:(id)arg3 sourceView:(id)arg4 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)setFeedbackDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(void)sendFeedbackForResult:(id)arg1 cardSection:(id)arg2 selectedPunchout:(id)arg3 ;
@end

