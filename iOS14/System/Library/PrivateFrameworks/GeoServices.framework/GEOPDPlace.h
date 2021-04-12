/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDMapsIdentifier, NSString, GEOMapItemInitialRequestData;

@interface GEOPDPlace : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _components;
	unsigned long long _createdTime;
	GEOPDMapsIdentifier* _mapsId;
	unsigned long long _muid;
	NSString* _placeCacheKey;
	unsigned long long _preferredMuid;
	GEOMapItemInitialRequestData* _requestData;
	unsigned long long _updateVersion;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _referenceFrame;
	int _resultProviderId;
	int _status;
	struct {
		unsigned has_createdTime : 1;
		unsigned has_muid : 1;
		unsigned has_preferredMuid : 1;
		unsigned has_updateVersion : 1;
		unsigned has_referenceFrame : 1;
		unsigned has_resultProviderId : 1;
		unsigned has_status : 1;
		unsigned read_unknownFields : 1;
		unsigned read_components : 1;
		unsigned read_mapsId : 1;
		unsigned read_placeCacheKey : 1;
		unsigned read_requestData : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasReferenceFrame; 
@property (assign,nonatomic) int referenceFrame; 
@property (nonatomic,readonly) BOOL hasRequestData; 
@property (nonatomic,retain) GEOMapItemInitialRequestData * requestData; 
@property (nonatomic,readonly) BOOL hasPlaceCacheKey; 
@property (nonatomic,retain) NSString * placeCacheKey; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasPreferredMuid; 
@property (assign,nonatomic) unsigned long long preferredMuid; 
@property (nonatomic,retain) NSMutableArray * components; 
@property (assign,nonatomic) BOOL hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId; 
@property (assign,nonatomic) BOOL hasUpdateVersion; 
@property (assign,nonatomic) unsigned long long updateVersion; 
@property (nonatomic,readonly) BOOL hasMapsId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * mapsId; 
@property (assign,nonatomic) BOOL hasCreatedTime; 
@property (assign,nonatomic) unsigned long long createdTime; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)attributionForPlaceData:(id)arg1 type:(int)arg2 ;
+(Class)componentType;
+(id)failedPlaceDataForMuid:(unsigned long long)arg1 ;
+(id)failedPlaceData;
+(BOOL)isValid:(id)arg1 ;
+(id)componentTypesFromComponentInfos:(id)arg1 ;
-(BOOL)statusCodeIsValid;
-(BOOL)hasMuid;
-(id)secondaryName;
-(void)setHasMuid:(BOOL)arg1 ;
-(id)cacheKey;
-(id)secondarySpokenName;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)setPreferredMuid:(unsigned long long)arg1 ;
-(int)resultProviderId;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(void)setHasStatus:(BOOL)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setResultProviderId:(int)arg1 ;
-(void)setComponents:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)enumerateComponentsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)isDisputed;
-(void)setMapsId:(GEOPDMapsIdentifier *)arg1 ;
-(BOOL)hasRequestData;
-(void)enumerateValidComponentWithValuesOfType:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)copyWithStrippedOptionalData;
-(id)init;
-(GEOMapItemInitialRequestData *)requestData;
-(void)enumerateComponentOfType:(int)arg1 enumerationOptions:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)jsonRepresentation;
-(id)componentOfType:(int)arg1 options:(unsigned long long)arg2 ;
-(id)pdPlaceCacheKeyForRequest:(id)arg1 ;
-(void)setUpdateVersion:(unsigned long long)arg1 ;
-(id)_entityName;
-(BOOL)shouldCacheByIDForRequest:(id)arg1 ;
-(void)clearSensitiveFields;
-(id)componentAtIndex:(unsigned long long)arg1 ;
-(id)copyWithoutETAComponents;
-(BOOL)hasReferenceFrame;
-(void)enumerateValidComponentsWithValuesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)componentsCount;
-(id)spokenNameForLocale:(id)arg1 ;
-(BOOL)isCacheable;
-(BOOL)hasExpectedComponentTypes:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)placeDisplayType;
-(void)enumerateValidComponentValuesOfType:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithData:(id)arg1 ;
-(int)referenceFrame;
-(id)statusAsString:(int)arg1 ;
-(BOOL)_isKey:(id)arg1 subsetOf:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addComponent:(id)arg1 ;
-(id)businessURL;
-(BOOL)meetsManifestVersioningForServiceVersion:(id)arg1 ;
-(BOOL)hasStatus;
-(int)StringAsStatus:(id)arg1 ;
-(NSMutableArray *)components;
-(BOOL)hasExpiredComponentsAsOf:(double)arg1 ;
-(id)phoneNumbers;
-(id)description;
-(BOOL)hasPreferredMuid;
-(void)setCreatedTime:(unsigned long long)arg1 ;
-(void)setReferenceFrame:(int)arg1 ;
-(BOOL)hasCreatedTime;
-(unsigned long long)brandMUID;
-(void)enumerateComponentValuesOfType:(int)arg1 enumerationOptions:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)isStandAloneBrand;
-(void)setHasPreferredMuid:(BOOL)arg1 ;
-(GEOPDMapsIdentifier *)mapsId;
-(void)setHasReferenceFrame:(BOOL)arg1 ;
-(id)compactDebugDescription;
-(BOOL)hasMapsId;
-(void)setPlaceCacheKey:(NSString *)arg1 ;
-(NSString *)placeCacheKey;
-(id)bestName;
-(id)referenceFrameAsString:(int)arg1 ;
-(BOOL)phoneNumberOptsOutOfAds:(id)arg1 ;
-(unsigned)minTTL;
-(unsigned long long)hash;
-(void)_removeETAComponents;
-(void)clearComponents;
-(id)geoMapItemWithDetourInfo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasUpdateVersion:(BOOL)arg1 ;
-(unsigned long long)muid;
-(void)setStatus:(int)arg1 ;
-(id)geoMapItem;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)createdTime;
-(void)writeTo:(id)arg1 ;
-(void)setHasCreatedTime:(BOOL)arg1 ;
-(void)setRequestData:(GEOMapItemInitialRequestData *)arg1 ;
-(id)successfulComponentWithValuesOfType:(int)arg1 ;
-(unsigned long long)preferredMuid;
-(int)StringAsReferenceFrame:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasBrandMUID;
-(id)entityComponent;
-(BOOL)hasPlaceCacheKey;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFirstSeenTimestamp:(double)arg1 ;
-(int)status;
-(id)_cleanedPhoneNumberForPhoneNumberRepresentation:(id)arg1 ;
-(BOOL)hasUpdateVersion;
-(unsigned long long)updateVersion;
@end

