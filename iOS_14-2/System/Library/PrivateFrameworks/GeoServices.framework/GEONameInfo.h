/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEONameInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _locale;
	NSString* _name;
	NSString* _phoneticName;
	NSString* _shield;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _phoneticType;
	int _shieldType;
	int _signType;
	struct {
		unsigned has_phoneticType : 1;
		unsigned has_shieldType : 1;
		unsigned has_signType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_locale : 1;
		unsigned read_name : 1;
		unsigned read_phoneticName : 1;
		unsigned read_shield : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) BOOL hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName; 
@property (nonatomic,readonly) BOOL hasShield; 
@property (nonatomic,retain) NSString * shield; 
@property (assign,nonatomic) BOOL hasShieldType; 
@property (assign,nonatomic) int shieldType; 
@property (assign,nonatomic) BOOL hasPhoneticType; 
@property (assign,nonatomic) int phoneticType; 
@property (assign,nonatomic) BOOL hasSignType; 
@property (assign,nonatomic) int signType; 
@property (nonatomic,readonly) BOOL hasLocale; 
@property (nonatomic,retain) NSString * locale; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)locale;
-(BOOL)hasLocale;
-(BOOL)hasPhoneticName;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasName;
-(NSString *)phoneticName;
-(void)setLocale:(NSString *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)shield;
-(void)setPhoneticName:(NSString *)arg1 ;
-(void)setPhoneticType:(int)arg1 ;
-(void)setSignType:(int)arg1 ;
-(int)phoneticType;
-(void)setHasPhoneticType:(BOOL)arg1 ;
-(BOOL)hasPhoneticType;
-(id)phoneticTypeAsString:(int)arg1 ;
-(int)StringAsPhoneticType:(id)arg1 ;
-(void)setHasSignType:(BOOL)arg1 ;
-(BOOL)hasSignType;
-(id)signTypeAsString:(int)arg1 ;
-(int)StringAsSignType:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)shieldType;
-(NSString *)name;
-(id)description;
-(int)signType;
-(unsigned long long)hash;
-(BOOL)hasShield;
-(BOOL)hasShieldType;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasShieldType:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setShieldType:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setShield:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

