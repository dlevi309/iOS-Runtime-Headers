/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/


@class ATXProactiveSuggestionClientModel, NSString;

@interface ATXProactiveCardSuggestionClient : NSObject {

	ATXProactiveSuggestionClientModel* _clientModel;
	NSString* _sourceId;

}
-(void)updateSuggestions:(id)arg1 ;
-(void)updateSuggestions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)retrieveCurrentSuggestionsWithReply:(/*^block*/id)arg1 ;
-(void)clearSuggestions;
-(void)retrieveAvailableCriterionIdentifiersWithReply:(/*^block*/id)arg1 ;
-(id)createSuggestionWithAppBundleIdentifier:(id)arg1 widgetBundleIdentifier:(id)arg2 criterion:(id)arg3 applicableLayouts:(unsigned long long)arg4 suggestionIdentifier:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 intent:(id)arg8 metadata:(id)arg9 ;
-(id)initWithSourceId:(id)arg1 ;
-(id)createSuggestionWithAppBundleIdentifier:(id)arg1 widgetBundleIdentifier:(id)arg2 widgetKind:(id)arg3 criterion:(id)arg4 applicableLayouts:(unsigned long long)arg5 suggestionIdentifier:(id)arg6 startDate:(id)arg7 endDate:(id)arg8 intent:(id)arg9 metadata:(id)arg10 ;
-(void)clearSuggestionsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

