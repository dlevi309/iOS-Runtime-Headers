/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCTodayPrivateData.h>
#import <libobjc.A.dylib/FCMutableTodayPrivateData.h>
@class NSSet, NSArray, NSDictionary, NSNumber, FCBundleSubscription;


@protocol FCMutableTodayPrivateData <FCTodayPrivateData>
@property (nonatomic,copy) id<FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData; 
@property (nonatomic,copy) NSSet * mutedTagIDs; 
@property (nonatomic,copy) NSSet * autoFavoriteTagIDs; 
@property (nonatomic,copy) NSSet * purchasedTagIDs; 
@property (nonatomic,copy) NSArray * rankedAllSubscribedTagIDs; 
@property (nonatomic,copy) NSArray * recentlySeenHistoryItems; 
@property (nonatomic,copy) NSDictionary * recentlyReadHistoryItems; 
@property (nonatomic,copy) NSNumber * onboardingVersion; 
@property (nonatomic,copy) FCBundleSubscription * bundleSubscription; 
@required
-(NSNumber *)onboardingVersion;
-(void)setOnboardingVersion:(id)arg1;
-(NSSet *)mutedTagIDs;
-(NSSet *)purchasedTagIDs;
-(FCBundleSubscription *)bundleSubscription;
-(id<FCDerivedPersonalizationData><NSCoding>)derivedPersonalizationData;
-(NSSet *)autoFavoriteTagIDs;
-(NSArray *)rankedAllSubscribedTagIDs;
-(NSArray *)recentlySeenHistoryItems;
-(NSDictionary *)recentlyReadHistoryItems;
-(void)setDerivedPersonalizationData:(id)arg1;
-(void)setMutedTagIDs:(id)arg1;
-(void)setAutoFavoriteTagIDs:(id)arg1;
-(void)setPurchasedTagIDs:(id)arg1;
-(void)setRankedAllSubscribedTagIDs:(id)arg1;
-(void)setRecentlySeenHistoryItems:(id)arg1;
-(void)setRecentlyReadHistoryItems:(id)arg1;
-(void)setBundleSubscription:(id)arg1;

@end


@class NSSet, NSArray, NSDictionary, NSNumber, FCBundleSubscription, NSMutableDictionary, NSString;

@interface FCMutableTodayPrivateData : FCTodayPrivateData <FCMutableTodayPrivateData>

@property (nonatomic,readonly) NSMutableDictionary * dictionary; 
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
-(id)initWithDictionary:(id)arg1 ;
-(void)setOnboardingVersion:(NSNumber *)arg1 ;
-(void)_deleteObjectsForOldKeys;
-(void)setDerivedPersonalizationData:(id<FCDerivedPersonalizationData><NSCoding>)arg1 ;
-(void)setMutedTagIDs:(NSSet *)arg1 ;
-(void)setAutoFavoriteTagIDs:(NSSet *)arg1 ;
-(void)setPurchasedTagIDs:(NSSet *)arg1 ;
-(void)setRankedAllSubscribedTagIDs:(NSArray *)arg1 ;
-(void)setRecentlySeenHistoryItems:(NSArray *)arg1 ;
-(void)setRecentlyReadHistoryItems:(NSDictionary *)arg1 ;
-(void)setBundleSubscription:(FCBundleSubscription *)arg1 ;
@end

