/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaHardwareInterfaceIdentifier : PBCodable {

	NSString* _interfaceVendorID;
	NSString* _interfaceProductID;

}

@property (nonatomic,copy) NSString * interfaceVendorID;               //@synthesize interfaceVendorID=_interfaceVendorID - In the implementation block
@property (nonatomic,copy) NSString * interfaceProductID;              //@synthesize interfaceProductID=_interfaceProductID - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setInterfaceVendorID:(NSString *)arg1 ;
-(void)setInterfaceProductID:(NSString *)arg1 ;
-(NSString *)interfaceVendorID;
-(NSString *)interfaceProductID;
@end

