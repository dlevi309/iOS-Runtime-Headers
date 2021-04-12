/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaHardwareInterfaceIdentifier : PBCodable {

	NSString* _interfaceVendorID;
	NSString* _interfaceProductID;
	BOOL _hasInterfaceVendorID;
	BOOL _hasInterfaceProductID;

}

@property (nonatomic,copy) NSString * interfaceVendorID;               //@synthesize interfaceVendorID=_interfaceVendorID - In the implementation block
@property (assign,nonatomic) BOOL hasInterfaceVendorID;                //@synthesize hasInterfaceVendorID=_hasInterfaceVendorID - In the implementation block
@property (nonatomic,copy) NSString * interfaceProductID;              //@synthesize interfaceProductID=_interfaceProductID - In the implementation block
@property (assign,nonatomic) BOOL hasInterfaceProductID;               //@synthesize hasInterfaceProductID=_hasInterfaceProductID - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setInterfaceVendorID:(NSString *)arg1 ;
-(void)setInterfaceProductID:(NSString *)arg1 ;
-(NSString *)interfaceVendorID;
-(NSString *)interfaceProductID;
-(BOOL)hasInterfaceVendorID;
-(BOOL)hasInterfaceProductID;
-(void)setHasInterfaceVendorID:(BOOL)arg1 ;
-(void)setHasInterfaceProductID:(BOOL)arg1 ;
@end

