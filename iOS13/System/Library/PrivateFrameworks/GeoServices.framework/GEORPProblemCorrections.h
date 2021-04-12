/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEORPCorrectedCoordinate, NSMutableArray, GEORPCorrectedLabel, GEORPMapLocation, GEORPCorrectedSearch, GEORPDirectionsProblem, GEORPMerchantLookupCorrections, GEORPPlaceProblem;

@interface GEORPProblemCorrections : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _comments;
	GEORPCorrectedCoordinate* _correctedCoordinate;
	NSMutableArray* _correctedFields;
	NSMutableArray* _correctedFlags;
	GEORPCorrectedLabel* _correctedLabel;
	GEORPMapLocation* _correctedMapLocation;
	GEORPCorrectedSearch* _correctedSearch;
	GEORPDirectionsProblem* _directionsProblem;
	GEORPMerchantLookupCorrections* _merchantLookupCorrections;
	NSMutableArray* _photoWithMetadatas;
	GEORPPlaceProblem* _placeProblem;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _delayed;
	struct {
		unsigned has_delayed : 1;
		unsigned read_comments : 1;
		unsigned read_correctedCoordinate : 1;
		unsigned read_correctedFields : 1;
		unsigned read_correctedFlags : 1;
		unsigned read_correctedLabel : 1;
		unsigned read_correctedMapLocation : 1;
		unsigned read_correctedSearch : 1;
		unsigned read_directionsProblem : 1;
		unsigned read_merchantLookupCorrections : 1;
		unsigned read_photoWithMetadatas : 1;
		unsigned read_placeProblem : 1;
		unsigned wrote_comments : 1;
		unsigned wrote_correctedCoordinate : 1;
		unsigned wrote_correctedFields : 1;
		unsigned wrote_correctedFlags : 1;
		unsigned wrote_correctedLabel : 1;
		unsigned wrote_correctedMapLocation : 1;
		unsigned wrote_correctedSearch : 1;
		unsigned wrote_directionsProblem : 1;
		unsigned wrote_merchantLookupCorrections : 1;
		unsigned wrote_photoWithMetadatas : 1;
		unsigned wrote_placeProblem : 1;
		unsigned wrote_delayed : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * correctedFields; 
@property (nonatomic,readonly) BOOL hasCorrectedLabel; 
@property (nonatomic,retain) GEORPCorrectedLabel * correctedLabel; 
@property (nonatomic,readonly) BOOL hasCorrectedCoordinate; 
@property (nonatomic,retain) GEORPCorrectedCoordinate * correctedCoordinate; 
@property (nonatomic,readonly) BOOL hasCorrectedSearch; 
@property (nonatomic,retain) GEORPCorrectedSearch * correctedSearch; 
@property (nonatomic,readonly) BOOL hasCorrectedMapLocation; 
@property (nonatomic,retain) GEORPMapLocation * correctedMapLocation; 
@property (nonatomic,readonly) BOOL hasComments; 
@property (nonatomic,retain) NSString * comments; 
@property (nonatomic,readonly) BOOL hasPlaceProblem; 
@property (nonatomic,retain) GEORPPlaceProblem * placeProblem; 
@property (nonatomic,readonly) BOOL hasDirectionsProblem; 
@property (nonatomic,retain) GEORPDirectionsProblem * directionsProblem; 
@property (nonatomic,retain) NSMutableArray * photoWithMetadatas; 
@property (assign,nonatomic) BOOL hasDelayed; 
@property (assign,nonatomic) BOOL delayed; 
@property (nonatomic,retain) NSMutableArray * correctedFlags; 
@property (nonatomic,readonly) BOOL hasMerchantLookupCorrections; 
@property (nonatomic,retain) GEORPMerchantLookupCorrections * merchantLookupCorrections; 
+(BOOL)isValid:(id)arg1 ;
+(Class)correctedFieldType;
+(Class)photoWithMetadataType;
+(Class)correctedFlagType;
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
-(void)readAll:(BOOL)arg1 ;
-(void)_readCorrectedFields;
-(void)_addNoFlagsCorrectedField:(id)arg1 ;
-(void)_readCorrectedLabel;
-(void)_readCorrectedCoordinate;
-(void)_readCorrectedSearch;
-(void)_readCorrectedMapLocation;
-(void)_readComments;
-(void)_readPlaceProblem;
-(void)_readDirectionsProblem;
-(void)_readPhotoWithMetadatas;
-(void)_addNoFlagsPhotoWithMetadata:(id)arg1 ;
-(void)_readCorrectedFlags;
-(void)_addNoFlagsCorrectedFlag:(id)arg1 ;
-(void)_readMerchantLookupCorrections;
-(GEORPCorrectedLabel *)correctedLabel;
-(GEORPCorrectedCoordinate *)correctedCoordinate;
-(GEORPCorrectedSearch *)correctedSearch;
-(GEORPMapLocation *)correctedMapLocation;
-(NSString *)comments;
-(GEORPPlaceProblem *)placeProblem;
-(GEORPDirectionsProblem *)directionsProblem;
-(GEORPMerchantLookupCorrections *)merchantLookupCorrections;
-(unsigned long long)correctedFieldsCount;
-(void)clearCorrectedFields;
-(id)correctedFieldAtIndex:(unsigned long long)arg1 ;
-(void)addCorrectedField:(id)arg1 ;
-(void)setCorrectedLabel:(GEORPCorrectedLabel *)arg1 ;
-(void)setCorrectedCoordinate:(GEORPCorrectedCoordinate *)arg1 ;
-(void)setCorrectedSearch:(GEORPCorrectedSearch *)arg1 ;
-(void)setCorrectedMapLocation:(GEORPMapLocation *)arg1 ;
-(void)setComments:(NSString *)arg1 ;
-(void)setPlaceProblem:(GEORPPlaceProblem *)arg1 ;
-(void)setDirectionsProblem:(GEORPDirectionsProblem *)arg1 ;
-(unsigned long long)photoWithMetadatasCount;
-(void)clearPhotoWithMetadatas;
-(id)photoWithMetadataAtIndex:(unsigned long long)arg1 ;
-(void)addPhotoWithMetadata:(id)arg1 ;
-(unsigned long long)correctedFlagsCount;
-(void)clearCorrectedFlags;
-(id)correctedFlagAtIndex:(unsigned long long)arg1 ;
-(void)addCorrectedFlag:(id)arg1 ;
-(void)setMerchantLookupCorrections:(GEORPMerchantLookupCorrections *)arg1 ;
-(NSMutableArray *)correctedFields;
-(void)setCorrectedFields:(NSMutableArray *)arg1 ;
-(BOOL)hasCorrectedLabel;
-(BOOL)hasCorrectedCoordinate;
-(BOOL)hasCorrectedSearch;
-(BOOL)hasCorrectedMapLocation;
-(BOOL)hasComments;
-(BOOL)hasPlaceProblem;
-(BOOL)hasDirectionsProblem;
-(NSMutableArray *)photoWithMetadatas;
-(void)setPhotoWithMetadatas:(NSMutableArray *)arg1 ;
-(BOOL)delayed;
-(void)setDelayed:(BOOL)arg1 ;
-(void)setHasDelayed:(BOOL)arg1 ;
-(BOOL)hasDelayed;
-(NSMutableArray *)correctedFlags;
-(void)setCorrectedFlags:(NSMutableArray *)arg1 ;
-(BOOL)hasMerchantLookupCorrections;
@end

