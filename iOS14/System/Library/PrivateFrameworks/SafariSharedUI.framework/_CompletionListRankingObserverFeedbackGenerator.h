/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

