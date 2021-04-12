/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSArray;

@interface PKInAppPaymentEntitlement : NSObject {

	NSArray* _merchantIdentifiers;
	BOOL _ignoreMerchantIdentifiers;

}

@property (nonatomic,readonly) BOOL ignoreMerchantIdentifiers;              //@synthesize ignoreMerchantIdentifiers=_ignoreMerchantIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL hasMerchantIdentifiers; 
-(BOOL)ignoreMerchantIdentifiers;
-(void)_probeEntitlementsWithToken:(SCD_Struct_PK6)arg1 ;
-(BOOL)hasMerchantIdentifier:(id)arg1 ;
-(BOOL)hasMerchantIdentifiers;
-(id)initWithToken:(SCD_Struct_PK6)arg1 ;
@end

