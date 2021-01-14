/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOTimeToLeaveMapLaunch;

@interface GEOLogMsgEventMapLaunch : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _launchUri;
	NSString* _sourceAppId;
	GEOTimeToLeaveMapLaunch* _timeToLeave;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_launchUri : 1;
		unsigned read_sourceAppId : 1;
		unsigned read_timeToLeave : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSourceAppId; 
@property (nonatomic,retain) NSString * sourceAppId; 
@property (nonatomic,readonly) BOOL hasLaunchUri; 
@property (nonatomic,retain) NSString * launchUri; 
@property (nonatomic,readonly) BOOL hasTimeToLeave; 
@property (nonatomic,retain) GEOTimeToLeaveMapLaunch * timeToLeave; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)launchUri;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(NSString *)sourceAppId;
-(BOOL)hasSourceAppId;
-(BOOL)hasLaunchUri;
-(BOOL)hasTimeToLeave;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(GEOTimeToLeaveMapLaunch *)timeToLeave;
-(void)setTimeToLeave:(GEOTimeToLeaveMapLaunch *)arg1 ;
-(unsigned long long)hash;
-(void)setLaunchUri:(NSString *)arg1 ;
-(void)setSourceAppId:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

