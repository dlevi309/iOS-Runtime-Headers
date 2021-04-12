/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)isValid:(id)arg1 ;
+(Class)versionDomainType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setSource:(GEOPDSource *)arg1 ;
-(void)setValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)values;
-(GEOPDSource *)source;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(int)status;
-(void)writeTo:(id)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addValue:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasSource;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)startIndex;
-(void)setStartIndex:(int)arg1 ;
-(unsigned long long)valuesCount;
-(void)clearValues;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)cacheControl;
-(unsigned)ttl;
-(NSMutableArray *)versionDomains;
-(BOOL)hasVersion;
-(BOOL)hasCacheControl;
-(void)setHasVersion:(BOOL)arg1 ;
-(void)setCacheControl:(int)arg1 ;
-(void)setHasCacheControl:(BOOL)arg1 ;
-(id)cacheControlAsString:(int)arg1 ;
-(int)StringAsCacheControl:(id)arg1 ;
-(GEOPDAttribution *)attribution;
-(void)setAttribution:(GEOPDAttribution *)arg1 ;
-(BOOL)hasAttribution;
-(BOOL)hasStartIndex;
-(BOOL)hasTimestampFirstSeen;
-(BOOL)hasTtl;
-(double)timestampFirstSeen;
-(BOOL)statusCodeIsValid;
-(void)setTimestampFirstSeen:(double)arg1 ;
-(void)addVersionDomain:(id)arg1 ;
-(unsigned long long)versionDomainsCount;
-(void)clearVersionDomains;
-(id)versionDomainAtIndex:(unsigned long long)arg1 ;
-(void)setVersionDomains:(NSMutableArray *)arg1 ;
-(void)setTtl:(unsigned)arg1 ;
-(void)setHasTtl:(BOOL)arg1 ;
-(void)setHasStartIndex:(BOOL)arg1 ;
-(int)valuesAvailable;
-(void)setValuesAvailable:(int)arg1 ;
-(void)setHasValuesAvailable:(BOOL)arg1 ;
-(BOOL)hasValuesAvailable;
-(void)setHasTimestampFirstSeen:(BOOL)arg1 ;
@end

