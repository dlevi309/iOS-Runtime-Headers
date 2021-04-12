/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encode;
-(NSData *)applicationData;
-(id)initWithMerchantIdentifier:(id)arg1 applicationData:(id)arg2 ;
-(id)initWithPaymentRequest:(id)arg1 ;
-(NSString *)merchantIdentifier;
@end

