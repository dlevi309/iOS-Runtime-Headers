/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	struct {
		unsigned has_dataSet : 1;
		unsigned read_unknownFields : 1;
		unsigned read_addressCorrectionInitURL : 1;
		unsigned read_addressCorrectionUpdateURL : 1;
		unsigned read_announcementsURL : 1;
		unsigned read_batchReverseGeocoderURL : 1;
		unsigned read_businessPortalBaseURL : 1;
		unsigned read_directionsURL : 1;
		unsigned read_dispatcherURL : 1;
		unsigned read_etaURL : 1;
		unsigned read_logMessageUsageURL : 1;
		unsigned read_problemCategoriesURL : 1;
		unsigned read_problemOptInURL : 1;
		unsigned read_problemStatusURL : 1;
		unsigned read_problemSubmissionURL : 1;
		unsigned read_simpleETAURL : 1;
		unsigned read_spatialLookupURL : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_addressCorrectionInitURL : 1;
		unsigned wrote_addressCorrectionUpdateURL : 1;
		unsigned wrote_announcementsURL : 1;
		unsigned wrote_batchReverseGeocoderURL : 1;
		unsigned wrote_businessPortalBaseURL : 1;
		unsigned wrote_directionsURL : 1;
		unsigned wrote_dispatcherURL : 1;
		unsigned wrote_etaURL : 1;
		unsigned wrote_logMessageUsageURL : 1;
		unsigned wrote_problemCategoriesURL : 1;
		unsigned wrote_problemOptInURL : 1;
		unsigned wrote_problemStatusURL : 1;
		unsigned wrote_problemSubmissionURL : 1;
		unsigned wrote_simpleETAURL : 1;
		unsigned wrote_spatialLookupURL : 1;
		unsigned wrote_dataSet : 1;
	}  _flags;

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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned)dataSet;
-(void)setDataSet:(unsigned)arg1 ;
-(void)setHasDataSet:(BOOL)arg1 ;
-(BOOL)hasDataSet;
-(void)_readDirectionsURL;
-(void)_readEtaURL;
-(void)_readBatchReverseGeocoderURL;
-(void)_readSimpleETAURL;
-(void)_readAddressCorrectionInitURL;
-(void)_readAddressCorrectionUpdateURL;
-(void)_readProblemSubmissionURL;
-(void)_readProblemStatusURL;
-(void)_readProblemCategoriesURL;
-(void)_readAnnouncementsURL;
-(void)_readDispatcherURL;
-(void)_readProblemOptInURL;
-(void)_readBusinessPortalBaseURL;
-(void)_readLogMessageUsageURL;
-(void)_readSpatialLookupURL;
-(NSString *)directionsURL;
-(NSString *)etaURL;
-(NSString *)batchReverseGeocoderURL;
-(NSString *)simpleETAURL;
-(NSString *)addressCorrectionInitURL;
-(NSString *)addressCorrectionUpdateURL;
-(NSString *)problemSubmissionURL;
-(NSString *)problemStatusURL;
-(NSString *)problemCategoriesURL;
-(NSString *)announcementsURL;
-(NSString *)dispatcherURL;
-(NSString *)problemOptInURL;
-(NSString *)businessPortalBaseURL;
-(NSString *)logMessageUsageURL;
-(NSString *)spatialLookupURL;
-(void)setDirectionsURL:(NSString *)arg1 ;
-(void)setEtaURL:(NSString *)arg1 ;
-(void)setBatchReverseGeocoderURL:(NSString *)arg1 ;
-(void)setSimpleETAURL:(NSString *)arg1 ;
-(void)setAddressCorrectionInitURL:(NSString *)arg1 ;
-(void)setAddressCorrectionUpdateURL:(NSString *)arg1 ;
-(void)setProblemSubmissionURL:(NSString *)arg1 ;
-(void)setProblemStatusURL:(NSString *)arg1 ;
-(void)setProblemCategoriesURL:(NSString *)arg1 ;
-(void)setAnnouncementsURL:(NSString *)arg1 ;
-(void)setDispatcherURL:(NSString *)arg1 ;
-(void)setProblemOptInURL:(NSString *)arg1 ;
-(void)setBusinessPortalBaseURL:(NSString *)arg1 ;
-(void)setLogMessageUsageURL:(NSString *)arg1 ;
-(void)setSpatialLookupURL:(NSString *)arg1 ;
-(BOOL)hasDirectionsURL;
-(BOOL)hasEtaURL;
-(BOOL)hasBatchReverseGeocoderURL;
-(BOOL)hasSimpleETAURL;
-(BOOL)hasAddressCorrectionInitURL;
-(BOOL)hasAddressCorrectionUpdateURL;
-(BOOL)hasProblemSubmissionURL;
-(BOOL)hasProblemStatusURL;
-(BOOL)hasProblemCategoriesURL;
-(BOOL)hasAnnouncementsURL;
-(BOOL)hasDispatcherURL;
-(BOOL)hasProblemOptInURL;
-(BOOL)hasBusinessPortalBaseURL;
-(BOOL)hasLogMessageUsageURL;
-(BOOL)hasSpatialLookupURL;
@end

