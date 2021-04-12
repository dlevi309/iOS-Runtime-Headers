/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@class NSMutableDictionary, NSDictionary, BMBehaviorRetriever, _CDInteractionStore;

@interface _PSBehaviorRuleFeatureExtraction : NSObject {

	BOOL _constantFeaturesReady;
	NSMutableDictionary* _constantFeatures;
	NSDictionary* _metadata;
	BMBehaviorRetriever* _behaviorRetriever;
	_CDInteractionStore* _interactionStore;

}

@property (nonatomic,readonly) BMBehaviorRetriever * behaviorRetriever;              //@synthesize behaviorRetriever=_behaviorRetriever - In the implementation block
@property (nonatomic,readonly) _CDInteractionStore * interactionStore;               //@synthesize interactionStore=_interactionStore - In the implementation block
@property (assign,nonatomic) BOOL constantFeaturesReady;                             //@synthesize constantFeaturesReady=_constantFeaturesReady - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * constantFeatures;                 //@synthesize constantFeatures=_constantFeatures - In the implementation block
@property (readonly) NSDictionary * metadata;                                        //@synthesize metadata=_metadata - In the implementation block
-(_CDInteractionStore *)interactionStore;
-(void)extractFeaturesGivenRule:(id)arg1 contextItems:(id)arg2 features:(id)arg3 ;
-(void)setConstantFeatures:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)constantFeatures;
-(void)extractConstantFeaturesForMLModelWithContext:(id)arg1 features:(id)arg2 ;
-(void)transferConstantFeatures:(id)arg1 to:(id)arg2 ;
-(BOOL)constantFeaturesReady;
-(void)setConstantFeaturesReady:(BOOL)arg1 ;
-(id)initWithMetadata:(id)arg1 ;
-(int)bucketedValue:(int)arg1 ;
-(BMBehaviorRetriever *)behaviorRetriever;
-(NSDictionary *)metadata;
@end

