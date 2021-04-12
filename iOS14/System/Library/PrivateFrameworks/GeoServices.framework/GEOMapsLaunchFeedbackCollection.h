/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSessionId; 
@property (assign,nonatomic) GEOSessionID sessionId; 
@property (nonatomic,readonly) BOOL hasSourceAppBundleId; 
@property (nonatomic,retain) NSString * sourceAppBundleId; 
@property (nonatomic,readonly) BOOL hasUriScheme; 
@property (nonatomic,retain) NSString * uriScheme; 
+(BOOL)isValid:(id)arg1 ;
-(GEOSessionID)sessionId;
-(void)setSessionId:(GEOSessionID)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasSessionId;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSString *)sourceAppBundleId;
-(void)setSourceAppBundleId:(NSString *)arg1 ;
-(void)setUriScheme:(NSString *)arg1 ;
-(BOOL)hasSourceAppBundleId;
-(BOOL)hasUriScheme;
-(unsigned long long)hash;
-(NSString *)uriScheme;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasSessionId:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end
