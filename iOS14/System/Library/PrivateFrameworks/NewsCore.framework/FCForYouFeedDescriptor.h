/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedDescriptor.h>
#import <libobjc.A.dylib/FCFeedPaginating.h>

@protocol FCCoreConfigurationManager, FCFeedPersonalizing, FCPaidAccessCheckerType;
@class FCSubscriptionList, NSString;

@interface FCForYouFeedDescriptor : FCFeedDescriptor <FCFeedPaginating> {

	unsigned long long _savedStoriesCount;
	id<FCCoreConfigurationManager> _configurationManager;
	FCSubscriptionList* _subscriptionList;
	id<FCFeedPersonalizing> _feedPersonalizer;
	id<FCPaidAccessCheckerType> _paidAccessChecker;

}

@property (assign,nonatomic) unsigned long long savedStoriesCount;                             //@synthesize savedStoriesCount=_savedStoriesCount - In the implementation block
@property (nonatomic,retain) id<FCCoreConfigurationManager> configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,retain) FCSubscriptionList * subscriptionList;                            //@synthesize subscriptionList=_subscriptionList - In the implementation block
@property (nonatomic,retain) id<FCFeedPersonalizing> feedPersonalizer;                         //@synthesize feedPersonalizer=_feedPersonalizer - In the implementation block
@property (nonatomic,retain) id<FCPaidAccessCheckerType> paidAccessChecker;                    //@synthesize paidAccessChecker=_paidAccessChecker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FCSubscriptionList *)subscriptionList;
-(id<FCCoreConfigurationManager>)configurationManager;
-(void)setPaidAccessChecker:(id<FCPaidAccessCheckerType>)arg1 ;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(void)setConfigurationManager:(id<FCCoreConfigurationManager>)arg1 ;
-(id<FCPaidAccessCheckerType>)paidAccessChecker;
-(id)languagesWithSubscriptionController:(id)arg1 ;
-(long long)feedSortMethod;
-(id)editionAtDate:(id)arg1 ;
-(BOOL)hasEditions;
-(id)offlineFeedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2 ;
-(BOOL)needsForYouConfig;
-(void)setSavedStoriesCount:(unsigned long long)arg1 ;
-(void)d_fetchAllHeadlinesWithCloudContext:(id)arg1 sinceDate:(id)arg2 filter:(BOOL)arg3 personalize:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(long long)feedFilterOptions;
-(id)_sortedConfigurableGroupEmittersWithForYouGroupsConfiguration:(id)arg1 forYouConfig:(id)arg2 ;
-(id)allEmitterClasses;
-(id)feedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2 ;
-(id)_audioDailyBriefingFeedGroupEmitterFromConfiguration:(id)arg1 emitterIdentifiersSeen:(id)arg2 ;
-(id)name;
-(id)initWithIdentifier:(id)arg1 savedStoriesCount:(long long)arg2 configurationManager:(id)arg3 subscriptionList:(id)arg4 feedPersonalizer:(id)arg5 paidAccessChecker:(id)arg6 ;
-(BOOL)derivesContentsFromExplicitSubscriptions;
-(unsigned long long)savedStoriesCount;
-(id)editionFollowingEdition:(id)arg1 ;
-(id)iAdFeedID;
-(long long)feedPersonalizationConfigurationSet;
-(void)prepareToProvideFeedGroupEmittersWithCallbackQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)feedPaginator;
-(void)setFeedPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
-(BOOL)shouldFilterFeedGroupEmitter:(id)arg1 withConfiguration:(id)arg2 ;
-(void)setSubscriptionList:(FCSubscriptionList *)arg1 ;
@end

