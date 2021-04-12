/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSDictionary;

@interface SGNameInversionPredictor : NSObject {

	NSDictionary* _tradToTrie;
	NSDictionary* _tradToInversionRate;
	double _confidenceThreshold;

}
+(id)sharedInstance;
+(BOOL)shouldInvertFirst:(id)arg1 last:(id)arg2 ;
-(id)init;
-(double)firstNameLikelihood:(id)arg1 underNamingTradition:(id)arg2 default:(double)arg3 ;
-(double)inversionRateForNamingTradition:(id)arg1 ;
-(BOOL)shouldInvertFirst:(id)arg1 last:(id)arg2 ;
-(BOOL)shouldInvertFirst:(id)arg1 last:(id)arg2 underNamingTradition:(id)arg3 ;
@end

