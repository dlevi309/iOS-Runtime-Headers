/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol SGSuggestionsServiceURLsProtocol, OS_dispatch_queue;
@class NSObject;

@interface WBSFoundInRecommendationManager : NSObject {

	NSObject*<SGSuggestionsServiceURLsProtocol> _suggestionsService;
	NSObject*<OS_dispatch_queue> _internalQueue;
	int _changeNotificationToken;

}
+(BOOL)isBundleIdentifierFromMessages:(id)arg1 ;
+(id)_linkRecommendationsFromSGSuggestions:(id)arg1 contactStoreProvider:(/*^block*/id)arg2 ;
+(unsigned long long)foundInSourceFromBundleIdentifier:(id)arg1 ;
+(BOOL)isBundleIdentifierFromCalendar:(id)arg1 ;
-(void)_createInternalQueueIfNecessary;
-(void)recentRecommendationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)beginListeningForURLSuggestionChanges;
-(void)stopListeningForURLSuggestionChanges;
-(void)_recentURLRecommendationsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

