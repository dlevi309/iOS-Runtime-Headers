/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSData;

@interface GEOMapItemStorageUserValues : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _name;
	NSString* _phoneNumber;
	NSData* _timeZoneData;
	NSString* _timeZoneName;
	NSString* _url;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_name : 1;
		unsigned read_phoneNumber : 1;
		unsigned read_timeZoneData : 1;
		unsigned read_timeZoneName : 1;
		unsigned read_url : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) BOOL hasPhoneNumber; 
@property (nonatomic,retain) NSString * phoneNumber; 
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url; 
@property (nonatomic,readonly) BOOL hasTimeZoneName; 
@property (nonatomic,retain) NSString * timeZoneName; 
@property (nonatomic,readonly) BOOL hasTimeZoneData; 
@property (nonatomic,retain) NSData * timeZoneData; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasName;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)phoneNumber;
-(void)setTimeZoneName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)url;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(BOOL)hasUrl;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)timeZoneName;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasTimeZoneName;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasPhoneNumber;
-(BOOL)hasTimeZoneData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTimeZoneData:(NSData *)arg1 ;
-(NSData *)timeZoneData;
@end

