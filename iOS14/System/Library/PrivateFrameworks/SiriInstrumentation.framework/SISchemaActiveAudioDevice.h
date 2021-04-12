/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaActiveAudioDevice : PBCodable {

	NSString* _vendorIdentifier;
	NSString* _productIdentifier;
	BOOL _hasVendorIdentifier;
	BOOL _hasProductIdentifier;

}

@property (nonatomic,copy) NSString * vendorIdentifier;               //@synthesize vendorIdentifier=_vendorIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasVendorIdentifier;                //@synthesize hasVendorIdentifier=_hasVendorIdentifier - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;              //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasProductIdentifier;               //@synthesize hasProductIdentifier=_hasProductIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)productIdentifier;
-(unsigned long long)hash;
-(NSString *)vendorIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setVendorIdentifier:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasVendorIdentifier;
-(BOOL)hasProductIdentifier;
-(void)setHasVendorIdentifier:(BOOL)arg1 ;
-(void)setHasProductIdentifier:(BOOL)arg1 ;
@end

