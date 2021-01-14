/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NPKProtoStandalonePaymentDigitalIssuanceMetadata, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningMethodMetadata : PBCodable <NSCopying> {

	NSString* _currency;
	NSString* _depositAmount;
	NPKProtoStandalonePaymentDigitalIssuanceMetadata* _digitalIssuanceMetadata;
	NSString* _maxLoadedBalance;
	NSString* _minLoadedBalance;
	NSString* _minimumReaderModeBalance;
	NSString* _productIdentifier;
	NSString* _readerModeMetadataJson;
	NSString* _readerModeResourcesJson;
	NSMutableArray* _requiredFields;

}

@property (nonatomic,readonly) BOOL hasProductIdentifier; 
@property (nonatomic,retain) NSString * productIdentifier;                                                            //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrency; 
@property (nonatomic,retain) NSString * currency;                                                                     //@synthesize currency=_currency - In the implementation block
@property (nonatomic,readonly) BOOL hasDepositAmount; 
@property (nonatomic,retain) NSString * depositAmount;                                                                //@synthesize depositAmount=_depositAmount - In the implementation block
@property (nonatomic,readonly) BOOL hasMinLoadedBalance; 
@property (nonatomic,retain) NSString * minLoadedBalance;                                                             //@synthesize minLoadedBalance=_minLoadedBalance - In the implementation block
@property (nonatomic,readonly) BOOL hasMaxLoadedBalance; 
@property (nonatomic,retain) NSString * maxLoadedBalance;                                                             //@synthesize maxLoadedBalance=_maxLoadedBalance - In the implementation block
@property (nonatomic,retain) NSMutableArray * requiredFields;                                                         //@synthesize requiredFields=_requiredFields - In the implementation block
@property (nonatomic,readonly) BOOL hasReaderModeMetadataJson; 
@property (nonatomic,retain) NSString * readerModeMetadataJson;                                                       //@synthesize readerModeMetadataJson=_readerModeMetadataJson - In the implementation block
@property (nonatomic,readonly) BOOL hasDigitalIssuanceMetadata; 
@property (nonatomic,retain) NPKProtoStandalonePaymentDigitalIssuanceMetadata * digitalIssuanceMetadata;              //@synthesize digitalIssuanceMetadata=_digitalIssuanceMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasReaderModeResourcesJson; 
@property (nonatomic,retain) NSString * readerModeResourcesJson;                                                      //@synthesize readerModeResourcesJson=_readerModeResourcesJson - In the implementation block
@property (nonatomic,readonly) BOOL hasMinimumReaderModeBalance; 
@property (nonatomic,retain) NSString * minimumReaderModeBalance;                                                     //@synthesize minimumReaderModeBalance=_minimumReaderModeBalance - In the implementation block
+(Class)requiredFieldsType;
-(id)dictionaryRepresentation;
-(BOOL)hasCurrency;
-(void)mergeFrom:(id)arg1 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)currency;
-(NSString *)productIdentifier;
-(id)description;
-(void)setRequiredFields:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)minLoadedBalance;
-(NSString *)maxLoadedBalance;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDepositAmount:(NSString *)arg1 ;
-(void)setMinLoadedBalance:(NSString *)arg1 ;
-(void)setMaxLoadedBalance:(NSString *)arg1 ;
-(void)setCurrency:(NSString *)arg1 ;
-(NSString *)depositAmount;
-(NSMutableArray *)requiredFields;
-(NPKProtoStandalonePaymentDigitalIssuanceMetadata *)digitalIssuanceMetadata;
-(NSString *)minimumReaderModeBalance;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasProductIdentifier;
-(void)addRequiredFields:(id)arg1 ;
-(void)setReaderModeMetadataJson:(NSString *)arg1 ;
-(void)setDigitalIssuanceMetadata:(NPKProtoStandalonePaymentDigitalIssuanceMetadata *)arg1 ;
-(void)setReaderModeResourcesJson:(NSString *)arg1 ;
-(void)setMinimumReaderModeBalance:(NSString *)arg1 ;
-(unsigned long long)requiredFieldsCount;
-(void)clearRequiredFields;
-(id)requiredFieldsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDepositAmount;
-(BOOL)hasMinLoadedBalance;
-(BOOL)hasMaxLoadedBalance;
-(BOOL)hasReaderModeMetadataJson;
-(BOOL)hasDigitalIssuanceMetadata;
-(BOOL)hasReaderModeResourcesJson;
-(BOOL)hasMinimumReaderModeBalance;
-(NSString *)readerModeMetadataJson;
-(NSString *)readerModeResourcesJson;
@end

