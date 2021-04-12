/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPDAnalyticMetadata, GEORPClientCapabilities, GEOPDClientMetadata, GEORPDebugSettings, NSData, NSString, GEORPProblem, GEORPUserCredentials;

@interface GEORPProblemRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	GEOPDAnalyticMetadata* _analyticMetadata;
	GEORPClientCapabilities* _clientCapabilities;
	GEOPDClientMetadata* _clientMetadata;
	GEORPDebugSettings* _debugSettings;
	NSData* _devicePushToken;
	NSString* _inputLanguage;
	NSString* _problemUuid;
	GEORPProblem* _problem;
	GEORPUserCredentials* _userCredentials;
	NSString* _userEmail;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_analyticMetadata : 1;
		unsigned read_clientCapabilities : 1;
		unsigned read_clientMetadata : 1;
		unsigned read_debugSettings : 1;
		unsigned read_devicePushToken : 1;
		unsigned read_inputLanguage : 1;
		unsigned read_problemUuid : 1;
		unsigned read_problem : 1;
		unsigned read_userCredentials : 1;
		unsigned read_userEmail : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasProblem; 
@property (nonatomic,retain) GEORPProblem * problem; 
@property (nonatomic,readonly) BOOL hasUserCredentials; 
@property (nonatomic,retain) GEORPUserCredentials * userCredentials; 
@property (nonatomic,readonly) BOOL hasAnalyticMetadata; 
@property (nonatomic,retain) GEOPDAnalyticMetadata * analyticMetadata; 
@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) GEOPDClientMetadata * clientMetadata; 
@property (nonatomic,readonly) BOOL hasDevicePushToken; 
@property (nonatomic,retain) NSData * devicePushToken; 
@property (nonatomic,readonly) BOOL hasUserEmail; 
@property (nonatomic,retain) NSString * userEmail; 
@property (nonatomic,readonly) BOOL hasInputLanguage; 
@property (nonatomic,retain) NSString * inputLanguage; 
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEORPClientCapabilities * clientCapabilities; 
@property (nonatomic,readonly) BOOL hasProblemUuid; 
@property (nonatomic,retain) NSString * problemUuid; 
@property (nonatomic,readonly) BOOL hasDebugSettings; 
@property (nonatomic,retain) GEORPDebugSettings * debugSettings; 
+(BOOL)isValid:(id)arg1 ;
-(void)setClientCapabilities:(GEORPClientCapabilities *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasProblem;
-(GEORPClientCapabilities *)clientCapabilities;
-(Class)responseClass;
-(void)setInputLanguage:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(BOOL)hasClientMetadata;
-(id)jsonRepresentation;
-(unsigned)requestTypeCode;
-(BOOL)hasInputLanguage;
-(void)setDevicePushToken:(NSData *)arg1 ;
-(NSString *)problemUuid;
-(void)setProblem:(GEORPProblem *)arg1 ;
-(void)setProblemUuid:(NSString *)arg1 ;
-(BOOL)hasProblemUuid;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)devicePushToken;
-(BOOL)hasAnalyticMetadata;
-(BOOL)hasDevicePushToken;
-(GEORPProblem *)problem;
-(GEORPDebugSettings *)debugSettings;
-(void)setDebugSettings:(GEORPDebugSettings *)arg1 ;
-(BOOL)hasDebugSettings;
-(id)initWithData:(id)arg1 ;
-(GEORPUserCredentials *)userCredentials;
-(void)setUserCredentials:(GEORPUserCredentials *)arg1 ;
-(void)setUserEmail:(NSString *)arg1 ;
-(BOOL)hasUserCredentials;
-(BOOL)hasUserEmail;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)inputLanguage;
-(void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg1 ;
-(id)description;
-(void)setClientMetadata:(GEOPDClientMetadata *)arg1 ;
-(BOOL)hasClientCapabilities;
-(unsigned long long)hash;
-(NSString *)userEmail;
-(GEOPDClientMetadata *)clientMetadata;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(GEOPDAnalyticMetadata *)analyticMetadata;
@end

