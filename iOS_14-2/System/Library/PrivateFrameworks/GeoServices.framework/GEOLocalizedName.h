/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOLocalizedName : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _languageCode;
	NSString* _nameType;
	NSString* _name;
	NSString* _phoneticName;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _nameRank;
	BOOL _isDefault;
	struct {
		unsigned has_nameRank : 1;
		unsigned has_isDefault : 1;
		unsigned read_unknownFields : 1;
		unsigned read_languageCode : 1;
		unsigned read_nameType : 1;
		unsigned read_name : 1;
		unsigned read_phoneticName : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIsDefault; 
@property (assign,nonatomic) BOOL isDefault; 
@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode; 
@property (nonatomic,readonly) BOOL hasNameType; 
@property (nonatomic,retain) NSString * nameType; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) BOOL hasNameRank; 
@property (assign,nonatomic) unsigned nameRank; 
@property (nonatomic,readonly) BOOL hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasLanguageCode;
-(PBUnknownFields *)unknownFields;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasPhoneticName;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasName;
-(NSString *)phoneticName;
-(id)init;
-(id)jsonRepresentation;
-(void)setPhoneticName:(NSString *)arg1 ;
-(NSString *)languageCode;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)nameRank;
-(NSString *)nameType;
-(BOOL)hasNameType;
-(BOOL)hasNameRank;
-(id)initWithData:(id)arg1 ;
-(void)setNameType:(NSString *)arg1 ;
-(void)setNameRank:(unsigned)arg1 ;
-(void)setHasIsDefault:(BOOL)arg1 ;
-(BOOL)hasIsDefault;
-(void)setHasNameRank:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(BOOL)isDefault;
-(void)setIsDefault:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithPlaceDataLocalizedString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

