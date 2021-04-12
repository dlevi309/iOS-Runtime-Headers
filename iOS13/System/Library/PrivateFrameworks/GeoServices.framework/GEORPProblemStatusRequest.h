/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOABSecondPartyPlaceRequestClientMetaData, GEOPDAnalyticMetadata, GEORPClientCapabilities, NSMutableArray, GEOServicesState, NSString, GEORPUserCredentials;

@interface GEORPProblemStatusRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	GEOABSecondPartyPlaceRequestClientMetaData* _abAssignmentMetadata;
	GEOPDAnalyticMetadata* _analyticMetadata;
	GEORPClientCapabilities* _clientCapabilities;
	NSMutableArray* _problemIds;
	GEOServicesState* _servicesState;
	NSString* _statusNotificationId;
	GEORPUserCredentials* _userCredentials;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_abAssignmentMetadata : 1;
		unsigned read_analyticMetadata : 1;
		unsigned read_clientCapabilities : 1;
		unsigned read_problemIds : 1;
		unsigned read_servicesState : 1;
		unsigned read_statusNotificationId : 1;
		unsigned read_userCredentials : 1;
		unsigned wrote_abAssignmentMetadata : 1;
		unsigned wrote_analyticMetadata : 1;
		unsigned wrote_clientCapabilities : 1;
		unsigned wrote_problemIds : 1;
		unsigned wrote_servicesState : 1;
		unsigned wrote_statusNotificationId : 1;
		unsigned wrote_userCredentials : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasUserCredentials; 
@property (nonatomic,retain) GEORPUserCredentials * userCredentials; 
@property (nonatomic,readonly) BOOL hasStatusNotificationId; 
@property (nonatomic,retain) NSString * statusNotificationId; 
@property (nonatomic,retain) NSMutableArray * problemIds; 
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEORPClientCapabilities * clientCapabilities; 
@property (nonatomic,readonly) BOOL hasAnalyticMetadata; 
@property (nonatomic,retain) GEOPDAnalyticMetadata * analyticMetadata; 
@property (nonatomic,readonly) BOOL hasAbAssignmentMetadata; 
@property (nonatomic,retain) GEOABSecondPartyPlaceRequestClientMetaData * abAssignmentMetadata; 
@property (nonatomic,readonly) BOOL hasServicesState; 
@property (nonatomic,retain) GEOServicesState * servicesState; 
+(BOOL)isValid:(id)arg1 ;
+(Class)problemIdType;
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
-(GEORPUserCredentials *)userCredentials;
-(void)setUserCredentials:(GEORPUserCredentials *)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)readAll:(BOOL)arg1 ;
-(void)_readClientCapabilities;
-(GEORPClientCapabilities *)clientCapabilities;
-(void)setClientCapabilities:(GEORPClientCapabilities *)arg1 ;
-(BOOL)hasClientCapabilities;
-(void)_readAnalyticMetadata;
-(GEOPDAnalyticMetadata *)analyticMetadata;
-(void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg1 ;
-(BOOL)hasAnalyticMetadata;
-(void)_readUserCredentials;
-(BOOL)hasUserCredentials;
-(void)_readServicesState;
-(GEOServicesState *)servicesState;
-(void)setServicesState:(GEOServicesState *)arg1 ;
-(BOOL)hasServicesState;
-(void)_readStatusNotificationId;
-(void)_readProblemIds;
-(void)_addNoFlagsProblemId:(id)arg1 ;
-(void)_readAbAssignmentMetadata;
-(NSString *)statusNotificationId;
-(NSMutableArray *)problemIds;
-(GEOABSecondPartyPlaceRequestClientMetaData *)abAssignmentMetadata;
-(void)setStatusNotificationId:(NSString *)arg1 ;
-(unsigned long long)problemIdsCount;
-(void)clearProblemIds;
-(id)problemIdAtIndex:(unsigned long long)arg1 ;
-(void)addProblemId:(id)arg1 ;
-(void)setAbAssignmentMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(BOOL)hasStatusNotificationId;
-(void)setProblemIds:(NSMutableArray *)arg1 ;
-(BOOL)hasAbAssignmentMetadata;
-(void)populateAnalyticsMetadata;
@end

