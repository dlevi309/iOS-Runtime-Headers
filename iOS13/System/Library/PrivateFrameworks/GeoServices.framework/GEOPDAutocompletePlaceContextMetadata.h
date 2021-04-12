/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOPDAutocompletePlaceContextMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _clientizationFeatures;
	NSMutableArray* _alternateSearchableNames;
	NSString* _matchedDisplayNameLanguageCode;
	NSString* _matchedDisplayName;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _isDefaultName;
	BOOL _isLookAroundActionAllowed;
	BOOL _isProminentResult;
	BOOL _shouldSuppressDirectionsAction;
	SCD_Struct_GE92 _flags;

}

@property (nonatomic,readonly) BOOL hasMatchedDisplayName; 
@property (nonatomic,retain) NSString * matchedDisplayName; 
@property (assign,nonatomic) BOOL hasIsDefaultName; 
@property (assign,nonatomic) BOOL isDefaultName; 
@property (assign,nonatomic) BOOL hasIsProminentResult; 
@property (assign,nonatomic) BOOL isProminentResult; 
@property (nonatomic,readonly) unsigned long long clientizationFeaturesCount; 
@property (nonatomic,readonly) int* clientizationFeatures; 
@property (nonatomic,readonly) BOOL hasMatchedDisplayNameLanguageCode; 
@property (nonatomic,retain) NSString * matchedDisplayNameLanguageCode; 
@property (assign,nonatomic) BOOL hasShouldSuppressDirectionsAction; 
@property (assign,nonatomic) BOOL shouldSuppressDirectionsAction; 
@property (assign,nonatomic) BOOL hasIsLookAroundActionAllowed; 
@property (assign,nonatomic) BOOL isLookAroundActionAllowed; 
@property (nonatomic,retain) NSMutableArray * alternateSearchableNames; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)alternateSearchableNameType;
-(id)init;
-(void)dealloc;
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readMatchedDisplayName;
-(void)_readMatchedDisplayNameLanguageCode;
-(void)_readAlternateSearchableNames;
-(void)_addNoFlagsAlternateSearchableName:(id)arg1 ;
-(NSString *)matchedDisplayName;
-(NSString *)matchedDisplayNameLanguageCode;
-(void)setMatchedDisplayName:(NSString *)arg1 ;
-(void)setMatchedDisplayNameLanguageCode:(NSString *)arg1 ;
-(unsigned long long)alternateSearchableNamesCount;
-(void)clearAlternateSearchableNames;
-(id)alternateSearchableNameAtIndex:(unsigned long long)arg1 ;
-(void)addAlternateSearchableName:(id)arg1 ;
-(NSMutableArray *)alternateSearchableNames;
-(BOOL)hasMatchedDisplayName;
-(BOOL)isDefaultName;
-(void)setIsDefaultName:(BOOL)arg1 ;
-(void)setHasIsDefaultName:(BOOL)arg1 ;
-(BOOL)hasIsDefaultName;
-(BOOL)hasMatchedDisplayNameLanguageCode;
-(void)setAlternateSearchableNames:(NSMutableArray *)arg1 ;
-(BOOL)isProminentResult;
-(void)setIsProminentResult:(BOOL)arg1 ;
-(void)setHasIsProminentResult:(BOOL)arg1 ;
-(BOOL)hasIsProminentResult;
-(void)_readClientizationFeatures;
-(void)_addNoFlagsClientizationFeature:(int)arg1 ;
-(unsigned long long)clientizationFeaturesCount;
-(void)clearClientizationFeatures;
-(int)clientizationFeatureAtIndex:(unsigned long long)arg1 ;
-(void)addClientizationFeature:(int)arg1 ;
-(int*)clientizationFeatures;
-(void)setClientizationFeatures:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)clientizationFeaturesAsString:(int)arg1 ;
-(int)StringAsClientizationFeatures:(id)arg1 ;
-(BOOL)shouldSuppressDirectionsAction;
-(void)setShouldSuppressDirectionsAction:(BOOL)arg1 ;
-(void)setHasShouldSuppressDirectionsAction:(BOOL)arg1 ;
-(BOOL)hasShouldSuppressDirectionsAction;
-(BOOL)isLookAroundActionAllowed;
-(void)setIsLookAroundActionAllowed:(BOOL)arg1 ;
-(void)setHasIsLookAroundActionAllowed:(BOOL)arg1 ;
-(BOOL)hasIsLookAroundActionAllowed;
@end

