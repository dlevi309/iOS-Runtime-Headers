/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class PKPaymentMerchantSession, NSString, NSData;

@interface PKPaymentMerchantData : NSObject {

	PKPaymentMerchantSession* _merchantSession;
	NSString* _merchantIdentifier;
	NSData* _applicationData;

}

@property (nonatomic,readonly) NSString * merchantIdentifier;              //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * applicationData;                   //@synthesize applicationData=_applicationData - In the implementation block
-(id)init;
-(NSData *)applicationData;
-(id)initWithPaymentRequest:(id)arg1 ;
-(NSString *)merchantIdentifier;
-(id)initWithMerchantIdentifier:(id)arg1 applicationData:(id)arg2 ;
-(id)encode;
@end

