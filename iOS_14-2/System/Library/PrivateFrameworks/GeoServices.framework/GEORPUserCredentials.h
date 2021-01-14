/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEORPUserCredentials : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _icloudUserMapsAuthToken;
	NSString* _icloudUserPersonId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasIcloudUserPersonId; 
@property (nonatomic,retain) NSString * icloudUserPersonId; 
@property (nonatomic,readonly) BOOL hasIcloudUserMapsAuthToken; 
@property (nonatomic,retain) NSString * icloudUserMapsAuthToken; 
+(id)_credentialsForPrimaryICloudAccount;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(void)setIcloudUserMapsAuthToken:(NSString *)arg1 ;
-(void)setIcloudUserPersonId:(NSString *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)icloudUserPersonId;
-(NSString *)icloudUserMapsAuthToken;
-(BOOL)hasIcloudUserPersonId;
-(BOOL)hasIcloudUserMapsAuthToken;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

