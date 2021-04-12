/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictionsInternals.framework/ProactiveInputPredictionsInternals
*/


@class NSDictionary, _PASLock;

@interface PSGExperimentResolver : NSObject {

	NSDictionary* _zkwLangAndNamespaces;
	_PASLock* _responseSuggestionsConfigLock;
	NSDictionary* _wordBoundaryLangAndNamespaces;
	_PASLock* _wordBoundaryConfigLock;

}
+(id)sharedInstance;
-(id)init;
-(id)getResponseSuggestionsExperimentConfig:(id)arg1 ;
-(id)getWordBoundarySuggestionsExperimentConfig:(id)arg1 ;
-(id)_getDefaultWordBoundarySuggestionsExperimentConfig:(id)arg1 ;
-(id)_getDefaultResponseSuggestionsExperimentConfig:(id)arg1 ;
@end

