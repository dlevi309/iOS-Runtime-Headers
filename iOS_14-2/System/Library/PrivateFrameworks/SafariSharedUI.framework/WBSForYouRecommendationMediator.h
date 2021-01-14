/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/UABestAppSuggestionManagerDelegate.h>

@protocol OS_dispatch_queue;
@class WBSForYouTopicManager, WBSFoundInRecommendationManager, WBSForYouDataSourceWeightManager, WBSForYouPerSitePreferenceManager, UABestAppSuggestionManager, UABestAppSuggestion, NSObject, NSCache, CKContextClient, NSArray, NSString;

@interface WBSForYouRecommendationMediator : NSObject <UABestAppSuggestionManagerDelegate> {

	WBSForYouTopicManager* _topicManager;
	WBSFoundInRecommendationManager* _foundInManager;
	WBSForYouDataSourceWeightManager* _dataSourceWeightManager;
	WBSForYouPerSitePreferenceManager* _perSitePreferenceManager;
	UABestAppSuggestionManager* _appSuggestionManager;
	UABestAppSuggestion* _currentAppSuggestion;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSCache* _messagesMetadataCache;
	CKContextClient* _contextClient;
	/*^block*/id _historyProvider;
	BOOL _ignoreMinimumNumberOfRecommendationsPerTopic;
	BOOL _suppressHistoryDeduplication;

}

@property (nonatomic,copy,readonly) NSArray * dataSources; 
@property (assign,nonatomic) BOOL ignoreMinimumNumberOfRecommendationsPerTopic;              //@synthesize ignoreMinimumNumberOfRecommendationsPerTopic=_ignoreMinimumNumberOfRecommendationsPerTopic - In the implementation block
@property (assign,nonatomic) BOOL suppressHistoryDeduplication;                              //@synthesize suppressHistoryDeduplication=_suppressHistoryDeduplication - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_adjustedTopicsWithTopics:(id)arg1 ;
+(id)_titleForRecommendationSource:(unsigned long long)arg1 ;
+(double)scoreForRecommendation:(id)arg1 weightManager:(id)arg2 simplifiedURLStringToLastVisitedDateMap:(id)arg3 ;
+(id)_titleForRecommendationTopicSource:(unsigned long long)arg1 ;
+(BOOL)areSiriSuggestionsEnabled;
+(void)_rankRecommendationsInPlace:(id)arg1 history:(id)arg2 weightManager:(id)arg3 suppressHistoryDeduplication:(BOOL)arg4 ;
-(NSArray *)dataSources;
-(void)setSuppressHistoryDeduplication:(BOOL)arg1 ;
-(BOOL)suppressHistoryDeduplication;
-(void)_createAppSuggestionsManagerIfNecessary;
-(void)stopListeningForURLSuggestionChanges;
-(void)_createPreferenceManagerIfNecessary;
-(void)fetchImageForRecommendation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)analyticsMetadataForRecommendation:(id)arg1 ;
-(void)banURLsOfSameDomainAsURL:(id)arg1 postingChangeNotificationWhenDone:(BOOL)arg2 ;
-(void)updatedTopicsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)banURLsOfSameDomainAsURL:(id)arg1 ;
-(void)retrieveHandoffRecommendationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadLinkPresentationMetadataForMessageWithGUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updatedRecommendationsForTopics:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_fetchImagesForRecommendations:(id)arg1 recommendationsDispatchGroup:(id)arg2 ;
-(void)beginListeningForURLSuggestionChanges;
-(void)_retrieveFoundInRecommendationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearDataSourceWeights;
-(void)_didUpdateFoundInSuggestions:(id)arg1 ;
-(void)setIgnoreMinimumNumberOfRecommendationsPerTopic:(BOOL)arg1 ;
-(id)_dataSourceWeightManager;
-(void)downvoteSource:(unsigned long long)arg1 ;
-(id)initWithContextClient:(id)arg1 historyProvider:(/*^block*/id)arg2 ;
-(void)downvoteSource:(unsigned long long)arg1 postingChangeNotificationWhenDone:(BOOL)arg2 ;
-(BOOL)ignoreMinimumNumberOfRecommendationsPerTopic;
-(id)recommendationFromDictionary:(id)arg1 ;
-(void)bestAppSuggestionChanged:(id)arg1 ;
-(void)obtainMessagesImagesWherePossibleForRecommendations:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)_endListeningForHandoffActivity;
-(void)_beginListeningForHandoffActivity;
@end

