/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKCodeRecordTransport : PBCodable <NSCopying> {

	int _contents;
	NSData* _encryptedMasterKey;
	NSData* _localSerialization;
	NSData* _wireSerialization;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) BOOL hasLocalSerialization; 
@property (nonatomic,retain) NSData * localSerialization;               //@synthesize localSerialization=_localSerialization - In the implementation block
@property (nonatomic,readonly) BOOL hasWireSerialization; 
@property (nonatomic,retain) NSData * wireSerialization;                //@synthesize wireSerialization=_wireSerialization - In the implementation block
@property (assign,nonatomic) BOOL hasContents; 
@property (assign,nonatomic) int contents;                              //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptedMasterKey; 
@property (nonatomic,retain) NSData * encryptedMasterKey;               //@synthesize encryptedMasterKey=_encryptedMasterKey - In the implementation block
-(int)contents;
-(id)dictionaryRepresentation;
-(void)setWireSerialization:(NSData *)arg1 ;
-(void)setEncryptedMasterKey:(NSData *)arg1 ;
-(NSData *)wireSerialization;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLocalSerialization;
-(BOOL)hasWireSerialization;
-(BOOL)hasEncryptedMasterKey;
-(NSData *)encryptedMasterKey;
-(id)initWithRecord:(id)arg1 ;
-(id)description;
-(void)setLocalSerialization:(NSData *)arg1 ;
-(NSData *)localSerialization;
-(void)setContents:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasContents;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)clearOneofValuesForContents;
-(void)setHasContents:(BOOL)arg1 ;
-(id)contentsAsString:(int)arg1 ;
-(int)StringAsContents:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

