/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/


@protocol HLPHelpTopicViewControllerDelegate <NSObject>
@optional
-(void)helpTopicViewControllerTableOfContentButtonTapped:(id)arg1;
-(void)helpTopicViewController:(id)arg1 selectedHelpTopicItem:(id)arg2;

@required
-(void)helpTopicViewControllerShowHelpBookInfo:(id)arg1;
-(void)helpTopicViewControllerDoneButtonTapped:(id)arg1;
-(void)helpTopicViewController:(id)arg1 topicLoaded:(id)arg2;
-(void)helpTopicViewController:(id)arg1 failToLoadWithError:(id)arg2;
-(void)helpTopicViewControllerCurrentTopicIsPassionPoint:(id)arg1;

@end

