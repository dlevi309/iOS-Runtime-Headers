/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOTransitIncidentItem : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _transitIncidentTitle;
	NSString* _transitLineMuid;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_transitIncidentTitle : 1;
		unsigned read_transitLineMuid : 1;
		unsigned wrote_transitIncidentTitle : 1;
		unsigned wrote_transitLineMuid : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTransitIncidentTitle; 
@property (nonatomic,retain) NSString * transitIncidentTitle; 
@property (nonatomic,readonly) BOOL hasTransitLineMuid; 
@property (nonatomic,retain) NSString * transitLineMuid; 
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
-(NSString *)transitLineMuid;
-(void)setTransitLineMuid:(NSString *)arg1 ;
-(BOOL)hasTransitLineMuid;
-(void)_readTransitIncidentTitle;
-(void)_readTransitLineMuid;
-(NSString *)transitIncidentTitle;
-(void)setTransitIncidentTitle:(NSString *)arg1 ;
-(BOOL)hasTransitIncidentTitle;
@end

