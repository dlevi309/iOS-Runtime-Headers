/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/_CompletionListRankingObserverFeedbackGeneratorDelegate.h>

@protocol _CompletionListRankingObserverFeedbackGenerator, WBSCompletionListRankingObserverDelegate;
@class SFRankingFeedback, NSString;

@interface WBSCompletionListRankingObserver : NSObject <_CompletionListRankingObserverFeedbackGeneratorDelegate> {

	id<_CompletionListRankingObserverFeedbackGenerator> _feedbackGenerator;
	id<WBSCompletionListRankingObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WBSCompletionListRankingObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SFRankingFeedback * rankingFeedback; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WBSCompletionListRankingObserverDelegate>)delegate;
-(void)setDelegate:(id<WBSCompletionListRankingObserverDelegate>)arg1 ;
-(id)_createFeedbackGenerator;
-(SFRankingFeedback *)rankingFeedback;
-(void)didBeginRanking;
-(void)didEndRanking;
-(void)didBeginSectionWithBundleIdentifier:(id)arg1 ;
-(void)didAddItem:(id)arg1 hidingOutrankedResults:(id)arg2 hidingDuplicateResults:(id)arg3 ;
-(void)removeAllSectionsAndItems;
-(Class)_feedbackGeneratorClass;
-(unsigned long long)completionListRankingObserverFeedbackGenerator:(id)arg1 frequentlyVisitedSitesIndexOfItem:(id)arg2 hidingItem:(id)arg3 ;
-(void)didAddItem:(id)arg1 ;
@end

