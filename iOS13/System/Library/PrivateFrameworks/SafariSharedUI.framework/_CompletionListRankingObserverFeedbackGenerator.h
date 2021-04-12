/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol _CompletionListRankingObserverFeedbackGenerator <NSObject>
@property (assign,nonatomic,__weak) id<_CompletionListRankingObserverFeedbackGeneratorDelegate> delegate; 
@optional
-(id<_CompletionListRankingObserverFeedbackGeneratorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)didBeginRanking;
-(void)didEndRanking;
-(void)didBeginSectionWithBundleIdentifier:(id)arg1;

@required
-(void)didAddItem:(id)arg1 hidingOutrankedResults:(id)arg2 hidingDuplicateResults:(id)arg3;
-(void)removeAllSectionsAndItems;

@end

