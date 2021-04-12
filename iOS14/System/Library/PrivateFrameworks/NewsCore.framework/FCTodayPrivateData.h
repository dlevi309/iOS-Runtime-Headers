/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCTodayPrivateData.h>
@class NSSet, NSArray, NSDictionary, NSNumber, FCBundleSubscription;


@protocol FCTodayPrivateData <NSObject,NFMutableCopying,FCPurchaseProviderType,FCBundleSubscriptionProviderType>
@property (nonatomic,copy,readonly) id<FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData; 
@property (nonatomic,copy,readonly) NSSet * mutedTagIDs; 
@property (nonatomic,copy,readonly) NSArray * autoFavoriteTagIDs; 
@property (nonatomic,copy,readonly) NSSet * purchasedTagIDs; 
@property (nonatomic,copy,readonly) NSArray * rankedAllSubscribedTagIDs; 
@property (nonatomic,copy,readonly) NSArray * recentlySeenHistoryItems; 
@property (nonatomic,copy,readonly) NSDictionary * recentlyReadHistoryItems; 
@property (nonatomic,copy,readonly) NSNumber * onboardingVersion; 
@property (nonatomic,copy,readonly) FCBundleSubscription * bundleSubscription; 
@required
-(NSSet *)mutedTagIDs;
-(FCBundleSubscription *)bundleSubscription;
-(NSSet *)purchasedTagIDs;
-(id<FCDerivedPersonalizationData><NSCoding>)derivedPersonalizationData;
-(NSArray *)rankedAllSubscribedTagIDs;
-(NSArray *)recentlySeenHistoryItems;
-(NSDictionary *)recentlyReadHistoryItems;
-(NSArray *)autoFavoriteTagIDs;
-(NSNumber *)onboardingVersion;

@end


@class NSSet, NSArray, NSDictionary, NSNumber, FCBundleSubscription, NSString;

@interface FCTodayPrivateData : NSObject <FCTodayPrivateData> {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * dictionary;                                                               //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,copy,readonly) id<FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData; 
@property (nonatomic,copy,readonly) NSSet * mutedTagIDs; 
@property (nonatomic,copy,readonly) NSArray * autoFavoriteTagIDs; 
@property (nonatomic,copy,readonly) NSSet * purchasedTagIDs; 
@property (nonatomic,copy,readonly) NSArray * rankedAllSubscribedTagIDs; 
@property (nonatomic,copy,readonly) NSArray * recentlySeenHistoryItems; 
@property (nonatomic,copy,readonly) NSDictionary * recentlyReadHistoryItems; 
@property (nonatomic,copy,readonly) NSNumber * onboardingVersion; 
@property (nonatomic,copy,readonly) FCBundleSubscription * bundleSubscription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)mutedTagIDs;
-(id)init;
-(FCBundleSubscription *)bundleSubscription;
-(void)prepareForUseWithCompletion:(/*^block*/id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSSet *)purchasedTagIDs;
-(id)initWithDictionary:(id)arg1 ;
-(id<FCDerivedPersonalizationData><NSCoding>)derivedPersonalizationData;
-(NSArray *)rankedAllSubscribedTagIDs;
-(NSArray *)recentlySeenHistoryItems;
-(NSDictionary *)recentlyReadHistoryItems;
-(NSArray *)autoFavoriteTagIDs;
-(NSDictionary *)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)onboardingVersion;
@end

