/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOAbAssignInfo, NSString, GEOLocalTime, NSMutableArray;

@interface GEOPDAnalyticMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOSessionID _sessionId;
	GEOAbAssignInfo* _abAssignInfo;
	NSString* _appIdentifier;
	NSString* _appMajorVersion;
	NSString* _appMinorVersion;
	NSString* _hardwareModel;
	NSString* _loggedAbExperiment;
	NSString* _osVersion;
	NSString* _productName;
	double _relativeTimestamp;
	GEOLocalTime* _requestTime;
	NSMutableArray* _serviceTags;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _requestSource;
	unsigned _sequenceNumber;
	BOOL _isFromApi;
	BOOL _isInternalInstall;
	BOOL _isInternalTool;
	BOOL _isSiriOriginalRequest;
	struct {
		unsigned has_sessionId : 1;
		unsigned has_relativeTimestamp : 1;
		unsigned has_requestSource : 1;
		unsigned has_sequenceNumber : 1;
		unsigned has_isFromApi : 1;
		unsigned has_isInternalInstall : 1;
		unsigned has_isInternalTool : 1;
		unsigned has_isSiriOriginalRequest : 1;
		unsigned read_unknownFields : 1;
		unsigned read_abAssignInfo : 1;
		unsigned read_appIdentifier : 1;
		unsigned read_appMajorVersion : 1;
		unsigned read_appMinorVersion : 1;
		unsigned read_hardwareModel : 1;
		unsigned read_loggedAbExperiment : 1;
		unsigned read_osVersion : 1;
		unsigned read_productName : 1;
		unsigned read_requestTime : 1;
		unsigned read_serviceTags : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,retain) NSString * appIdentifier; 
@property (nonatomic,readonly) BOOL hasAppMajorVersion; 
@property (nonatomic,retain) NSString * appMajorVersion; 
@property (nonatomic,readonly) BOOL hasAppMinorVersion; 
@property (nonatomic,retain) NSString * appMinorVersion; 
@property (nonatomic,readonly) BOOL hasHardwareModel; 
@property (nonatomic,retain) NSString * hardwareModel; 
@property (nonatomic,readonly) BOOL hasOsVersion; 
@property (nonatomic,retain) NSString * osVersion; 
@property (assign,nonatomic) BOOL hasIsInternalTool; 
@property (assign,nonatomic) BOOL isInternalTool; 
@property (assign,nonatomic) BOOL hasIsInternalInstall; 
@property (assign,nonatomic) BOOL isInternalInstall; 
@property (assign,nonatomic) BOOL hasSessionId; 
@property (assign,nonatomic) GEOSessionID sessionId; 
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber; 
@property (assign,nonatomic) BOOL hasRequestSource; 
@property (assign,nonatomic) int requestSource; 
@property (assign,nonatomic) BOOL hasIsFromApi; 
@property (assign,nonatomic) BOOL isFromApi; 
@property (nonatomic,retain) NSMutableArray * serviceTags; 
@property (nonatomic,readonly) BOOL hasProductName; 
@property (nonatomic,retain) NSString * productName; 
@property (nonatomic,readonly) BOOL hasLoggedAbExperiment; 
@property (nonatomic,retain) NSString * loggedAbExperiment; 
@property (nonatomic,readonly) BOOL hasAbAssignInfo; 
@property (nonatomic,retain) GEOAbAssignInfo * abAssignInfo; 
@property (nonatomic,readonly) BOOL hasRequestTime; 
@property (nonatomic,retain) GEOLocalTime * requestTime; 
@property (assign,nonatomic) BOOL hasRelativeTimestamp; 
@property (assign,nonatomic) double relativeTimestamp; 
@property (assign,nonatomic) BOOL hasIsSiriOriginalRequest; 
@property (assign,nonatomic) BOOL isSiriOriginalRequest; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)serviceTagType;
-(GEOAbAssignInfo *)abAssignInfo;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(GEOSessionID)sessionId;
-(BOOL)hasAppIdentifier;
-(void)setSessionId:(GEOSessionID)arg1 ;
-(void)setAbAssignInfo:(GEOAbAssignInfo *)arg1 ;
-(BOOL)hasAppMajorVersion;
-(void)setLoggedAbExperiment:(NSString *)arg1 ;
-(void)setIsInternalInstall:(BOOL)arg1 ;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(void)setRelativeTimestamp:(double)arg1 ;
-(void)setHasIsSiriOriginalRequest:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasSessionId;
-(BOOL)hasOsVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appMajorVersion;
-(BOOL)hasProductName;
-(BOOL)hasRelativeTimestamp;
-(NSString *)appMinorVersion;
-(PBUnknownFields *)unknownFields;
-(double)relativeTimestamp;
-(NSString *)productName;
-(BOOL)hasAbAssignInfo;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setAppMinorVersion:(NSString *)arg1 ;
-(BOOL)hasAppMinorVersion;
-(void)setAppMajorVersion:(NSString *)arg1 ;
-(NSMutableArray *)serviceTags;
-(unsigned long long)serviceTagsCount;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(NSString *)appIdentifier;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setProductName:(NSString *)arg1 ;
-(void)setHasIsInternalTool:(BOOL)arg1 ;
-(void)setIsInternalTool:(BOOL)arg1 ;
-(void)setHasRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasIsInternalTool;
-(NSString *)osVersion;
-(unsigned)sequenceNumber;
-(void)setIsFromApi:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIsSiriOriginalRequest;
-(BOOL)hasHardwareModel;
-(void)setHasRequestSource:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasIsInternalInstall;
-(BOOL)hasLoggedAbExperiment;
-(id)description;
-(id)requestSourceAsString:(int)arg1 ;
-(GEOLocalTime *)requestTime;
-(void)clearServiceTags;
-(NSString *)hardwareModel;
-(void)setIsSiriOriginalRequest:(BOOL)arg1 ;
-(void)setHasIsFromApi:(BOOL)arg1 ;
-(int)requestSource;
-(BOOL)hasIsFromApi;
-(unsigned long long)hash;
-(BOOL)isInternalInstall;
-(BOOL)isFromApi;
-(void)setHasIsInternalInstall:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setRequestSource:(int)arg1 ;
-(BOOL)hasRequestSource;
-(BOOL)isInternalTool;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasSessionId:(BOOL)arg1 ;
-(void)setHardwareModel:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isSiriOriginalRequest;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(id)initWithTraits:(id)arg1 ;
-(void)setRequestTime:(GEOLocalTime *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasRequestTime;
-(BOOL)isEqual:(id)arg1 ;
-(int)StringAsRequestSource:(id)arg1 ;
-(BOOL)hasSequenceNumber;
-(void)addServiceTag:(id)arg1 ;
-(NSString *)loggedAbExperiment;
@end

