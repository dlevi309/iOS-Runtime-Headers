/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol SGSuggestionsServiceURLsProtocol, OS_dispatch_queue;
@class NSObject;

@interface WBSFoundInRecommendationManager : NSObject {

	NSObject*<SGSuggestionsServiceURLsProtocol> _suggestionsService;
	NSObject*<OS_dispatch_queue> _internalQueue;
	int _changeNotificationToken;

}
+(BOOL)isBundleIdentifierFromCalendar:(id)arg1 ;
+(id)_linkRecommendationsFromSGSuggestions:(id)arg1 contactStoreProvider:(/*^block*/id)arg2 ;
+(unsigned long long)foundInSourceFromBundleIdentifier:(id)arg1 ;
+(BOOL)isBundleIdentifierFromMessages:(id)arg1 ;
-(void)stopListeningForURLSuggestionChanges;
-(void)recentRecommendationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)beginListeningForURLSuggestionChanges;
-(void)_createInternalQueueIfNecessary;
-(void)_recentURLRecommendationsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

