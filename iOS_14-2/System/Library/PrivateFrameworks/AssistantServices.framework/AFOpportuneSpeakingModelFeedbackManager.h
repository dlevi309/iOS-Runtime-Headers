/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol _DKKnowledgeQuerying;
@class AFOpportuneSpeakingModelFeedback, NSMutableDictionary;

@interface AFOpportuneSpeakingModelFeedbackManager : NSObject {

	AFOpportuneSpeakingModelFeedback* _feedback;
	id<_DKKnowledgeQuerying> _knowledgeStore;
	NSMutableDictionary* _usageEventsBySpeakableId;

}
-(void)loadIfNecessary;
-(id)init;
-(void)save;
-(id)lastNegativeFeedbackForContact:(id)arg1 ;
-(void)setLastNegativeFeedbackForContact:(id)arg1 ;
-(void)fetchNotificationUsageForSpeakableId:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(BOOL)interactionDetectedForSpeakableId:(id)arg1 ;
@end

