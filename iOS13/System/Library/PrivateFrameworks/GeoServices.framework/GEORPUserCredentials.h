/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	struct {
		unsigned read_icloudUserMapsAuthToken : 1;
		unsigned read_icloudUserPersonId : 1;
		unsigned wrote_icloudUserMapsAuthToken : 1;
		unsigned wrote_icloudUserPersonId : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasIcloudUserPersonId; 
@property (nonatomic,retain) NSString * icloudUserPersonId; 
@property (nonatomic,readonly) BOOL hasIcloudUserMapsAuthToken; 
@property (nonatomic,retain) NSString * icloudUserMapsAuthToken; 
+(BOOL)isValid:(id)arg1 ;
+(id)_credentialsForPrimaryICloudAccount;
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
-(void)readAll:(BOOL)arg1 ;
-(void)setIcloudUserPersonId:(NSString *)arg1 ;
-(void)setIcloudUserMapsAuthToken:(NSString *)arg1 ;
-(void)_readIcloudUserPersonId;
-(void)_readIcloudUserMapsAuthToken;
-(NSString *)icloudUserPersonId;
-(NSString *)icloudUserMapsAuthToken;
-(BOOL)hasIcloudUserPersonId;
-(BOOL)hasIcloudUserMapsAuthToken;
@end

