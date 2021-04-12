/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setProduct:(NPKProtoStandalonePaymentSetupProduct *)arg1 ;
-(id)description;
-(NPKProtoStandalonePaymentSetupProduct *)product;
-(NSString *)termsURL;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAllowNonSecureHTTP:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTermsURL:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTermsURL;
-(void)setHasAllowNonSecureHTTP:(BOOL)arg1 ;
-(BOOL)hasAllowNonSecureHTTP;
-(BOOL)hasProduct;
-(BOOL)allowNonSecureHTTP;
@end

