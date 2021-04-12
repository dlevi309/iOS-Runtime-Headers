/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOMapsLaunchFeedbackCollection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOSessionID _sessionId;
	NSString* _sourceAppBundleId;
	NSString* _uriScheme;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_sessionId : 1;
		unsigned read_sourceAppBundleId : 1;
		unsigned read_uriScheme : 1;
		unsigned wrote_sessionId : 1;
		unsigned wrote_sourceAppBundleId : 1;
		unsigned wrote_uriScheme : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSessionId; 
@property (assign,nonatomic) GEOSessionID sessionId; 
@property (nonatomic,readonly) BOOL hasSourceAppBundleId; 
@property (nonatomic,retain) NSString * sourceAppBundleId; 
@property (nonatomic,readonly) BOOL hasUriScheme; 
@property (nonatomic,retain) NSString * uriScheme; 
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
-(GEOSessionID)sessionId;
-(void)setSessionId:(GEOSessionID)arg1 ;
-(void)setHasSessionId:(BOOL)arg1 ;
-(BOOL)hasSessionId;
-(void)_readSourceAppBundleId;
-(void)_readUriScheme;
-(NSString *)sourceAppBundleId;
-(NSString *)uriScheme;
-(void)setSourceAppBundleId:(NSString *)arg1 ;
-(void)setUriScheme:(NSString *)arg1 ;
-(BOOL)hasSourceAppBundleId;
-(BOOL)hasUriScheme;
@end

