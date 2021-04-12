/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_components : 1;
		unsigned wrote_createdTime : 1;
		unsigned wrote_mapsId : 1;
		unsigned wrote_muid : 1;
		unsigned wrote_placeCacheKey : 1;
		unsigned wrote_preferredMuid : 1;
		unsigned wrote_requestData : 1;
		unsigned wrote_updateVersion : 1;
		unsigned wrote_referenceFrame : 1;
		unsigned wrote_resultProviderId : 1;
		unsigned wrote_status : 1;
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
+(BOOL)isValid:(id)arg1 ;
+(id)componentTypesFromComponentInfos:(id)arg1 ;
+(Class)componentType;
+(id)failedPlaceDataForMuid:(unsigned long long)arg1 ;
+(id)failedPlaceData;
+(id)attributionForPlaceData:(id)arg1 type:(int)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(NSMutableArray *)components;
-(id)cacheKey;
-(void)writeTo:(id)arg1 ;
-(id)phoneNumbers;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)referenceFrame;
-(void)setReferenceFrame:(int)arg1 ;
-(id)_entityName;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(GEOPDMapsIdentifier *)mapsId;
-(BOOL)_isKey:(id)arg1 subsetOf:(id)arg2 ;
-(unsigned)minTTL;
-(id)entityComponent;
-(id)pdPlaceCacheKey;
-(BOOL)meetsManifestVersioningForServiceVersion:(id)arg1 ;
-(BOOL)isCacheable;
-(BOOL)hasExpectedComponentTypes:(id)arg1 ;
-(void)clearSensitiveFields;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasReferenceFrame;
-(void)setHasReferenceFrame:(BOOL)arg1 ;
-(id)referenceFrameAsString:(int)arg1 ;
-(int)StringAsReferenceFrame:(id)arg1 ;
-(void)_readMapsId;
-(void)setMapsId:(GEOPDMapsIdentifier *)arg1 ;
-(BOOL)hasMapsId;
-(BOOL)isDisputed;
-(int)resultProviderId;
-(void)setResultProviderId:(int)arg1 ;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(id)geoMapItem;
-(void)setRequestData:(GEOMapItemInitialRequestData *)arg1 ;
-(id)spokenNameForLocale:(id)arg1 ;
-(id)secondaryName;
-(id)secondarySpokenName;
-(GEOMapItemInitialRequestData *)requestData;
-(id)bestName;
-(id)compactDebugDescription;
-(void)setFirstSeenTimestamp:(double)arg1 ;
-(void)enumerateValidComponentsWithValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateValidComponentValuesOfType:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateComponentOfType:(int)arg1 enumerationOptions:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)statusCodeIsValid;
-(void)enumerateComponentsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)componentOfType:(int)arg1 options:(unsigned long long)arg2 ;
-(void)enumerateComponentValuesOfType:(int)arg1 enumerationOptions:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)_cleanedPhoneNumberForPhoneNumberRepresentation:(id)arg1 ;
-(int)placeDisplayType;
-(void)_removeETAComponents;
-(void)setComponents:(NSMutableArray *)arg1 ;
-(NSString *)placeCacheKey;
-(void)setPlaceCacheKey:(NSString *)arg1 ;
-(void)enumerateValidComponentWithValuesOfType:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)successfulComponentWithValuesOfType:(int)arg1 ;
-(BOOL)phoneNumberOptsOutOfAds:(id)arg1 ;
-(BOOL)hasExpiredComponentsAsOf:(double)arg1 ;
-(BOOL)isStandAloneBrand;
-(BOOL)hasBrandMUID;
-(unsigned long long)brandMUID;
-(id)businessURL;
-(id)copyWithoutETAComponents;
-(id)copyWithStrippedOptionalData;
-(BOOL)hasPreferredMuid;
-(unsigned long long)preferredMuid;
-(void)setPreferredMuid:(unsigned long long)arg1 ;
-(id)geoMapItemWithDetourInfo:(id)arg1 ;
-(void)_readComponents;
-(void)_addNoFlagsComponent:(id)arg1 ;
-(BOOL)hasRequestData;
-(unsigned long long)componentsCount;
-(void)clearComponents;
-(id)componentAtIndex:(unsigned long long)arg1 ;
-(void)addComponent:(id)arg1 ;
-(void)_readRequestData;
-(void)_readPlaceCacheKey;
-(void)setHasPreferredMuid:(BOOL)arg1 ;
-(unsigned long long)updateVersion;
-(void)setUpdateVersion:(unsigned long long)arg1 ;
-(void)setHasUpdateVersion:(BOOL)arg1 ;
-(BOOL)hasUpdateVersion;
-(unsigned long long)createdTime;
-(void)setCreatedTime:(unsigned long long)arg1 ;
-(void)setHasCreatedTime:(BOOL)arg1 ;
-(BOOL)hasCreatedTime;
-(BOOL)hasPlaceCacheKey;
@end

