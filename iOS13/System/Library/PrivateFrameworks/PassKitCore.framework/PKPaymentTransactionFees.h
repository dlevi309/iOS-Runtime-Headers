/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)itemType;
-(id)jsonString;
-(id)jsonArrayRepresentation;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNamesIncludingServerData:(BOOL)arg1 ;
-(void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1 ;
-(id)initWithJsonString:(id)arg1 ;
-(NSSet *)fees;
-(id)initWithFeeItems:(id)arg1 ;
-(BOOL)isEqualToFees:(id)arg1 ;
-(void)setFees:(NSSet *)arg1 ;
@end

