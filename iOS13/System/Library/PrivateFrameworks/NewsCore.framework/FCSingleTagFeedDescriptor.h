/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedDescriptor.h>

@protocol FCTagProviding, FCPaidAccessCheckerType;
@interface FCSingleTagFeedDescriptor : FCFeedDescriptor {

	id<FCTagProviding> _tag;
	long long _feedType;
	long long _feedSortMethod;
	long long _feedFilterOptions;
	long long _feedPersonalizationConfigurationSet;
	id<FCTagProviding> _masterTag;
	id<FCPaidAccessCheckerType> _paidAccessChecker;

}

@property (nonatomic,copy) id<FCTagProviding> tag;                                       //@synthesize tag=_tag - In the implementation block
@property (nonatomic,copy,readonly) id<FCTagProviding> masterTag;                        //@synthesize masterTag=_masterTag - In the implementation block
@property (nonatomic,retain) id<FCPaidAccessCheckerType> paidAccessChecker;              //@synthesize paidAccessChecker=_paidAccessChecker - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)name;
-(id)initWithIdentifier:(id)arg1 ;
-(id<FCTagProviding>)tag;
-(void)setTag:(id<FCTagProviding>)arg1 ;
-(id)theme;
-(id)iAdCategories;
-(id)iAdKeywords;
-(long long)feedPersonalizationConfigurationSet;
-(BOOL)isSubscribable;
-(id)feedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2 ;
-(long long)iAdContentProvider;
-(id)iAdPrimaryAudience;
-(id)iAdFeedID;
-(id)iAdSectionID;
-(id)languagesWithSubscriptionController:(id)arg1 ;
-(BOOL)hideAccessoryText;
-(BOOL)subscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2 error:(id*)arg3 ;
-(BOOL)isMutedWithSubscriptionController:(id)arg1 ;
-(void)unsubscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2 ;
-(BOOL)isSubscribedToWithSubscriptionController:(id)arg1 ;
-(BOOL)hasNotificationsEnabledWithSubscriptionController:(id)arg1 ;
-(id)backingTag;
-(id)backingChannel;
-(id)backingChannelID;
-(id)backingSectionID;
-(id)backingTopicID;
-(id)allEmitterClasses;
-(void)prepareToProvideFeedGroupEmittersWithCallbackQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)feedSortMethod;
-(long long)feedFilterOptions;
-(long long)feedType;
-(void)setFeedType:(long long)arg1 ;
-(id)initWithContext:(id)arg1 tag:(id)arg2 sortMethod:(long long)arg3 filterOptions:(long long)arg4 personalizationConfigurationSet:(long long)arg5 paidAccessChecker:(id)arg6 ;
-(id<FCTagProviding>)masterTag;
-(id<FCPaidAccessCheckerType>)paidAccessChecker;
-(id)initWithContext:(id)arg1 tag:(id)arg2 paidAccessChecker:(id)arg3 ;
-(void)setPaidAccessChecker:(id<FCPaidAccessCheckerType>)arg1 ;
@end

