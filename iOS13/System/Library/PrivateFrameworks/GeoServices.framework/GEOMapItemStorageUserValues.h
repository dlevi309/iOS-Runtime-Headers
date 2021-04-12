/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_name : 1;
		unsigned wrote_phoneNumber : 1;
		unsigned wrote_timeZoneData : 1;
		unsigned wrote_timeZoneName : 1;
		unsigned wrote_url : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)url;
-(NSString *)phoneNumber;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(BOOL)hasName;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(BOOL)hasUrl;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readName;
-(void)_readPhoneNumber;
-(void)_readUrl;
-(BOOL)hasPhoneNumber;
-(void)_readTimeZoneName;
-(void)_readTimeZoneData;
-(NSString *)timeZoneName;
-(NSData *)timeZoneData;
-(void)setTimeZoneName:(NSString *)arg1 ;
-(void)setTimeZoneData:(NSData *)arg1 ;
-(BOOL)hasTimeZoneName;
-(BOOL)hasTimeZoneData;
@end

