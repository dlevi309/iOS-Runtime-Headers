/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOAttribution : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTileSetRegion* _regions;
	unsigned long long _regionsCount;
	unsigned long long _regionsSpace;
	NSString* _badgeChecksum;
	NSString* _badge;
	NSString* _logoChecksum;
	NSString* _logo;
	NSString* _name;
	NSMutableArray* _resources;
	NSString* _url;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _dataSet;
	unsigned _linkDisplayStringIndex;
	struct {
		unsigned has_dataSet : 1;
		unsigned has_linkDisplayStringIndex : 1;
		unsigned read_unknownFields : 1;
		unsigned read_regions : 1;
		unsigned read_badgeChecksum : 1;
		unsigned read_badge : 1;
		unsigned read_logoChecksum : 1;
		unsigned read_logo : 1;
		unsigned read_name : 1;
		unsigned read_resources : 1;
		unsigned read_url : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasBadge; 
@property (nonatomic,retain) NSString * badge; 
@property (nonatomic,readonly) BOOL hasLogo; 
@property (nonatomic,retain) NSString * logo; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url; 
@property (nonatomic,readonly) BOOL hasBadgeChecksum; 
@property (nonatomic,retain) NSString * badgeChecksum; 
@property (nonatomic,readonly) BOOL hasLogoChecksum; 
@property (nonatomic,retain) NSString * logoChecksum; 
@property (nonatomic,retain) NSMutableArray * resources; 
@property (nonatomic,readonly) unsigned long long regionsCount; 
@property (nonatomic,readonly) GEOTileSetRegion* regions; 
@property (assign,nonatomic) BOOL hasDataSet; 
@property (assign,nonatomic) unsigned dataSet; 
@property (assign,nonatomic) BOOL hasLinkDisplayStringIndex; 
@property (assign,nonatomic) unsigned linkDisplayStringIndex; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)resourceType;
+(BOOL)isValid:(id)arg1 ;
-(NSString *)badgeChecksum;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearRegions;
-(NSString *)logo;
-(unsigned long long)regionsCount;
-(GEOTileSetRegion)regionAtIndex:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasName;
-(void)addRegion:(GEOTileSetRegion)arg1 ;
-(id)init;
-(void)addResource:(id)arg1 ;
-(id)jsonRepresentation;
-(void)setHasLinkDisplayStringIndex:(BOOL)arg1 ;
-(void)setBadge:(NSString *)arg1 ;
-(NSString *)badge;
-(NSMutableArray *)resources;
-(BOOL)hasBadge;
-(unsigned long long)resourcesCount;
-(void)setRegions:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(id)resourceAtIndex:(unsigned long long)arg1 ;
-(void)setDataSet:(unsigned)arg1 ;
-(void)setLogo:(NSString *)arg1 ;
-(GEOTileSetRegion*)regions;
-(void)clearResources;
-(BOOL)hasLogo;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)url;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)logoChecksum;
-(NSString *)name;
-(void)setBadgeChecksum:(NSString *)arg1 ;
-(void)setResources:(NSMutableArray *)arg1 ;
-(id)description;
-(BOOL)hasUrl;
-(void)setHasDataSet:(BOOL)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(BOOL)hasDataSet;
-(unsigned long long)hash;
-(unsigned)dataSet;
-(BOOL)hasBadgeChecksum;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)linkDisplayStringIndex;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasLogoChecksum;
-(BOOL)hasLinkDisplayStringIndex;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLinkDisplayStringIndex:(unsigned)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setLogoChecksum:(NSString *)arg1 ;
@end

