/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_launchUri : 1;
		unsigned wrote_sourceAppId : 1;
		unsigned wrote_timeToLeave : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSourceAppId; 
@property (nonatomic,retain) NSString * sourceAppId; 
@property (nonatomic,readonly) BOOL hasLaunchUri; 
@property (nonatomic,retain) NSString * launchUri; 
@property (nonatomic,readonly) BOOL hasTimeToLeave; 
@property (nonatomic,retain) GEOTimeToLeaveMapLaunch * timeToLeave; 
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
-(void)readAll:(BOOL)arg1 ;
-(void)setSourceAppId:(NSString *)arg1 ;
-(void)setLaunchUri:(NSString *)arg1 ;
-(void)_readSourceAppId;
-(void)_readLaunchUri;
-(void)_readTimeToLeave;
-(NSString *)sourceAppId;
-(NSString *)launchUri;
-(GEOTimeToLeaveMapLaunch *)timeToLeave;
-(void)setTimeToLeave:(GEOTimeToLeaveMapLaunch *)arg1 ;
-(BOOL)hasSourceAppId;
-(BOOL)hasLaunchUri;
-(BOOL)hasTimeToLeave;
@end

