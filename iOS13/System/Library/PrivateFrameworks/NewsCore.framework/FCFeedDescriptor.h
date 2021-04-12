/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/FCFeedHeadlineSource.h>
#import <libobjc.A.dylib/FCFeedAdMetadataProviding.h>

@protocol FCContentContext;
@class NSString, NSArray;

@interface FCFeedDescriptor : NSObject <NSCopying, FCFeedHeadlineSource, FCFeedAdMetadataProviding> {

	long long _feedType;
	NSString* _identifier;
	id<FCContentContext> _context;
	NSArray* _otherArticleIDs;

}

@property (assign,nonatomic) long long feedType;                                           //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL needsForYouConfig; 
@property (nonatomic,readonly) id<FCFeedPaginating> feedPaginator; 
@property (nonatomic,readonly) long long feedSortMethod; 
@property (nonatomic,readonly) long long feedFilterOptions; 
@property (nonatomic,readonly) long long feedPersonalizationConfigurationSet; 
@property (nonatomic,readonly) BOOL derivesContentsFromExplicitSubscriptions; 
@property (nonatomic,readonly) BOOL hasEditions; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) id<FCFeedTheming> theme; 
@property (nonatomic,retain) id<FCContentContext> context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL hideAccessoryText; 
@property (nonatomic,retain) NSArray * otherArticleIDs;                                    //@synthesize otherArticleIDs=_otherArticleIDs - In the implementation block
@property (nonatomic,readonly) BOOL isSubscribable; 
@property (nonatomic,readonly) id<FCTagProviding> backingTag; 
@property (nonatomic,readonly) id<FCChannelProviding> backingChannel; 
@property (nonatomic,readonly) NSString * backingChannelID; 
@property (nonatomic,readonly) NSString * backingSectionID; 
@property (nonatomic,readonly) NSString * backingTopicID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * iAdIdentifier; 
@property (nonatomic,readonly) NSArray * iAdCategories; 
@property (nonatomic,readonly) NSArray * iAdKeywords; 
@property (nonatomic,readonly) long long iAdContentProvider; 
@property (nonatomic,readonly) NSString * iAdPrimaryAudience; 
@property (nonatomic,readonly) NSString * iAdFeedID; 
@property (nonatomic,readonly) NSString * iAdSectionID; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(id<FCFeedTheming>)theme;
-(NSArray *)iAdCategories;
-(NSArray *)iAdKeywords;
-(long long)feedPersonalizationConfigurationSet;
-(BOOL)isSubscribable;
-(id)fetchOperationForHeadlinesWithIDs:(id)arg1 context:(id)arg2 ;
-(id)feedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2 ;
-(id)streamOfLatestHeadlinesWithContext:(id)arg1 ;
-(void)fetchHeadlinesWithContext:(id)arg1 forIdentifiers:(id)arg2 downloadAssets:(BOOL)arg3 qualityOfService:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(NSString *)iAdIdentifier;
-(long long)iAdContentProvider;
-(NSString *)iAdPrimaryAudience;
-(NSString *)iAdFeedID;
-(NSString *)iAdSectionID;
-(id)languagesWithSubscriptionController:(id)arg1 ;
-(BOOL)derivesContentsFromExplicitSubscriptions;
-(BOOL)hasEditions;
-(BOOL)hideAccessoryText;
-(BOOL)subscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2 error:(id*)arg3 ;
-(BOOL)isMutedWithSubscriptionController:(id)arg1 ;
-(void)unsubscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2 ;
-(BOOL)isSubscribedToWithSubscriptionController:(id)arg1 ;
-(BOOL)hasNotificationsEnabledWithSubscriptionController:(id)arg1 ;
-(id<FCTagProviding>)backingTag;
-(id<FCChannelProviding>)backingChannel;
-(NSString *)backingChannelID;
-(NSString *)backingSectionID;
-(NSString *)backingTopicID;
-(id)streamOfHeadlinesWithIDs:(id)arg1 context:(id)arg2 cachedOnly:(BOOL)arg3 maxCachedAge:(double)arg4 ;
-(id)offlineFeedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2 ;
-(id)allEmitterClasses;
-(void)prepareToProvideFeedGroupEmittersWithCallbackQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)needsForYouConfig;
-(BOOL)shouldFilterFeedGroupEmitter:(id)arg1 withConfiguration:(id)arg2 ;
-(id<FCFeedPaginating>)feedPaginator;
-(long long)feedSortMethod;
-(long long)feedFilterOptions;
-(id)latestHeadlineResultsWithContext:(id)arg1 ;
-(void)d_fetchAllHeadlinesWithCloudContext:(id)arg1 sinceDate:(id)arg2 filter:(BOOL)arg3 personalize:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(long long)feedType;
-(void)setFeedType:(long long)arg1 ;
-(NSArray *)otherArticleIDs;
-(void)setOtherArticleIDs:(NSArray *)arg1 ;
@end

