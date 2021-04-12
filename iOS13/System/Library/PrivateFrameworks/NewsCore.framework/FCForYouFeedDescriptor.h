/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)name;
-(id<FCCoreConfigurationManager>)configurationManager;
-(void)setConfigurationManager:(id<FCCoreConfigurationManager>)arg1 ;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(long long)feedPersonalizationConfigurationSet;
-(FCSubscriptionList *)subscriptionList;
-(id)feedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2 ;
-(id)iAdFeedID;
-(id)languagesWithSubscriptionController:(id)arg1 ;
-(BOOL)derivesContentsFromExplicitSubscriptions;
-(BOOL)hasEditions;
-(id)offlineFeedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2 ;
-(id)allEmitterClasses;
-(void)prepareToProvideFeedGroupEmittersWithCallbackQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)needsForYouConfig;
-(BOOL)shouldFilterFeedGroupEmitter:(id)arg1 withConfiguration:(id)arg2 ;
-(id)feedPaginator;
-(long long)feedSortMethod;
-(long long)feedFilterOptions;
-(void)d_fetchAllHeadlinesWithCloudContext:(id)arg1 sinceDate:(id)arg2 filter:(BOOL)arg3 personalize:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id<FCPaidAccessCheckerType>)paidAccessChecker;
-(void)setPaidAccessChecker:(id<FCPaidAccessCheckerType>)arg1 ;
-(id)editionAtDate:(id)arg1 ;
-(id)editionFollowingEdition:(id)arg1 ;
-(unsigned long long)savedStoriesCount;
-(id)_sortedConfigurableGroupEmittersWithForYouGroupsConfiguration:(id)arg1 forYouConfig:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 savedStoriesCount:(long long)arg2 configurationManager:(id)arg3 subscriptionList:(id)arg4 feedPersonalizer:(id)arg5 paidAccessChecker:(id)arg6 ;
-(void)setSavedStoriesCount:(unsigned long long)arg1 ;
-(void)setSubscriptionList:(FCSubscriptionList *)arg1 ;
-(void)setFeedPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
@end

