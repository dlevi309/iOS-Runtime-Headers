/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDClientMetadata, NSString;

@interface GEOABAssignmentRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDClientMetadata* _clientMetadata;
	NSString* _guid;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _requestType;
	struct {
		unsigned has_requestType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_clientMetadata : 1;
		unsigned read_guid : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_clientMetadata : 1;
		unsigned wrote_guid : 1;
		unsigned wrote_requestType : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid; 
@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType; 
@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) GEOPDClientMetadata * clientMetadata; 
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
-(int)requestType;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(BOOL)hasRequestType;
-(id)requestTypeAsString:(int)arg1 ;
-(int)StringAsRequestType:(id)arg1 ;
-(void)clearSensitiveFields;
-(GEOPDClientMetadata *)clientMetadata;
-(void)_readClientMetadata;
-(BOOL)hasClientMetadata;
-(void)setClientMetadata:(GEOPDClientMetadata *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(void)_readGuid;
-(NSString *)guid;
-(BOOL)hasGuid;
@end

