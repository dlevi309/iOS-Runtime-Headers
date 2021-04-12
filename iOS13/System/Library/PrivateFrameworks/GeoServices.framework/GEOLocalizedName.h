/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_languageCode : 1;
		unsigned wrote_nameType : 1;
		unsigned wrote_name : 1;
		unsigned wrote_phoneticName : 1;
		unsigned wrote_nameRank : 1;
		unsigned wrote_isDefault : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)languageCode;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readName;
-(void)_readLanguageCode;
-(BOOL)hasLanguageCode;
-(void)_readPhoneticName;
-(NSString *)phoneticName;
-(void)setPhoneticName:(NSString *)arg1 ;
-(BOOL)hasPhoneticName;
-(id)initWithPlaceDataLocalizedString:(id)arg1 ;
-(void)_readNameType;
-(NSString *)nameType;
-(void)setNameType:(NSString *)arg1 ;
-(BOOL)isDefault;
-(void)setIsDefault:(BOOL)arg1 ;
-(void)setHasIsDefault:(BOOL)arg1 ;
-(BOOL)hasIsDefault;
-(BOOL)hasNameType;
-(unsigned)nameRank;
-(void)setNameRank:(unsigned)arg1 ;
-(void)setHasNameRank:(BOOL)arg1 ;
-(BOOL)hasNameRank;
@end

