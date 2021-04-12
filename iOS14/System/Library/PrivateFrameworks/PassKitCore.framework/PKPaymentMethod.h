/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PKSecureElementPass, CNContact, PKRemotePaymentInstrument, PKDisbursementVoucher, PKPaymentPass;

@interface PKPaymentMethod : NSObject <NSSecureCoding, NSCopying> {

	BOOL _usePeerPaymentBalance;
	NSString* _displayName;
	NSString* _network;
	unsigned long long _type;
	PKSecureElementPass* _secureElementPass;
	CNContact* _billingAddress;
	PKRemotePaymentInstrument* _remoteInstrument;
	NSString* _peerPaymentQuoteIdentifier;
	PKDisbursementVoucher* _disbursementVoucher;
	NSString* _bindToken;

}

@property (nonatomic,copy) NSString * displayName;                                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * network;                                          //@synthesize network=_network - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) PKPaymentPass * paymentPass; 
@property (nonatomic,copy) PKSecureElementPass * secureElementPass;                     //@synthesize secureElementPass=_secureElementPass - In the implementation block
@property (nonatomic,copy) CNContact * billingAddress;                                  //@synthesize billingAddress=_billingAddress - In the implementation block
@property (nonatomic,retain) PKRemotePaymentInstrument * remoteInstrument;              //@synthesize remoteInstrument=_remoteInstrument - In the implementation block
@property (nonatomic,copy) NSString * peerPaymentQuoteIdentifier;                       //@synthesize peerPaymentQuoteIdentifier=_peerPaymentQuoteIdentifier - In the implementation block
@property (assign,nonatomic) BOOL usePeerPaymentBalance;                                //@synthesize usePeerPaymentBalance=_usePeerPaymentBalance - In the implementation block
@property (nonatomic,retain) PKDisbursementVoucher * disbursementVoucher;               //@synthesize disbursementVoucher=_disbursementVoucher - In the implementation block
@property (nonatomic,copy) NSString * bindToken;                                        //@synthesize bindToken=_bindToken - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)paymentMethodWithProtobuf:(id)arg1 ;
+(long long)version;
-(id)dictionaryRepresentation;
-(NSString *)network;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithBindToken:(id)arg1 ;
-(id)initWithPeerPaymentQuote:(id)arg1 ;
-(id)initWithPaymentPass:(id)arg1 paymentApplication:(id)arg2 obfuscateNetworks:(BOOL)arg3 ;
-(void)setRemoteInstrument:(PKRemotePaymentInstrument *)arg1 ;
-(id)initWithRemotePaymentInstrument:(id)arg1 paymentApplication:(id)arg2 ;
-(NSString *)bindToken;
-(PKDisbursementVoucher *)disbursementVoucher;
-(void)setType:(unsigned long long)arg1 ;
-(void)setBindToken:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(unsigned long long)type;
-(id)protobuf;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)peerPaymentQuoteIdentifier;
-(PKPaymentPass *)paymentPass;
-(PKRemotePaymentInstrument *)remoteInstrument;
-(void)setSecureElementPass:(PKSecureElementPass *)arg1 ;
-(void)setPeerPaymentQuoteIdentifier:(NSString *)arg1 ;
-(void)setDisbursementVoucher:(PKDisbursementVoucher *)arg1 ;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(id)initWithPaymentPass:(id)arg1 obfuscateNetworks:(BOOL)arg2 ;
-(id)initWithRemotePaymentInstrument:(id)arg1 ;
-(id)initWithDisbursementVoucher:(id)arg1 ;
-(CNContact *)billingAddress;
-(void)setBillingAddress:(CNContact *)arg1 ;
-(PKSecureElementPass *)secureElementPass;
-(BOOL)usePeerPaymentBalance;
-(void)setUsePeerPaymentBalance:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)setNetwork:(NSString *)arg1 ;
@end

