/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_PL39 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)entryType;
-(void)setEntryType:(int)arg1 ;
-(void)setHasEntryType:(BOOL)arg1 ;
-(BOOL)hasEntryType;
-(id)entryTypeAsString:(int)arg1 ;
-(int)StringAsEntryType:(id)arg1 ;
-(unsigned long long)payloadLength;
-(void)setPayloadLength:(unsigned long long)arg1 ;
-(unsigned)payloadVersion;
-(NSString *)payloadID;
-(void)setPayloadVersion:(unsigned)arg1 ;
-(void)setPayloadID:(NSString *)arg1 ;
-(void)setPayloadCRC:(unsigned)arg1 ;
-(void)setPayloadUUID:(NSData *)arg1 ;
-(unsigned)payloadCRC;
-(NSMutableArray *)nilProperties;
-(BOOL)hasPayloadID;
-(NSData *)payloadUUID;
-(BOOL)hasPayloadUUID;
-(void)addNilProperties:(id)arg1 ;
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
@end

