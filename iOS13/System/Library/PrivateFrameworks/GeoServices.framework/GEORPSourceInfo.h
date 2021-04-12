/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEORPSourceInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _sourceApplication;
	NSString* _sourceUrl;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_sourceApplication : 1;
		unsigned read_sourceUrl : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_sourceApplication : 1;
		unsigned wrote_sourceUrl : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSourceApplication; 
@property (nonatomic,retain) NSString * sourceApplication; 
@property (nonatomic,readonly) BOOL hasSourceUrl; 
@property (nonatomic,retain) NSString * sourceUrl; 
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
-(NSString *)sourceApplication;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readSourceApplication;
-(void)_readSourceUrl;
-(NSString *)sourceUrl;
-(void)setSourceApplication:(NSString *)arg1 ;
-(void)setSourceUrl:(NSString *)arg1 ;
-(BOOL)hasSourceApplication;
-(BOOL)hasSourceUrl;
@end

