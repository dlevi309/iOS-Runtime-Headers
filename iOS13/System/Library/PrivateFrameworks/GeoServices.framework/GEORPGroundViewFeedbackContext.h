/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray, GEOPDMuninViewState;

@interface GEORPGroundViewFeedbackContext : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE68* _visiblePlaceMuids;
	NSString* _imageId;
	unsigned long long _imdataId;
	NSMutableArray* _onscreenImageResources;
	GEOPDMuninViewState* _viewState;
	NSMutableArray* _visibleFeatureHandles;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _metadataTileBuildId;
	struct {
		unsigned has_imdataId : 1;
		unsigned has_metadataTileBuildId : 1;
		unsigned read_unknownFields : 1;
		unsigned read_visiblePlaceMuids : 1;
		unsigned read_imageId : 1;
		unsigned read_onscreenImageResources : 1;
		unsigned read_viewState : 1;
		unsigned read_visibleFeatureHandles : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_visiblePlaceMuids : 1;
		unsigned wrote_imageId : 1;
		unsigned wrote_imdataId : 1;
		unsigned wrote_onscreenImageResources : 1;
		unsigned wrote_viewState : 1;
		unsigned wrote_visibleFeatureHandles : 1;
		unsigned wrote_metadataTileBuildId : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasViewState; 
@property (nonatomic,retain) GEOPDMuninViewState * viewState; 
@property (assign,nonatomic) BOOL hasMetadataTileBuildId; 
@property (assign,nonatomic) unsigned metadataTileBuildId; 
@property (nonatomic,retain) NSMutableArray * onscreenImageResources; 
@property (nonatomic,readonly) unsigned long long visiblePlaceMuidsCount; 
@property (nonatomic,readonly) unsigned long long* visiblePlaceMuids; 
@property (assign,nonatomic) BOOL hasImdataId; 
@property (assign,nonatomic) unsigned long long imdataId; 
@property (nonatomic,readonly) BOOL hasImageId; 
@property (nonatomic,retain) NSString * imageId; 
@property (nonatomic,retain) NSMutableArray * visibleFeatureHandles; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)onscreenImageResourceType;
+(Class)visibleFeatureHandleType;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)imageId;
-(void)setImageId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasImdataId;
-(unsigned long long)imdataId;
-(void)_readImageId;
-(BOOL)hasImageId;
-(void)setImdataId:(unsigned long long)arg1 ;
-(void)setHasImdataId:(BOOL)arg1 ;
-(void)_readViewState;
-(void)_readOnscreenImageResources;
-(void)_addNoFlagsOnscreenImageResource:(id)arg1 ;
-(void)_readVisiblePlaceMuids;
-(void)_addNoFlagsVisiblePlaceMuid:(unsigned long long)arg1 ;
-(void)_readVisibleFeatureHandles;
-(void)_addNoFlagsVisibleFeatureHandle:(id)arg1 ;
-(GEOPDMuninViewState *)viewState;
-(void)setViewState:(GEOPDMuninViewState *)arg1 ;
-(unsigned long long)onscreenImageResourcesCount;
-(void)clearOnscreenImageResources;
-(id)onscreenImageResourceAtIndex:(unsigned long long)arg1 ;
-(void)addOnscreenImageResource:(id)arg1 ;
-(unsigned long long)visiblePlaceMuidsCount;
-(void)clearVisiblePlaceMuids;
-(unsigned long long)visiblePlaceMuidAtIndex:(unsigned long long)arg1 ;
-(void)addVisiblePlaceMuid:(unsigned long long)arg1 ;
-(unsigned long long)visibleFeatureHandlesCount;
-(void)clearVisibleFeatureHandles;
-(id)visibleFeatureHandleAtIndex:(unsigned long long)arg1 ;
-(void)addVisibleFeatureHandle:(id)arg1 ;
-(NSMutableArray *)onscreenImageResources;
-(BOOL)hasViewState;
-(unsigned)metadataTileBuildId;
-(void)setMetadataTileBuildId:(unsigned)arg1 ;
-(void)setHasMetadataTileBuildId:(BOOL)arg1 ;
-(BOOL)hasMetadataTileBuildId;
-(void)setOnscreenImageResources:(NSMutableArray *)arg1 ;
-(unsigned long long*)visiblePlaceMuids;
-(void)setVisiblePlaceMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(NSMutableArray *)visibleFeatureHandles;
-(void)setVisibleFeatureHandles:(NSMutableArray *)arg1 ;
@end

