/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSData, NSString, GEORPUserCredentials;

@interface GEORPFeedbackUserInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSData* _devicePushToken;
	NSString* _preferredEmail;
	NSString* _ugcUserId;
	GEORPUserCredentials* _userCredentials;
	NSString* _userEmail;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_devicePushToken : 1;
		unsigned read_preferredEmail : 1;
		unsigned read_ugcUserId : 1;
		unsigned read_userCredentials : 1;
		unsigned read_userEmail : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasUserCredentials; 
@property (nonatomic,retain) GEORPUserCredentials * userCredentials; 
@property (nonatomic,readonly) BOOL hasDevicePushToken; 
@property (nonatomic,retain) NSData * devicePushToken; 
@property (nonatomic,readonly) BOOL hasUserEmail; 
@property (nonatomic,retain) NSString * userEmail; 
@property (nonatomic,readonly) BOOL hasPreferredEmail; 
@property (nonatomic,retain) NSString * preferredEmail; 
@property (nonatomic,readonly) BOOL hasUgcUserId; 
@property (nonatomic,retain) NSString * ugcUserId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setDevicePushToken:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)devicePushToken;
-(BOOL)hasDevicePushToken;
-(id)initWithData:(id)arg1 ;
-(GEORPUserCredentials *)userCredentials;
-(NSString *)preferredEmail;
-(void)setUserCredentials:(GEORPUserCredentials *)arg1 ;
-(void)setUserEmail:(NSString *)arg1 ;
-(void)setPreferredEmail:(NSString *)arg1 ;
-(void)setUgcUserId:(NSString *)arg1 ;
-(BOOL)hasUserCredentials;
-(BOOL)hasUserEmail;
-(BOOL)hasPreferredEmail;
-(BOOL)hasUgcUserId;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSString *)userEmail;
-(NSString *)ugcUserId;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

