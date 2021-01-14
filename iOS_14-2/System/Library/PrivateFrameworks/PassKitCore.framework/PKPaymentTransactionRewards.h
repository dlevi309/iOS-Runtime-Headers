/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKCloudStoreCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface PKPaymentTransactionRewards : NSObject <NSSecureCoding, PKCloudStoreCoding, NSCopying> {

	NSArray* _rewardsItems;

}

@property (nonatomic,retain) NSArray * rewardsItems;              //@synthesize rewardsItems=_rewardsItems - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_rewardsItemsSetFromJsonString:(id)arg1 ;
+(id)recordNamePrefix;
-(void)encodeWithCoder:(id)arg1 ;
-(id)jsonString;
-(id)description;
-(unsigned long long)itemType;
-(NSArray *)rewardsItems;
-(id)jsonArrayRepresentation;
-(id)_rewardItemsFromRecord:(id)arg1 ;
-(id)initWithRewardsItems:(id)arg1 ;
-(BOOL)isEqualToRewards:(id)arg1 ;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNamesIncludingServerData:(BOOL)arg1 ;
-(id)initWithJsonString:(id)arg1 ;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg1 ;
-(void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1 ;
-(id)totalEligibleValueForUnit:(unsigned long long)arg1 ;
-(void)setRewardsItems:(NSArray *)arg1 ;
-(unsigned long long)hash;
-(id)primaryIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

