/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSData;

@interface PLJournalEntryHeader : PBCodable <NSCopying> {

	unsigned long long _payloadLength;
	int _entryType;
	NSMutableArray* _nilProperties;
	unsigned _payloadCRC;
	NSString* _payloadID;
	NSData* _payloadUUID;
	unsigned _payloadVersion;
	SCD_Struct_PL44 _has;

}

@property (assign,nonatomic) BOOL hasEntryType; 
@property (assign,nonatomic) int entryType;                                 //@synthesize entryType=_entryType - In the implementation block
@property (nonatomic,readonly) BOOL hasPayloadUUID; 
@property (nonatomic,retain) NSData * payloadUUID;                          //@synthesize payloadUUID=_payloadUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasPayloadID; 
@property (nonatomic,retain) NSString * payloadID;                          //@synthesize payloadID=_payloadID - In the implementation block
@property (assign,nonatomic) BOOL hasPayloadVersion; 
@property (assign,nonatomic) unsigned payloadVersion;                       //@synthesize payloadVersion=_payloadVersion - In the implementation block
@property (assign,nonatomic) BOOL hasPayloadLength; 
@property (assign,nonatomic) unsigned long long payloadLength;              //@synthesize payloadLength=_payloadLength - In the implementation block
@property (assign,nonatomic) BOOL hasPayloadCRC; 
@property (assign,nonatomic) unsigned payloadCRC;                           //@synthesize payloadCRC=_payloadCRC - In the implementation block
@property (nonatomic,retain) NSMutableArray * nilProperties;                //@synthesize nilProperties=_nilProperties - In the implementation block
+(Class)nilPropertiesType;
-(NSString *)payloadID;
-(id)dictionaryRepresentation;
-(BOOL)hasEntryType;
-(void)setHasEntryType:(BOOL)arg1 ;
-(id)entryTypeAsString:(int)arg1 ;
-(int)StringAsEntryType:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)payloadUUID;
-(void)setHasPayloadVersion:(BOOL)arg1 ;
-(BOOL)hasPayloadVersion;
-(void)setHasPayloadLength:(BOOL)arg1 ;
-(BOOL)hasPayloadLength;
-(void)setHasPayloadCRC:(BOOL)arg1 ;
-(BOOL)hasPayloadCRC;
-(void)clearNilProperties;
-(unsigned long long)nilPropertiesCount;
-(id)nilPropertiesAtIndex:(unsigned long long)arg1 ;
-(void)setNilProperties:(NSMutableArray *)arg1 ;
-(id)description;
-(unsigned)payloadVersion;
-(void)setPayloadUUID:(NSData *)arg1 ;
-(void)setEntryType:(int)arg1 ;
-(unsigned long long)hash;
-(unsigned)payloadCRC;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPayloadVersion:(unsigned)arg1 ;
-(void)setPayloadID:(NSString *)arg1 ;
-(void)setPayloadLength:(unsigned long long)arg1 ;
-(void)setPayloadCRC:(unsigned)arg1 ;
-(NSMutableArray *)nilProperties;
-(unsigned long long)payloadLength;
-(BOOL)hasPayloadID;
-(BOOL)hasPayloadUUID;
-(void)addNilProperties:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)entryType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

