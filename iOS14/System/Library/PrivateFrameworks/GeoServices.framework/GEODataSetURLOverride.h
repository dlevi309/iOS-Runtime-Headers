/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEODataSetURLOverride : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _addressCorrectionInitURL;
	NSString* _addressCorrectionUpdateURL;
	NSString* _announcementsURL;
	NSString* _batchReverseGeocoderURL;
	NSString* _businessPortalBaseURL;
	NSString* _directionsURL;
	NSString* _dispatcherURL;
	NSString* _etaURL;
	NSString* _logMessageUsageURL;
	NSString* _problemCategoriesURL;
	NSString* _problemOptInURL;
	NSString* _problemStatusURL;
	NSString* _problemSubmissionURL;
	NSString* _simpleETAURL;
	NSString* _spatialLookupURL;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _dataSet;
	SCD_Struct_GE78 _flags;

}

@property (assign,nonatomic) BOOL hasDataSet; 
@property (assign,nonatomic) unsigned dataSet; 
@property (nonatomic,readonly) BOOL hasDirectionsURL; 
@property (nonatomic,retain) NSString * directionsURL; 
@property (nonatomic,readonly) BOOL hasEtaURL; 
@property (nonatomic,retain) NSString * etaURL; 
@property (nonatomic,readonly) BOOL hasBatchReverseGeocoderURL; 
@property (nonatomic,retain) NSString * batchReverseGeocoderURL; 
@property (nonatomic,readonly) BOOL hasSimpleETAURL; 
@property (nonatomic,retain) NSString * simpleETAURL; 
@property (nonatomic,readonly) BOOL hasAddressCorrectionInitURL; 
@property (nonatomic,retain) NSString * addressCorrectionInitURL; 
@property (nonatomic,readonly) BOOL hasAddressCorrectionUpdateURL; 
@property (nonatomic,retain) NSString * addressCorrectionUpdateURL; 
@property (nonatomic,readonly) BOOL hasProblemSubmissionURL; 
@property (nonatomic,retain) NSString * problemSubmissionURL; 
@property (nonatomic,readonly) BOOL hasProblemStatusURL; 
@property (nonatomic,retain) NSString * problemStatusURL; 
@property (nonatomic,readonly) BOOL hasProblemCategoriesURL; 
@property (nonatomic,retain) NSString * problemCategoriesURL; 
@property (nonatomic,readonly) BOOL hasAnnouncementsURL; 
@property (nonatomic,retain) NSString * announcementsURL; 
@property (nonatomic,readonly) BOOL hasDispatcherURL; 
@property (nonatomic,retain) NSString * dispatcherURL; 
@property (nonatomic,readonly) BOOL hasProblemOptInURL; 
@property (nonatomic,retain) NSString * problemOptInURL; 
@property (nonatomic,readonly) BOOL hasBusinessPortalBaseURL; 
@property (nonatomic,retain) NSString * businessPortalBaseURL; 
@property (nonatomic,readonly) BOOL hasLogMessageUsageURL; 
@property (nonatomic,retain) NSString * logMessageUsageURL; 
@property (nonatomic,readonly) BOOL hasSpatialLookupURL; 
@property (nonatomic,retain) NSString * spatialLookupURL; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasEtaURL;
-(NSString *)batchReverseGeocoderURL;
-(void)setDirectionsURL:(NSString *)arg1 ;
-(NSString *)etaURL;
-(NSString *)directionsURL;
-(BOOL)hasDirectionsURL;
-(NSString *)dispatcherURL;
-(BOOL)hasProblemOptInURL;
-(NSString *)logMessageUsageURL;
-(BOOL)hasAnnouncementsURL;
-(NSString *)problemStatusURL;
-(BOOL)hasDispatcherURL;
-(NSString *)simpleETAURL;
-(NSString *)problemOptInURL;
-(BOOL)hasSimpleETAURL;
-(void)setDispatcherURL:(NSString *)arg1 ;
-(void)setProblemStatusURL:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setAnnouncementsURL:(NSString *)arg1 ;
-(void)setLogMessageUsageURL:(NSString *)arg1 ;
-(void)setAddressCorrectionUpdateURL:(NSString *)arg1 ;
-(void)setEtaURL:(NSString *)arg1 ;
-(void)setSpatialLookupURL:(NSString *)arg1 ;
-(BOOL)hasBatchReverseGeocoderURL;
-(BOOL)hasLogMessageUsageURL;
-(BOOL)hasBusinessPortalBaseURL;
-(BOOL)hasAddressCorrectionUpdateURL;
-(void)setProblemCategoriesURL:(NSString *)arg1 ;
-(void)setBatchReverseGeocoderURL:(NSString *)arg1 ;
-(NSString *)addressCorrectionInitURL;
-(void)setBusinessPortalBaseURL:(NSString *)arg1 ;
-(NSString *)problemCategoriesURL;
-(void)setSimpleETAURL:(NSString *)arg1 ;
-(BOOL)hasSpatialLookupURL;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setProblemOptInURL:(NSString *)arg1 ;
-(BOOL)hasAddressCorrectionInitURL;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setDataSet:(unsigned)arg1 ;
-(BOOL)hasProblemCategoriesURL;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)announcementsURL;
-(NSString *)addressCorrectionUpdateURL;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSString *)businessPortalBaseURL;
-(void)setHasDataSet:(BOOL)arg1 ;
-(NSString *)problemSubmissionURL;
-(void)setProblemSubmissionURL:(NSString *)arg1 ;
-(BOOL)hasDataSet;
-(unsigned long long)hash;
-(unsigned)dataSet;
-(BOOL)hasProblemStatusURL;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAddressCorrectionInitURL:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)spatialLookupURL;
-(BOOL)hasProblemSubmissionURL;
-(BOOL)isEqual:(id)arg1 ;
@end

