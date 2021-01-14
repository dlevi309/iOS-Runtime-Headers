/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <libobjc.A.dylib/REPredictorObserver.h>
#import <libobjc.A.dylib/REMLModelManagerObserver.h>

@class REMLSentimentAnalyzer, NSString;

@interface REContentRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REMLModelManagerObserver> {

	REMLSentimentAnalyzer* _sentimentAnalyzer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_features;
+(Class)_relevanceProviderClass;
-(void)pause;
-(void)resume;
-(id)_valuesForProvider:(id)arg1 context:(id)arg2 features:(id)arg3 ;
-(BOOL)_suppportsPortarit;
-(BOOL)_suppportsSentimentAnalysis;
-(void)modelManagerDidUpdateModel:(id)arg1 ;
-(void)predictorDidUpdate:(id)arg1 ;
@end

