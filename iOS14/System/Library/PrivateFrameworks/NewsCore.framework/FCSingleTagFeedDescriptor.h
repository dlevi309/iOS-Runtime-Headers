/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPaidAccessChecker:(id<FCPaidAccessCheckerType>)arg1 ;
-(id)theme;
-(id<FCPaidAccessCheckerType>)paidAccessChecker;
-(long long)feedType;
-(id)languagesWithSubscriptionController:(id)arg1 ;
-(long long)feedSortMethod;
-(void)setTag:(id<FCTagProviding>)arg1 ;
-(void)setFeedType:(long long)arg1 ;
-(long long)feedFilterOptions;
-(id)backingTag;
-(id<FCTagProviding>)tag;
-(id)allEmitterClasses;
-(id)feedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2 ;
-(id)iAdCategories;
-(id)name;
-(long long)iAdContentProvider;
-(BOOL)subscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2 error:(id*)arg3 ;
-(id)iAdPrimaryAudience;
-(id)iAdSectionID;
-(id)backingChannel;
-(BOOL)isSubscribable;
-(BOOL)isMutedWithSubscriptionController:(id)arg1 ;
-(void)unsubscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2 ;
-(BOOL)isSubscribedToWithSubscriptionController:(id)arg1 ;
-(BOOL)hasNotificationsEnabledWithSubscriptionController:(id)arg1 ;
-(id)backingChannelID;
-(id)backingSectionID;
-(id)backingTopicID;
-(id)initWithContext:(id)arg1 tag:(id)arg2 sortMethod:(long long)arg3 filterOptions:(long long)arg4 personalizationConfigurationSet:(long long)arg5 paidAccessChecker:(id)arg6 ;
-(id)initWithContext:(id)arg1 tag:(id)arg2 paidAccessChecker:(id)arg3 ;
-(id)iAdFeedID;
-(long long)feedPersonalizationConfigurationSet;
-(id)iAdKeywords;
-(BOOL)hideAccessoryText;
-(void)prepareToProvideFeedGroupEmittersWithCallbackQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<FCTagProviding>)masterTag;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

