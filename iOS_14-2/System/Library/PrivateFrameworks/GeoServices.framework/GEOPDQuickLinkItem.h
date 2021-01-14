/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDQuickLinkItem : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _appAdamId;
	NSString* _bundleId;
	NSString* _title;
	NSString* _url;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _linkType;
	struct {
		unsigned has_linkType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_appAdamId : 1;
		unsigned read_bundleId : 1;
		unsigned read_title : 1;
		unsigned read_url : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url; 
@property (nonatomic,readonly) BOOL hasAppAdamId; 
@property (nonatomic,retain) NSString * appAdamId; 
@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId; 
@property (assign,nonatomic) BOOL hasLinkType; 
@property (assign,nonatomic) int linkType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)quickLinksForPlaceData:(id)arg1 ;
+(id)secondaryQuickLinksForPlaceData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasTitle;
-(void)setLinkType:(int)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(int)linkType;
-(NSString *)bundleId;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)hasBundleId;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)url;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasLinkType;
-(BOOL)hasAppAdamId;
-(void)setHasLinkType:(BOOL)arg1 ;
-(id)linkTypeAsString:(int)arg1 ;
-(int)StringAsLinkType:(id)arg1 ;
-(id)description;
-(BOOL)hasUrl;
-(NSString *)appAdamId;
-(void)setAppAdamId:(NSString *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

