/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet;

@interface FCBundleSubscription : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isPurchaser;
	BOOL _isAmplifyUser;
	NSString* _bundlePurchaseID;
	NSSet* _bundleChannelIDs;
	NSString* _servicesBundlePurchaseID;
	unsigned long long _unprotectedSubscriptionState;

}

@property (nonatomic,copy) NSString * bundlePurchaseID;                                    //@synthesize bundlePurchaseID=_bundlePurchaseID - In the implementation block
@property (nonatomic,copy) NSString * servicesBundlePurchaseID;                            //@synthesize servicesBundlePurchaseID=_servicesBundlePurchaseID - In the implementation block
@property (assign,nonatomic) unsigned long long unprotectedSubscriptionState;              //@synthesize unprotectedSubscriptionState=_unprotectedSubscriptionState - In the implementation block
@property (assign,nonatomic) BOOL isPurchaser;                                             //@synthesize isPurchaser=_isPurchaser - In the implementation block
@property (assign,nonatomic) BOOL isAmplifyUser;                                           //@synthesize isAmplifyUser=_isAmplifyUser - In the implementation block
@property (nonatomic,copy) NSSet * bundleChannelIDs;                                       //@synthesize bundleChannelIDs=_bundleChannelIDs - In the implementation block
@property (nonatomic,readonly) BOOL isSubscribed; 
@property (nonatomic,readonly) BOOL isServicesBundleUser; 
@property (nonatomic,readonly) unsigned long long subscriptionState; 
+(BOOL)supportsSecureCoding;
+(id)subscriptionWithSubscriptionState:(unsigned long long)arg1 bundleChannelIDs:(id)arg2 ;
-(void)setBundleChannelIDs:(NSSet *)arg1 ;
-(BOOL)containsHeadline:(id)arg1 ;
-(void)setServicesBundlePurchaseID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSSet *)bundleChannelIDs;
-(BOOL)isPurchaser;
-(void)setIsAmplifyUser:(BOOL)arg1 ;
-(id)debugDescription;
-(NSString *)servicesBundlePurchaseID;
-(id)initWithBundlePurchaseID:(id)arg1 bundleChannelIDs:(id)arg2 inTrialPeriod:(BOOL)arg3 isPurchaser:(BOOL)arg4 servicesBundlePurchaseID:(id)arg5 isAmplifyUser:(BOOL)arg6 ;
-(void)setIsPurchaser:(BOOL)arg1 ;
-(NSString *)bundlePurchaseID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isAmplifyUser;
-(BOOL)isSubscribed;
-(BOOL)containsTagID:(id)arg1 ;
-(void)setBundlePurchaseID:(NSString *)arg1 ;
-(unsigned long long)unprotectedSubscriptionState;
-(void)setUnprotectedSubscriptionState:(unsigned long long)arg1 ;
-(BOOL)isServicesBundleUser;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)subscriptionState;
-(BOOL)isEqual:(id)arg1 ;
@end

