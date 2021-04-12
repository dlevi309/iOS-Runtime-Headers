/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol _DKKnowledgeQuerying;
@class AFOpportuneSpeakingModelFeedback, NSMutableDictionary;

@interface AFOpportuneSpeakingModelFeedbackManager : NSObject {

	AFOpportuneSpeakingModelFeedback* _feedback;
	id<_DKKnowledgeQuerying> _knowledgeStore;
	NSMutableDictionary* _usageEventsBySpeakableId;

}
-(id)init;
-(void)save;
-(void)loadIfNecessary;
-(id)lastNegativeFeedbackForContact:(id)arg1 ;
-(void)setLastNegativeFeedbackForContact:(id)arg1 ;
-(void)fetchNotificationUsageForSpeakableId:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(BOOL)interactionDetectedForSpeakableId:(id)arg1 ;
@end

