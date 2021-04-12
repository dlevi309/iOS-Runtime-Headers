/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (nonatomic,copy) NSDictionary * serviceProviderData;                      //@synthesize serviceProviderData=_serviceProviderData - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * itemDescription;                              //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,copy) NSString * serviceProviderIdentifier;                    //@synthesize serviceProviderIdentifier=_serviceProviderIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long paymentInstrumentType;              //@synthesize paymentInstrumentType=_paymentInstrumentType - In the implementation block
@property (nonatomic,copy) NSData * appletValue;                                    //@synthesize appletValue=_appletValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(id)_itemDictionary;
-(NSString *)serviceProviderIdentifier;
-(void)setPaymentInstrumentType:(unsigned long long)arg1 ;
-(void)setAppletValue:(NSData *)arg1 ;
-(NSString *)itemDescription;
-(void)setItemDescription:(NSString *)arg1 ;
-(NSDictionary *)serviceProviderData;
-(id)_paymentInstrumentDictionary;
-(void)setServiceProviderIdentifier:(NSString *)arg1 ;
-(void)setServiceProviderData:(NSDictionary *)arg1 ;
-(unsigned long long)paymentInstrumentType;
-(NSData *)appletValue;
@end

