/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString, NSDecimalNumber, NSArray, NSDictionary, PKPaymentDigitalIssuanceMetadata;

@interface PKPaymentProvisioningMethodMetadata : NSObject {

	NSString* _productIdentifier;
	NSString* _currency;
	unsigned long long _depositType;
	NSDecimalNumber* _depositAmount;
	NSDecimalNumber* _minLoadedBalance;
	NSDecimalNumber* _maxLoadedBalance;
	NSArray* _requiredFields;
	NSDictionary* _readerModeMetadata;
	PKPaymentDigitalIssuanceMetadata* _digitalIssuanceMetadata;
	NSDictionary* _readerModeResources;
	NSDecimalNumber* _minimumReaderModeBalance;

}

@property (nonatomic,copy,readonly) NSString * productIdentifier;                                       //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * currency;                                                //@synthesize currency=_currency - In the implementation block
@property (nonatomic,readonly) unsigned long long depositType;                                          //@synthesize depositType=_depositType - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * depositAmount;                                    //@synthesize depositAmount=_depositAmount - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * minLoadedBalance;                                 //@synthesize minLoadedBalance=_minLoadedBalance - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * maxLoadedBalance;                                 //@synthesize maxLoadedBalance=_maxLoadedBalance - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requiredFields;                                           //@synthesize requiredFields=_requiredFields - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * readerModeMetadata;                                  //@synthesize readerModeMetadata=_readerModeMetadata - In the implementation block
@property (nonatomic,readonly) PKPaymentDigitalIssuanceMetadata * digitalIssuanceMetadata;              //@synthesize digitalIssuanceMetadata=_digitalIssuanceMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * readerModeResources;                                 //@synthesize readerModeResources=_readerModeResources - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * minimumReaderModeBalance;                         //@synthesize minimumReaderModeBalance=_minimumReaderModeBalance - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)productIdentifier;
-(NSString *)currency;
-(NSDecimalNumber *)minLoadedBalance;
-(NSDecimalNumber *)maxLoadedBalance;
-(unsigned long long)depositType;
-(NSDecimalNumber *)depositAmount;
-(NSArray *)requiredFields;
-(NSDictionary *)readerModeMetadata;
-(PKPaymentDigitalIssuanceMetadata *)digitalIssuanceMetadata;
-(NSDictionary *)readerModeResources;
-(NSDecimalNumber *)minimumReaderModeBalance;
@end

