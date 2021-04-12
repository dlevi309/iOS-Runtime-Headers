/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	GEORPUserCredentials* _userCredentials;
	NSString* _userEmail;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_devicePushToken : 1;
		unsigned read_preferredEmail : 1;
		unsigned read_userCredentials : 1;
		unsigned read_userEmail : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_devicePushToken : 1;
		unsigned wrote_preferredEmail : 1;
		unsigned wrote_userCredentials : 1;
		unsigned wrote_userEmail : 1;
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
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEORPUserCredentials *)userCredentials;
-(void)setUserCredentials:(GEORPUserCredentials *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readUserCredentials;
-(void)_readDevicePushToken;
-(void)_readUserEmail;
-(void)_readPreferredEmail;
-(NSData *)devicePushToken;
-(NSString *)userEmail;
-(NSString *)preferredEmail;
-(void)setDevicePushToken:(NSData *)arg1 ;
-(void)setUserEmail:(NSString *)arg1 ;
-(void)setPreferredEmail:(NSString *)arg1 ;
-(BOOL)hasUserCredentials;
-(BOOL)hasDevicePushToken;
-(BOOL)hasUserEmail;
-(BOOL)hasPreferredEmail;
@end

