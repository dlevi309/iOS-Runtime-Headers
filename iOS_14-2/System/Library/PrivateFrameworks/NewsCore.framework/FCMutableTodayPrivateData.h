/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCTodayPrivateData.h>
#import <libobjc.A.dylib/FCMutableTodayPrivateData.h>
@class NSSet, NSArray, NSDictionary, NSNumber, FCBundleSubscription;


@protocol FCMutableTodayPrivateData <FCTodayPrivateData>
@property (nonatomic,copy) id<FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData; 
@property (nonatomic,copy) NSSet * mutedTagIDs; 
@property (nonatomic,copy) NSArray * autoFavoriteTagIDs; 
@property (nonatomic,copy) NSSet * purchasedTagIDs; 
@property (nonatomic,copy) NSArray * rankedAllSubscribedTagIDs; 
@property (nonatomic,copy) NSArray * recentlySeenHistoryItems; 
@property (nonatomic,copy) NSDictionary * recentlyReadHistoryItems; 
@property (nonatomic,copy) NSNumber * onboardingVersion; 
@property (nonatomic,copy) FCBundleSubscription * bundleSubscription; 
@required
-(NSSet *)mutedTagIDs;
-(void)setBundleSubscription:(id)arg1;
-(void)setAutoFavoriteTagIDs:(id)arg1;
-(FCBundleSubscription *)bundleSubscription;
-(void)setDerivedPersonalizationData:(id)arg1;
-(NSSet *)purchasedTagIDs;
-(void)setPurchasedTagIDs:(id)arg1;
-(void)setMutedTagIDs:(id)arg1;
-(id<FCDerivedPersonalizationData><NSCoding>)derivedPersonalizationData;
-(NSArray *)rankedAllSubscribedTagIDs;
-(NSArray *)recentlySeenHistoryItems;
-(NSDictionary *)recentlyReadHistoryItems;
-(NSArray *)autoFavoriteTagIDs;
-(void)setRecentlyReadHistoryItems:(id)arg1;
-(void)setRecentlySeenHistoryItems:(id)arg1;
-(void)setRankedAllSubscribedTagIDs:(id)arg1;
-(void)setOnboardingVersion:(id)arg1;
-(NSNumber *)onboardingVersion;

@end


@class NSSet, NSArray, NSDictionary, NSNumber, FCBundleSubscription, NSMutableDictionary, NSString;

@interface FCMutableTodayPrivateData : FCTodayPrivateData <FCMutableTodayPrivateData>

@property (nonatomic,readonly) NSMutableDictionary * dictionary; 
@property (nonatomic,copy) id<FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData; 
@property (nonatomic,copy) NSSet * mutedTagIDs; 
@property (nonatomic,copy) NSArray * autoFavoriteTagIDs; 
@property (nonatomic,copy) NSSet * purchasedTagIDs; 
@property (nonatomic,copy) NSArray * rankedAllSubscribedTagIDs; 
@property (nonatomic,copy) NSArray * recentlySeenHistoryItems; 
@property (nonatomic,copy) NSDictionary * recentlyReadHistoryItems; 
@property (nonatomic,copy) NSNumber * onboardingVersion; 
@property (nonatomic,copy) FCBundleSubscription * bundleSubscription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setBundleSubscription:(FCBundleSubscription *)arg1 ;
-(void)setAutoFavoriteTagIDs:(NSArray *)arg1 ;
-(void)setDerivedPersonalizationData:(id<FCDerivedPersonalizationData><NSCoding>)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setPurchasedTagIDs:(NSSet *)arg1 ;
-(void)setMutedTagIDs:(NSSet *)arg1 ;
-(void)setRecentlyReadHistoryItems:(NSDictionary *)arg1 ;
-(void)_deleteObjectsForOldKeys;
-(void)setRecentlySeenHistoryItems:(NSArray *)arg1 ;
-(void)setRankedAllSubscribedTagIDs:(NSArray *)arg1 ;
-(void)setOnboardingVersion:(NSNumber *)arg1 ;
@end

