/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_locale : 1;
		unsigned wrote_name : 1;
		unsigned wrote_phoneticName : 1;
		unsigned wrote_shield : 1;
		unsigned wrote_phoneticType : 1;
		unsigned wrote_shieldType : 1;
		unsigned wrote_signType : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readName;
-(void)_readPhoneticName;
-(NSString *)phoneticName;
-(void)setPhoneticName:(NSString *)arg1 ;
-(BOOL)hasPhoneticName;
-(void)_readShield;
-(NSString *)shield;
-(void)setShield:(NSString *)arg1 ;
-(BOOL)hasShield;
-(int)shieldType;
-(void)_readLocale;
-(BOOL)hasLocale;
-(int)signType;
-(BOOL)hasShieldType;
-(void)setShieldType:(int)arg1 ;
-(void)setHasShieldType:(BOOL)arg1 ;
-(int)phoneticType;
-(void)setPhoneticType:(int)arg1 ;
-(void)setHasPhoneticType:(BOOL)arg1 ;
-(BOOL)hasPhoneticType;
-(id)phoneticTypeAsString:(int)arg1 ;
-(int)StringAsPhoneticType:(id)arg1 ;
-(void)setSignType:(int)arg1 ;
-(void)setHasSignType:(BOOL)arg1 ;
-(BOOL)hasSignType;
-(id)signTypeAsString:(int)arg1 ;
-(int)StringAsSignType:(id)arg1 ;
@end

