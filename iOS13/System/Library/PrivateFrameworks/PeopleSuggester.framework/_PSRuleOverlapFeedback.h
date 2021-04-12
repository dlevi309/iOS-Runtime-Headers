/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(_CDInteractionStore *)interactionStore;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(void)setInteractionStore:(_CDInteractionStore *)arg1 ;
-(id)sharesheetFeedbackEventsSinceDate:(id)arg1 ;
-(id)interactionStoreEventsSinceDate:(id)arg1 ;
-(id)matchFeedbackEvent:(id)arg1 WithInteractions:(id)arg2 ;
-(void)loggingForKnowledgeStoreEvent:(id)arg1 WithMatchingInteraction:(id)arg2 ;
-(id)contextItemsFromEvent:(id)arg1 ;
-(BMBehaviorRetriever *)behaviorRetriever;
-(id)constantFeaturesFromContextItems:(id)arg1 ;
-(id)constantPETFeaturesFromContextItems:(id)arg1 ;
-(id)feedbackPayloadForRule:(id)arg1 ForInteraction:(id)arg2 ForContextItems:(id)arg3 WithConstantFeatures:(id)arg4 ;
-(BOOL)recipientPredictedCorrectlyByRule:(id)arg1 interaction:(id)arg2 bundleId:(id)arg3 ;
-(BOOL)targetAppPredictedCorrectlyByRule:(id)arg1 bundleId:(id)arg2 ;
-(id)feedbackPETPayloadForRule:(id)arg1 ForInteraction:(id)arg2 ForContextItems:(id)arg3 WithConstantFeatures:(id)arg4 ;
-(int)bucketedValue:(int)arg1 ;
-(void)reviewLastDayOfShares;
-(NSUserDefaults *)ruleOverlapFeedbackDefaults;
-(void)setRuleOverlapFeedbackDefaults:(NSUserDefaults *)arg1 ;
@end

