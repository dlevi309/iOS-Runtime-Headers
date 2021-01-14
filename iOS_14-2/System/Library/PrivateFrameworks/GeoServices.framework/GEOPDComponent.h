/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDAttribution, GEOPDSource, NSMutableArray;

@interface GEOPDComponent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDAttribution* _attribution;
	GEOPDSource* _source;
	double _timestampFirstSeen;
	NSMutableArray* _values;
	NSMutableArray* _versionDomains;
	int _cacheControl;
	int _startIndex;
	int _status;
	unsigned _ttl;
	int _type;
	int _valuesAvailable;
	unsigned _version;
	struct {
		unsigned has_timestampFirstSeen : 1;
		unsigned has_cacheControl : 1;
		unsigned has_startIndex : 1;
		unsigned has_status : 1;
		unsigned has_ttl : 1;
		unsigned has_type : 1;
		unsigned has_valuesAvailable : 1;
		unsigned has_version : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTimestampFirstSeen; 
@property (assign,nonatomic) double timestampFirstSeen; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasTtl; 
@property (assign,nonatomic) unsigned ttl; 
@property (assign,nonatomic) BOOL hasStartIndex; 
@property (assign,nonatomic) int startIndex; 
@property (assign,nonatomic) BOOL hasValuesAvailable; 
@property (assign,nonatomic) int valuesAvailable; 
@property (nonatomic,readonly) BOOL hasAttribution; 
@property (nonatomic,retain) GEOPDAttribution * attribution; 
@property (nonatomic,retain) NSMutableArray * values; 
@property (nonatomic,retain) NSMutableArray * versionDomains; 
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version; 
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) GEOPDSource * source; 
@property (assign,nonatomic) BOOL hasCacheControl; 
@property (assign,nonatomic) int cacheControl; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)valueType;
+(Class)versionDomainType;
+(BOOL)isValid:(id)arg1 ;
-(BOOL)statusCodeIsValid;
-(id)dictionaryRepresentation;
-(void)setTtl:(unsigned)arg1 ;
-(void)setHasVersion:(BOOL)arg1 ;
-(void)clearValues;
-(void)addValue:(id)arg1 ;
-(BOOL)hasVersion;
-(unsigned long long)valuesCount;
-(unsigned long long)versionDomainsCount;
-(PBUnknownFields *)unknownFields;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCacheControl;
-(int)startIndex;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasSource;
-(NSMutableArray *)versionDomains;
-(void)addVersionDomain:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(void)setVersionDomains:(NSMutableArray *)arg1 ;
-(void)clearVersionDomains;
-(id)versionDomainAtIndex:(unsigned long long)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(id)jsonRepresentation;
-(void)setHasValuesAvailable:(BOOL)arg1 ;
-(NSMutableArray *)values;
-(void)setTimestampFirstSeen:(double)arg1 ;
-(BOOL)hasType;
-(void)setStartIndex:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(void)setValues:(NSMutableArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSource:(GEOPDSource *)arg1 ;
-(BOOL)hasStatus;
-(int)StringAsStatus:(id)arg1 ;
-(BOOL)hasTimestampFirstSeen;
-(void)setHasCacheControl:(BOOL)arg1 ;
-(id)description;
-(GEOPDAttribution *)attribution;
-(double)timestampFirstSeen;
-(int)valuesAvailable;
-(BOOL)hasStartIndex;
-(void)setHasTimestampFirstSeen:(BOOL)arg1 ;
-(BOOL)hasTtl;
-(unsigned)ttl;
-(int)type;
-(void)setCacheControl:(int)arg1 ;
-(void)setHasTtl:(BOOL)arg1 ;
-(void)setHasStartIndex:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasAttribution;
-(void)setStatus:(int)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasValuesAvailable;
-(void)writeTo:(id)arg1 ;
-(id)cacheControlAsString:(int)arg1 ;
-(void)setValuesAvailable:(int)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAttribution:(GEOPDAttribution *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
-(int)StringAsCacheControl:(id)arg1 ;
-(GEOPDSource *)source;
-(int)cacheControl;
@end

