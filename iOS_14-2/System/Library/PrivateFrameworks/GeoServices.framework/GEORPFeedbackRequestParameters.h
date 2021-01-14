/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPFeedbackIdLookupParameters, GEORPFeedbackImageUploadParameters, GEORPFeedbackLayoutConfigParameters, GEORPFeedbackQueryParameters, GEORPFeedbackSubmissionParameters;

@interface GEORPFeedbackRequestParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPFeedbackIdLookupParameters* _idLookupParameters;
	GEORPFeedbackImageUploadParameters* _imageUploadParameters;
	GEORPFeedbackLayoutConfigParameters* _layoutConfigParameters;
	GEORPFeedbackQueryParameters* _queryParameters;
	GEORPFeedbackSubmissionParameters* _submissionParameters;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_idLookupParameters : 1;
		unsigned read_imageUploadParameters : 1;
		unsigned read_layoutConfigParameters : 1;
		unsigned read_queryParameters : 1;
		unsigned read_submissionParameters : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSubmissionParameters; 
@property (nonatomic,retain) GEORPFeedbackSubmissionParameters * submissionParameters; 
@property (nonatomic,readonly) BOOL hasIdLookupParameters; 
@property (nonatomic,retain) GEORPFeedbackIdLookupParameters * idLookupParameters; 
@property (nonatomic,readonly) BOOL hasQueryParameters; 
@property (nonatomic,retain) GEORPFeedbackQueryParameters * queryParameters; 
@property (nonatomic,readonly) BOOL hasImageUploadParameters; 
@property (nonatomic,retain) GEORPFeedbackImageUploadParameters * imageUploadParameters; 
@property (nonatomic,readonly) BOOL hasLayoutConfigParameters; 
@property (nonatomic,retain) GEORPFeedbackLayoutConfigParameters * layoutConfigParameters; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)initWithMerchantIndustryCode:(long long)arg1 mapsIdentifier:(unsigned long long)arg2 merchantName:(id)arg3 merchantRawName:(id)arg4 merchantIndustryCategory:(id)arg5 merchantURL:(id)arg6 merchantFormattedAddress:(id)arg7 transactionTime:(double)arg8 transactionType:(id)arg9 transactionLocation:(GEOCoarseLocationLatLng)arg10 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(GEORPFeedbackIdLookupParameters *)idLookupParameters;
-(GEORPFeedbackSubmissionParameters *)submissionParameters;
-(BOOL)hasQueryParameters;
-(GEORPFeedbackImageUploadParameters *)imageUploadParameters;
-(GEORPFeedbackLayoutConfigParameters *)layoutConfigParameters;
-(void)setSubmissionParameters:(GEORPFeedbackSubmissionParameters *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setIdLookupParameters:(GEORPFeedbackIdLookupParameters *)arg1 ;
-(void)setQueryParameters:(GEORPFeedbackQueryParameters *)arg1 ;
-(void)setImageUploadParameters:(GEORPFeedbackImageUploadParameters *)arg1 ;
-(void)setLayoutConfigParameters:(GEORPFeedbackLayoutConfigParameters *)arg1 ;
-(BOOL)hasSubmissionParameters;
-(BOOL)hasIdLookupParameters;
-(BOOL)hasImageUploadParameters;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isPOIEnrichment;
-(BOOL)hasLayoutConfigParameters;
-(id)description;
-(unsigned long long)hash;
-(GEORPFeedbackQueryParameters *)queryParameters;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithIncidentLocation:(id)arg1 type:(int)arg2 historicalLocations:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

