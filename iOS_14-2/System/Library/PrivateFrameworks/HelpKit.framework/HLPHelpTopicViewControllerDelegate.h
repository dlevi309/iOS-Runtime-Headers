/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/


@protocol HLPHelpTopicViewControllerDelegate <NSObject>
@optional
-(void)helpTopicViewControllerTableOfContentButtonTapped:(id)arg1;
-(void)helpTopicViewController:(id)arg1 selectedHelpTopicItem:(id)arg2;

@required
-(void)helpTopicViewController:(id)arg1 traitCollectionChanged:(id)arg2;
-(void)helpTopicViewControllerShowHelpBookInfo:(id)arg1;
-(void)helpTopicViewControllerDoneButtonTapped:(id)arg1;
-(void)helpTopicViewController:(id)arg1 topicLoaded:(id)arg2;
-(void)helpTopicViewController:(id)arg1 failToLoadWithError:(id)arg2;
-(void)helpTopicViewControllerCurrentTopicIsPassionPoint:(id)arg1;

@end

