/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@protocol _DKKnowledgeQuerying;
@class BMBehaviorRetriever, _CDInteractionStore, NSUserDefaults;

@interface _PSRuleOverlapFeedback : NSObject {

	BMBehaviorRetriever* _behaviorRetriever;
	_CDInteractionStore* _interactionStore;
	id<_DKKnowledgeQuerying> _knowledgeStore;
	NSUserDefaults* _ruleOverlapFeedbackDefaults;

}

@property (nonatomic,readonly) BMBehaviorRetriever * behaviorRetriever;                 //@synthesize behaviorRetriever=_behaviorRetriever - In the implementation block
@property (nonatomic,retain) _CDInteractionStore * interactionStore;                    //@synthesize interactionStore=_interactionStore - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying> knowledgeStore;                   //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,retain) NSUserDefaults * ruleOverlapFeedbackDefaults;              //@synthesize ruleOverlapFeedbackDefaults=_ruleOverlapFeedbackDefaults - In the implementation block
-(_CDInteractionStore *)interactionStore;
-(id)init;
-(int)bucketedValue:(int)arg1 ;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(BMBehaviorRetriever *)behaviorRetriever;
-(void)setInteractionStore:(_CDInteractionStore *)arg1 ;
-(id)sharesheetFeedbackEventsSinceDate:(id)arg1 ;
-(id)interactionStoreEventsSinceDate:(id)arg1 ;
-(id)matchFeedbackEvent:(id)arg1 WithInteractions:(id)arg2 ;
-(void)loggingForKnowledgeStoreEvent:(id)arg1 WithMatchingInteraction:(id)arg2 ;
-(void)modelAccuracyLogging:(id)arg1 WithMatchingInteraction:(id)arg2 ;
-(void)writeRecordObjcWithData:(id)arg1 ;
-(BOOL)doesSuggestionProxyMatch:(id)arg1 withInteraction:(id)arg2 ;
-(id)contextItemsFromEvent:(id)arg1 ;
-(BOOL)wasInteractionAmongSuggestLess:(id)arg1 ;
-(id)getInteractionRecipientFromInteraction:(id)arg1 ;
-(id)constantFeaturesFromContextItems:(id)arg1 ;
-(id)constantPETFeaturesFromContextItems:(id)arg1 ;
-(id)feedbackPayloadForRule:(id)arg1 ForInteraction:(id)arg2 ForContextItems:(id)arg3 WithConstantFeatures:(id)arg4 ;
-(BOOL)recipientPredictedCorrectlyByRule:(id)arg1 interaction:(id)arg2 bundleId:(id)arg3 ;
-(BOOL)targetAppPredictedCorrectlyByRule:(id)arg1 bundleId:(id)arg2 ;
-(id)feedbackPETPayloadForRule:(id)arg1 ForInteraction:(id)arg2 ForContextItems:(id)arg3 WithConstantFeatures:(id)arg4 ;
-(void)reviewLastDayOfShares;
-(NSUserDefaults *)ruleOverlapFeedbackDefaults;
-(void)setRuleOverlapFeedbackDefaults:(NSUserDefaults *)arg1 ;
@end

