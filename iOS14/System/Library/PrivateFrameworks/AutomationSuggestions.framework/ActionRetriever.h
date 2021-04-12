/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutomationSuggestions.framework/AutomationSuggestions
*/


@protocol _DKKnowledgeQuerying;
@class NSMutableDictionary;

@interface ActionRetriever : NSObject {

	id<_DKKnowledgeQuerying> _knowledgeStore;
	NSMutableDictionary* _intentCache;
	NSMutableDictionary* _activityCache;

}

@property (nonatomic,retain) id<_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * intentCache;                    //@synthesize intentCache=_intentCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activityCache;                  //@synthesize activityCache=_activityCache - In the implementation block
-(id)init;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(void)setActivityCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)activityCache;
-(id)queryForIntentsWithBundleId:(id)arg1 offset:(unsigned long long)arg2 limit:(unsigned long long)arg3 ;
-(id)queryForActivitiesWithBundleId:(id)arg1 activityType:(id)arg2 ;
-(id)retrieveIntentEventForItem:(id)arg1 ;
-(id)retrieveActivityEventForItem:(id)arg1 ;
-(NSMutableDictionary *)intentCache;
-(void)setIntentCache:(NSMutableDictionary *)arg1 ;
@end

