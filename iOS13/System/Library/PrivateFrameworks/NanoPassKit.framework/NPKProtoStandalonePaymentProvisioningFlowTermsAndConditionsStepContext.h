/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoStandalonePaymentSetupProduct, NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowTermsAndConditionsStepContext : PBCodable <NSCopying> {

	NPKProtoStandalonePaymentSetupProduct* _product;
	NSString* _termsURL;
	BOOL _allowNonSecureHTTP;
	SCD_Struct_NP2 _has;

}

@property (nonatomic,readonly) BOOL hasTermsURL; 
@property (nonatomic,retain) NSString * termsURL;                                          //@synthesize termsURL=_termsURL - In the implementation block
@property (assign,nonatomic) BOOL hasAllowNonSecureHTTP; 
@property (assign,nonatomic) BOOL allowNonSecureHTTP;                                      //@synthesize allowNonSecureHTTP=_allowNonSecureHTTP - In the implementation block
@property (nonatomic,readonly) BOOL hasProduct; 
@property (nonatomic,retain) NPKProtoStandalonePaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)allowNonSecureHTTP;
-(void)setAllowNonSecureHTTP:(BOOL)arg1 ;
-(NSString *)termsURL;
-(void)setTermsURL:(NSString *)arg1 ;
-(void)setProduct:(NPKProtoStandalonePaymentSetupProduct *)arg1 ;
-(NPKProtoStandalonePaymentSetupProduct *)product;
-(BOOL)hasTermsURL;
-(void)setHasAllowNonSecureHTTP:(BOOL)arg1 ;
-(BOOL)hasAllowNonSecureHTTP;
-(BOOL)hasProduct;
@end

