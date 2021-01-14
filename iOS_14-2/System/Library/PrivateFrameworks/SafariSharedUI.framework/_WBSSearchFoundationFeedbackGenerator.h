/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/_CompletionListRankingObserverFeedbackGenerator.h>

@class NSDate, NSMutableArray, NSString, SFRankingFeedback;

@interface _WBSSearchFoundationFeedbackGenerator : NSObject <_CompletionListRankingObserverFeedbackGenerator> {

	NSDate* _rankingStartDate;
	NSMutableArray* _sectionRankingFeedbackObjects;
	NSString* _currentSectionBundleIdentifier;
	NSMutableArray* _currentSectionResultRankingFeedbackObjects;
	SFRankingFeedback* _rankingFeedback;

}

@property (nonatomic,readonly) SFRankingFeedback * rankingFeedback;                                                    //@synthesize rankingFeedback=_rankingFeedback - In the implementation block
@property (assign,nonatomic,__weak) id<_CompletionListRankingObserverFeedbackGeneratorDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(SFRankingFeedback *)rankingFeedback;
-(void)didBeginRanking;
-(void)didEndRanking;
-(void)didBeginSectionWithBundleIdentifier:(id)arg1 ;
-(void)didAddItem:(id)arg1 hidingOutrankedResults:(id)arg2 hidingDuplicateResults:(id)arg3 ;
-(void)removeAllSectionsAndItems;
-(void)_commitPreviousSectionIfNecessary;
@end

