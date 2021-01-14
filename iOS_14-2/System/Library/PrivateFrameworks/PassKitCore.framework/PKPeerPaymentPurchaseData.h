/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKServiceProviderPurchaseData.h>

@interface PKPeerPaymentPurchaseData : PKServiceProviderPurchaseData {

	BOOL _requiresInteraction;
	unsigned long long _status;

}

@property (assign,nonatomic) unsigned long long status;              //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL requiresInteraction;               //@synthesize requiresInteraction=_requiresInteraction - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToPKPeerPaymentPurchaseData:(id)arg1 ;
-(BOOL)requiresInteraction;
-(void)setRequiresInteraction:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)status;
@end

