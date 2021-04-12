/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCTodayPrivateData.h>
@class NSSet, NSArray, NSDictionary, NSNumber, FCBundleSubscription;


@protocol FCTodayPrivateData <NSObject,NSMutableCopying,FCPurchaseProviderType,FCBundleSubscriptionProviderType>
@property (nonatomic,copy,readonly) id<FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData; 
@property (nonatomic,copy,readonly) NSSet * mutedTagIDs; 
@property (nonatomic,copy,readonly) NSSet * autoFavoriteTagIDs; 
@property (nonatomic,copy,readonly) NSSet * purchasedTagIDs; 
@property (nonatomic,copy,readonly) NSArray * rankedAllSubscribedTagIDs; 
@property (nonatomic,copy,readonly) NSArray * recentlySeenHistoryItems; 
@property (nonatomic,copy,readonly) NSDictionary * recentlyReadHistoryItems; 
@property (nonatomic,copy,readonly) NSNumber * onboardingVersion; 
@property (nonatomic,copy,readonly) FCBundleSubscription * bundleSubscription; 
@required
-(NSNumber *)onboardingVersion;
-(NSSet *)mutedTagIDs;
-(NSSet *)purchasedTagIDs;
-(FCBundleSubscription *)bundleSubscription;
-(id<FCDerivedPersonalizationData><NSCoding>)derivedPersonalizationData;
-(NSSet *)autoFavoriteTagIDs;
-(NSArray *)rankedAllSubscribedTagIDs;
-(NSArray *)recentlySeenHistoryItems;
-(NSDictionary *)recentlyReadHistoryItems;

@end


@class NSSet, NSArray, NSDictionary, NSNumber, FCBundleSubscription, NSString;

@interface FCTodayPrivateData : NSObject <FCTodayPrivateData> {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * dictionary;                                                               //@synthesize dictionary=_dictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * purchasedTagIDs; 
@property (nonatomic,copy,readonly) FCBundleSubscription * bundleSubscription; 
@property (nonatomic,copy,readonly) id<FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData; 
@property (nonatomic,copy,readonly) NSSet * mutedTagIDs; 
@property (nonatomic,copy,readonly) NSSet * autoFavoriteTagIDs; 
@property (nonatomic,copy,readonly) NSArray * rankedAllSubscribedTagIDs; 
@property (nonatomic,copy,readonly) NSArray * recentlySeenHistoryItems; 
@property (nonatomic,copy,readonly) NSDictionary * recentlyReadHistoryItems; 
@property (nonatomic,copy,readonly) NSNumber * onboardingVersion; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)onboardingVersion;
-(NSSet *)mutedTagIDs;
-(NSSet *)purchasedTagIDs;
-(void)prepareForUseWithCompletion:(/*^block*/id)arg1 ;
-(FCBundleSubscription *)bundleSubscription;
-(id<FCDerivedPersonalizationData><NSCoding>)derivedPersonalizationData;
-(NSSet *)autoFavoriteTagIDs;
-(NSArray *)rankedAllSubscribedTagIDs;
-(NSArray *)recentlySeenHistoryItems;
-(NSDictionary *)recentlyReadHistoryItems;
@end

