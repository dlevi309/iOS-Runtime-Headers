/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_abClientMetadata : 1;
		unsigned wrote_analyticMetadata : 1;
		unsigned wrote_clientCapabilities : 1;
		unsigned wrote_clientMetadata : 1;
		unsigned wrote_debugSettings : 1;
		unsigned wrote_displayLanguages : 1;
		unsigned wrote_feedbackRequestParameters : 1;
		unsigned wrote_userInfo : 1;
		unsigned wrote_feedbackRequestType : 1;
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
+(BOOL)isValid:(id)arg1 ;
+(Class)displayLanguageType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEORPFeedbackUserInfo *)userInfo;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setUserInfo:(GEORPFeedbackUserInfo *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSMutableArray *)displayLanguages;
-(GEOPDClientMetadata *)clientMetadata;
-(GEORPFeedbackRequestParameters *)feedbackRequestParameters;
-(void)_readClientCapabilities;
-(void)_readAbClientMetadata;
-(GEORPClientCapabilities *)clientCapabilities;
-(GEOABSecondPartyPlaceRequestClientMetaData *)abClientMetadata;
-(void)setClientCapabilities:(GEORPClientCapabilities *)arg1 ;
-(void)setAbClientMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(BOOL)hasClientCapabilities;
-(BOOL)hasAbClientMetadata;
-(void)_readAnalyticMetadata;
-(void)_readClientMetadata;
-(void)_readDisplayLanguages;
-(void)_addNoFlagsDisplayLanguage:(id)arg1 ;
-(GEOPDAnalyticMetadata *)analyticMetadata;
-(BOOL)hasClientMetadata;
-(void)setClientMetadata:(GEOPDClientMetadata *)arg1 ;
-(void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg1 ;
-(unsigned long long)displayLanguagesCount;
-(void)clearDisplayLanguages;
-(id)displayLanguageAtIndex:(unsigned long long)arg1 ;
-(void)addDisplayLanguage:(id)arg1 ;
-(BOOL)hasAnalyticMetadata;
-(void)setDisplayLanguages:(NSMutableArray *)arg1 ;
-(id)initWithFeedbackRequestParameters:(id)arg1 userCredentials:(id)arg2 pushToken:(id)arg3 allowContactBackAtEmailAddress:(id)arg4 traits:(id)arg5 ;
-(void)_readFeedbackRequestParameters;
-(void)_readUserInfo;
-(void)_readDebugSettings;
-(GEORPDebugSettings *)debugSettings;
-(void)setFeedbackRequestParameters:(GEORPFeedbackRequestParameters *)arg1 ;
-(void)setDebugSettings:(GEORPDebugSettings *)arg1 ;
-(int)feedbackRequestType;
-(void)setFeedbackRequestType:(int)arg1 ;
-(void)setHasFeedbackRequestType:(BOOL)arg1 ;
-(BOOL)hasFeedbackRequestType;
-(id)feedbackRequestTypeAsString:(int)arg1 ;
-(int)StringAsFeedbackRequestType:(id)arg1 ;
-(BOOL)hasFeedbackRequestParameters;
-(BOOL)hasUserInfo;
-(BOOL)hasDebugSettings;
-(void)_initForSubmissionParameters;
-(void)setPreferredEmailAddress:(id)arg1 ;
@end

