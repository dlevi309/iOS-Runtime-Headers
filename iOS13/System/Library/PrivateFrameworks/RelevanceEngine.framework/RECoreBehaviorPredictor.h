/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/REPredictorObserver.h>

@class BMBehaviorRetriever, NSArray, NSMapTable, NSString;

@interface RECoreBehaviorPredictor : REPredictor <REPredictorObserver> {

	BMBehaviorRetriever* _retriever;
	NSArray* _rules;
	NSMapTable* _locations;
	unsigned long long _dayValue;
	unsigned long long _hourValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)updateInterval;
+(id)supportedFeatures;
-(id)_init;
-(void)pause;
-(void)resume;
-(void)update;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
-(void)predictorDidUpdate:(id)arg1 ;
-(id)_bmtypeForShortcutType:(unsigned long long)arg1 filterLevel:(unsigned long long)arg2 ;
-(id)_retrieveFeatureValueForItemType:(id)arg1 shortcutIdentifier:(id)arg2 antecedentType:(id)arg3 antecedentValue:(id)arg4 ;
@end

