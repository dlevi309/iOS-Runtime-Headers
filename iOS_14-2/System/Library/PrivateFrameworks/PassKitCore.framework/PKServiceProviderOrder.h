/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSData;

@interface PKServiceProviderOrder : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _itemDescription;
	NSString* _serviceProviderIdentifier;
	NSDictionary* _serviceProviderData;
	unsigned long long _paymentInstrumentType;
	NSData* _appletValue;
	NSString* _transactionIdentifier;

}

@property (nonatomic,copy) NSDictionary * serviceProviderData;                      //@synthesize serviceProviderData=_serviceProviderData - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * itemDescription;                              //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,copy) NSString * serviceProviderIdentifier;                    //@synthesize serviceProviderIdentifier=_serviceProviderIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long paymentInstrumentType;              //@synthesize paymentInstrumentType=_paymentInstrumentType - In the implementation block
@property (nonatomic,copy) NSData * appletValue;                                    //@synthesize appletValue=_appletValue - In the implementation block
@property (nonatomic,copy) NSString * transactionIdentifier;                        //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(id)init;
-(id)_itemDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAppletValue:(NSData *)arg1 ;
-(void)setPaymentInstrumentType:(unsigned long long)arg1 ;
-(void)setItemDescription:(NSString *)arg1 ;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(NSData *)appletValue;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)serviceProviderData;
-(id)_paymentInstrumentDictionary;
-(void)setServiceProviderIdentifier:(NSString *)arg1 ;
-(void)setServiceProviderData:(NSDictionary *)arg1 ;
-(unsigned long long)paymentInstrumentType;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)transactionIdentifier;
-(NSString *)itemDescription;
-(NSString *)serviceProviderIdentifier;
@end

