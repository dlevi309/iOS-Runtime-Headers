/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)itemType;
-(id)jsonString;
-(id)jsonArrayRepresentation;
-(id)initWithRewardsItems:(id)arg1 ;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(BOOL)isEqualToRewards:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNamesIncludingServerData:(BOOL)arg1 ;
-(void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1 ;
-(id)initWithJsonString:(id)arg1 ;
-(NSArray *)rewardsItems;
-(void)setRewardsItems:(NSArray *)arg1 ;
@end

