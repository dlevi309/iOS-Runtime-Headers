/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSArray, PKPaymentApplication, NSDate, PKCurrencyAmount;

@interface PKRemotePaymentInstrument : NSObject <NSSecureCoding, NSCopying> {

	BOOL _supportsAutomaticSelection;
	BOOL _hasAssociatedPeerPaymentAccount;
	NSString* _passIdentifier;
	NSString* _organizationName;
	NSData* _manifestHash;
	NSString* _displayName;
	NSString* _primaryAccountNumberSuffix;
	NSString* _primaryAccountIdentifier;
	NSString* _issuerCountryCode;
	NSArray* _paymentApplications;
	PKPaymentApplication* _primaryPaymentApplication;
	NSDate* _ingestedDate;
	PKCurrencyAmount* _peerPaymentAccountBalance;
	unsigned long long _peerPaymentAccountState;
	NSArray* _associatedWebDomains;

}

@property (nonatomic,copy) NSString * passIdentifier;                                       //@synthesize passIdentifier=_passIdentifier - In the implementation block
@property (nonatomic,copy) NSString * organizationName;                                     //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,copy) NSData * manifestHash;                                           //@synthesize manifestHash=_manifestHash - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountNumberSuffix;                           //@synthesize primaryAccountNumberSuffix=_primaryAccountNumberSuffix - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountIdentifier;                             //@synthesize primaryAccountIdentifier=_primaryAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * issuerCountryCode;                                    //@synthesize issuerCountryCode=_issuerCountryCode - In the implementation block
@property (nonatomic,retain) NSArray * paymentApplications;                                 //@synthesize paymentApplications=_paymentApplications - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * primaryPaymentApplication;              //@synthesize primaryPaymentApplication=_primaryPaymentApplication - In the implementation block
@property (nonatomic,retain) NSDate * ingestedDate;                                         //@synthesize ingestedDate=_ingestedDate - In the implementation block
@property (assign,nonatomic) BOOL supportsAutomaticSelection;                               //@synthesize supportsAutomaticSelection=_supportsAutomaticSelection - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * peerPaymentAccountBalance;                  //@synthesize peerPaymentAccountBalance=_peerPaymentAccountBalance - In the implementation block
@property (assign,nonatomic) BOOL hasAssociatedPeerPaymentAccount;                          //@synthesize hasAssociatedPeerPaymentAccount=_hasAssociatedPeerPaymentAccount - In the implementation block
@property (assign,nonatomic) unsigned long long peerPaymentAccountState;                    //@synthesize peerPaymentAccountState=_peerPaymentAccountState - In the implementation block
@property (nonatomic,retain) NSArray * associatedWebDomains;                                //@synthesize associatedWebDomains=_associatedWebDomains - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)thumbnailCachePathForManifestHash:(id)arg1 size:(CGSize)arg2 ;
+(id)remotePaymentInstrumentWithProtobuf:(id)arg1 ;
+(id)sortDescriptorForDefaultPaymentInstrument:(id)arg1 supportedNetworks:(id)arg2 merchantCapabilities:(unsigned long long)arg3 webService:(id)arg4 ;
-(NSString *)organizationName;
-(id)initWithPaymentPass:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToRemotePaymentInstrument:(id)arg1 ;
-(id)description;
-(NSString *)passIdentifier;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setOrganizationName:(NSString *)arg1 ;
-(NSDate *)ingestedDate;
-(void)setPaymentApplications:(NSArray *)arg1 ;
-(id)protobuf;
-(void)setAssociatedWebDomains:(NSArray *)arg1 ;
-(void)setPrimaryAccountIdentifier:(NSString *)arg1 ;
-(void)setIssuerCountryCode:(NSString *)arg1 ;
-(void)setPrimaryAccountNumberSuffix:(NSString *)arg1 ;
-(void)setHasAssociatedPeerPaymentAccount:(BOOL)arg1 ;
-(id)sortedPaymentApplications:(id)arg1 ascending:(BOOL)arg2 ;
-(unsigned long long)hash;
-(NSString *)issuerCountryCode;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)primaryAccountIdentifier;
-(void)setPassIdentifier:(NSString *)arg1 ;
-(void)setIngestedDate:(NSDate *)arg1 ;
-(NSArray *)paymentApplications;
-(void)setManifestHash:(NSData *)arg1 ;
-(void)setSupportsAutomaticSelection:(BOOL)arg1 ;
-(void)setPeerPaymentAccountState:(unsigned long long)arg1 ;
-(void)setPeerPaymentAccountBalance:(PKCurrencyAmount *)arg1 ;
-(void)setPrimaryPaymentApplication:(PKPaymentApplication *)arg1 ;
-(BOOL)hasAssociatedPeerPaymentAccount;
-(NSArray *)associatedWebDomains;
-(unsigned long long)peerPaymentAccountState;
-(BOOL)supportsAutomaticSelection;
-(PKPaymentApplication *)primaryPaymentApplication;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(PKCurrencyAmount *)peerPaymentAccountBalance;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)manifestHash;
-(NSString *)primaryAccountNumberSuffix;
@end

