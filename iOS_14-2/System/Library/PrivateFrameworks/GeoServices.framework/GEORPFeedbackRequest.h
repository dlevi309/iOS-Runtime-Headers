/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOABSecondPartyPlaceRequestClientMetaData, GEOPDAnalyticMetadata, GEORPClientCapabilities, GEOPDClientMetadata, GEORPDebugSettings, NSMutableArray, GEORPFeedbackRequestParameters, GEORPFeedbackUserInfo;

@interface GEORPFeedbackRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOABSecondPartyPlaceRequestClientMetaData* _abClientMetadata;
	GEOPDAnalyticMetadata* _analyticMetadata;
	GEORPClientCapabilities* _clientCapabilities;
	GEOPDClientMetadata* _clientMetadata;
	GEORPDebugSettings* _debugSettings;
	NSMutableArray* _displayLanguages;
	GEORPFeedbackRequestParameters* _feedbackRequestParameters;
	GEORPFeedbackUserInfo* _userInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _feedbackRequestType;
	struct {
		unsigned has_feedbackRequestType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_abClientMetadata : 1;
		unsigned read_analyticMetadata : 1;
		unsigned read_clientCapabilities : 1;
		unsigned read_clientMetadata : 1;
		unsigned read_debugSettings : 1;
		unsigned read_displayLanguages : 1;
		unsigned read_feedbackRequestParameters : 1;
		unsigned read_userInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasFeedbackRequestType; 
@property (assign,nonatomic) int feedbackRequestType; 
@property (nonatomic,readonly) BOOL hasFeedbackRequestParameters; 
@property (nonatomic,retain) GEORPFeedbackRequestParameters * feedbackRequestParameters; 
@property (nonatomic,readonly) BOOL hasUserInfo; 
@property (nonatomic,retain) GEORPFeedbackUserInfo * userInfo; 
@property (nonatomic,readonly) BOOL hasAnalyticMetadata; 
@property (nonatomic,retain) GEOPDAnalyticMetadata * analyticMetadata; 
@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) GEOPDClientMetadata * clientMetadata; 
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEORPClientCapabilities * clientCapabilities; 
@property (nonatomic,retain) NSMutableArray * displayLanguages; 
@property (nonatomic,readonly) BOOL hasAbClientMetadata; 
@property (nonatomic,retain) GEOABSecondPartyPlaceRequestClientMetaData * abClientMetadata; 
@property (nonatomic,readonly) BOOL hasDebugSettings; 
@property (nonatomic,retain) GEORPDebugSettings * debugSettings; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)displayLanguageType;
+(BOOL)isValid:(id)arg1 ;
-(id)displayLanguageAtIndex:(unsigned long long)arg1 ;
-(void)setClientCapabilities:(GEORPClientCapabilities *)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)displayLanguages;
-(void)setUserInfo:(GEORPFeedbackUserInfo *)arg1 ;
-(void)setDisplayLanguages:(NSMutableArray *)arg1 ;
-(void)addDisplayLanguage:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearDisplayLanguages;
-(unsigned long long)displayLanguagesCount;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEORPClientCapabilities *)clientCapabilities;
-(Class)responseClass;
-(id)initWithFeedbackRequestParameters:(id)arg1 userCredentials:(id)arg2 pushToken:(id)arg3 allowContactBackAtEmailAddress:(id)arg4 traits:(id)arg5 ;
-(void)readAll:(BOOL)arg1 ;
-(GEORPFeedbackUserInfo *)userInfo;
-(id)init;
-(BOOL)hasClientMetadata;
-(id)jsonRepresentation;
-(GEOABSecondPartyPlaceRequestClientMetaData *)abClientMetadata;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasAnalyticMetadata;
-(GEORPDebugSettings *)debugSettings;
-(void)setFeedbackRequestType:(int)arg1 ;
-(void)setDebugSettings:(GEORPDebugSettings *)arg1 ;
-(void)setFeedbackRequestParameters:(GEORPFeedbackRequestParameters *)arg1 ;
-(int)feedbackRequestType;
-(void)setHasFeedbackRequestType:(BOOL)arg1 ;
-(BOOL)hasFeedbackRequestType;
-(id)feedbackRequestTypeAsString:(int)arg1 ;
-(int)StringAsFeedbackRequestType:(id)arg1 ;
-(BOOL)hasFeedbackRequestParameters;
-(BOOL)hasUserInfo;
-(BOOL)hasDebugSettings;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isPOIEnrichment;
-(GEORPFeedbackRequestParameters *)feedbackRequestParameters;
-(void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg1 ;
-(id)description;
-(void)setClientMetadata:(GEOPDClientMetadata *)arg1 ;
-(BOOL)hasClientCapabilities;
-(BOOL)hasAbClientMetadata;
-(unsigned long long)hash;
-(GEOPDClientMetadata *)clientMetadata;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)_sharedInitWithRequestParameters:(id)arg1 userInfo:(id)arg2 traits:(id)arg3 ;
-(void)_initForSubmissionParameters;
-(void)_setupSubmissionParameters;
-(id)initWithFeedbackRequestParameters:(id)arg1 traits:(id)arg2 ;
-(id)initWithFeedbackRequestParameters:(id)arg1 userInfo:(id)arg2 traits:(id)arg3 ;
-(void)setAbClientMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(GEOPDAnalyticMetadata *)analyticMetadata;
@end

