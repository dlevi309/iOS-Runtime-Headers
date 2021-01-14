/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKCloudStoreCoding.h>

@class NSSet;

@interface PKPaymentTransactionFees : NSObject <NSSecureCoding, PKCloudStoreCoding> {

	NSSet* _fees;

}

@property (nonatomic,retain) NSSet * fees;              //@synthesize fees=_fees - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_feesSetFromJsonString:(id)arg1 ;
+(id)recordNamePrefix;
-(NSSet *)fees;
-(void)setFees:(NSSet *)arg1 ;
-(BOOL)isEqualToFees:(id)arg1 ;
-(id)initWithFeeItems:(id)arg1 ;
-(id)_feeItemsFromRecord:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)jsonString;
-(id)description;
-(unsigned long long)itemType;
-(id)jsonArrayRepresentation;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNamesIncludingServerData:(BOOL)arg1 ;
-(id)initWithJsonString:(id)arg1 ;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg1 ;
-(void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)primaryIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

