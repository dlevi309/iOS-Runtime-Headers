/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<FCFeedTheming>)theme;
-(long long)feedType;
-(id)languagesWithSubscriptionController:(id)arg1 ;
-(long long)feedSortMethod;
-(id)init;
-(BOOL)hasEditions;
-(id)offlineFeedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2 ;
-(BOOL)needsForYouConfig;
-(void)d_fetchAllHeadlinesWithCloudContext:(id)arg1 sinceDate:(id)arg2 filter:(BOOL)arg3 personalize:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setFeedType:(long long)arg1 ;
-(long long)feedFilterOptions;
-(id<FCTagProviding>)backingTag;
-(id)allEmitterClasses;
-(id<FCContentContext>)context;
-(id)feedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2 ;
-(NSArray *)iAdCategories;
-(NSString *)name;
-(BOOL)derivesContentsFromExplicitSubscriptions;
-(NSString *)description;
-(NSString *)iAdIdentifier;
-(id)fetchOperationForHeadlinesWithIDs:(id)arg1 context:(id)arg2 ;
-(long long)iAdContentProvider;
-(id)streamOfLatestHeadlinesWithContext:(id)arg1 ;
-(BOOL)subscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2 error:(id*)arg3 ;
-(void)fetchHeadlinesWithContext:(id)arg1 forIdentifiers:(id)arg2 downloadAssets:(BOOL)arg3 qualityOfService:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(NSString *)iAdPrimaryAudience;
-(NSString *)iAdSectionID;
-(id<FCChannelProviding>)backingChannel;
-(BOOL)isSubscribable;
-(BOOL)isMutedWithSubscriptionController:(id)arg1 ;
-(void)unsubscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2 ;
-(BOOL)isSubscribedToWithSubscriptionController:(id)arg1 ;
-(BOOL)hasNotificationsEnabledWithSubscriptionController:(id)arg1 ;
-(NSString *)backingChannelID;
-(NSString *)backingSectionID;
-(NSString *)backingTopicID;
-(id)latestHeadlineResultsWithContext:(id)arg1 ;
-(id)streamOfHeadlinesWithIDs:(id)arg1 context:(id)arg2 cachedOnly:(BOOL)arg3 maxCachedAge:(double)arg4 ;
-(NSArray *)otherArticleIDs;
-(void)setOtherArticleIDs:(NSArray *)arg1 ;
-(NSString *)iAdFeedID;
-(unsigned long long)hash;
-(long long)feedPersonalizationConfigurationSet;
-(NSArray *)iAdKeywords;
-(BOOL)hideAccessoryText;
-(void)prepareToProvideFeedGroupEmittersWithCallbackQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<FCFeedPaginating>)feedPaginator;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)shouldFilterFeedGroupEmitter:(id)arg1 withConfiguration:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
@end

