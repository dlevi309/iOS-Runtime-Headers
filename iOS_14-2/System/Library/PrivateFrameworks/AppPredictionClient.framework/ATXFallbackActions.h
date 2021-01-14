/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class NSBundle, ATXProactiveSuggestionClientModelSpecification;

@interface ATXFallbackActions : NSObject {

	NSBundle* _bundle;
	ATXProactiveSuggestionClientModelSpecification* _clientModelSpec;

}
+(id)fallbackActionsBundle;
+(id)dateWithoutMinutesAndSeconds:(id)arg1 ;
+(id)stringForFallbackActionType:(unsigned long long)arg1 ;
+(unsigned long long)fallbackActionTypeForString:(id)arg1 ;
-(id)localizedStringForKey:(id)arg1 ;
-(id)init;
-(id)proactiveSuggestionForAction:(id)arg1 ;
-(id)suggestionforSpecifiedFallbackActionType:(unsigned long long)arg1 ;
-(id)searchSafari;
-(id)startATimer;
-(id)createAnEventForCurrentDate:(id)arg1 ;
-(id)sendAMessage;
-(id)viewPhotos;
-(id)initWithClientModelSpec:(id)arg1 ;
-(id)suggestionsForAllFallbackActions;
@end

