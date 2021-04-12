/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEODirectionsRequestFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _appIdentifier;
	NSString* _requestingAppId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _purpose;
	int _source;
	struct {
		unsigned has_purpose : 1;
		unsigned has_source : 1;
		unsigned read_unknownFields : 1;
		unsigned read_appIdentifier : 1;
		unsigned read_requestingAppId : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_appIdentifier : 1;
		unsigned wrote_requestingAppId : 1;
		unsigned wrote_purpose : 1;
		unsigned wrote_source : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasPurpose; 
@property (assign,nonatomic) int purpose; 
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source; 
@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,retain) NSString * appIdentifier; 
@property (nonatomic,readonly) BOOL hasRequestingAppId; 
@property (nonatomic,retain) NSString * requestingAppId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setSource:(int)arg1 ;
-(int)source;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasSource;
-(void)setPurpose:(int)arg1 ;
-(int)purpose;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)initWithPurpose:(int)arg1 andSource:(int)arg2 andIdentifier:(id)arg3 ;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(void)setRequestingAppId:(NSString *)arg1 ;
-(id)initWithPurpose:(int)arg1 ;
-(id)initWithPurpose:(int)arg1 andSource:(int)arg2 ;
-(void)_readRequestingAppId;
-(NSString *)requestingAppId;
-(BOOL)hasRequestingAppId;
-(void)_readAppIdentifier;
-(NSString *)appIdentifier;
-(BOOL)hasAppIdentifier;
-(void)setHasSource:(BOOL)arg1 ;
-(id)sourceAsString:(int)arg1 ;
-(int)StringAsSource:(id)arg1 ;
-(void)setHasPurpose:(BOOL)arg1 ;
-(BOOL)hasPurpose;
-(id)purposeAsString:(int)arg1 ;
-(int)StringAsPurpose:(id)arg1 ;
@end

