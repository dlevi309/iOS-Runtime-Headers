/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEORPPostedBy : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _nickname;
	NSString* _userDsid;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _role;
	struct {
		unsigned has_role : 1;
		unsigned read_unknownFields : 1;
		unsigned read_nickname : 1;
		unsigned read_userDsid : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRole; 
@property (assign,nonatomic) int role; 
@property (nonatomic,readonly) BOOL hasUserDsid; 
@property (nonatomic,retain) NSString * userDsid; 
@property (nonatomic,readonly) BOOL hasNickname; 
@property (nonatomic,retain) NSString * nickname; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasRole;
-(void)setHasRole:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setRole:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)nickname;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasNickname;
-(void)setUserDsid:(NSString *)arg1 ;
-(id)roleAsString:(int)arg1 ;
-(BOOL)hasUserDsid;
-(int)StringAsRole:(id)arg1 ;
-(id)description;
-(NSString *)userDsid;
-(void)setNickname:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)role;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

