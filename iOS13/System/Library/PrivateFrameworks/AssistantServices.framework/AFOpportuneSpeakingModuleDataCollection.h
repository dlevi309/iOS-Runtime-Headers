/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface AFOpportuneSpeakingModuleDataCollection : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _speakableMap;

}
+(id)sharedCollector;
-(id)init;
-(void)_deleteSpeakablesOlderThan:(id)arg1 ;
-(void)logSpeakable:(id)arg1 forContact:(id)arg2 withModelId:(id)arg3 withFeatures:(id)arg4 withScore:(float)arg5 ;
-(void)logFeedbackOfType:(long long)arg1 forSpeakableId:(id)arg2 withModelId:(id)arg3 ;
-(void)logRecommendedAction:(id)arg1 forSpeakableId:(id)arg2 withModelId:(id)arg3 ;
-(void)logInteractionEvents:(id)arg1 forSpeakableId:(id)arg2 ;
@end

