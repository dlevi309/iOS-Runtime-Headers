/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPDAnalyticMetadata, GEORPClientCapabilities, GEOPDClientMetadata, NSData, NSString, GEORPProblem, GEORPUserCredentials;

@interface GEORPProblemRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	GEOPDAnalyticMetadata* _analyticMetadata;
	GEORPClientCapabilities* _clientCapabilities;
	GEOPDClientMetadata* _clientMetadata;
	NSData* _devicePushToken;
	NSString* _inputLanguage;
	NSString* _problemUuid;
	GEORPProblem* _problem;
	GEORPUserCredentials* _userCredentials;
	NSString* _userEmail;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _debugUserType;
	struct {
		unsigned has_debugUserType : 1;
		unsigned read_analyticMetadata : 1;
		unsigned read_clientCapabilities : 1;
		unsigned read_clientMetadata : 1;
		unsigned read_devicePushToken : 1;
		unsigned read_inputLanguage : 1;
		unsigned read_problemUuid : 1;
		unsigned read_problem : 1;
		unsigned read_userCredentials : 1;
		unsigned read_userEmail : 1;
		unsigned wrote_analyticMetadata : 1;
		unsigned wrote_clientCapabilities : 1;
		unsigned wrote_clientMetadata : 1;
		unsigned wrote_devicePushToken : 1;
		unsigned wrote_inputLanguage : 1;
		unsigned wrote_problemUuid : 1;
		unsigned wrote_problem : 1;
		unsigned wrote_userCredentials : 1;
		unsigned wrote_userEmail : 1;
		unsigned wrote_debugUserType : 1;
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
@property (assign,nonatomic) BOOL hasDebugUserType; 
@property (assign,nonatomic) int debugUserType; 
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
-(GEORPUserCredentials *)userCredentials;
-(void)setUserCredentials:(GEORPUserCredentials *)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)readAll:(BOOL)arg1 ;
-(GEOPDClientMetadata *)clientMetadata;
-(void)_readClientCapabilities;
-(GEORPClientCapabilities *)clientCapabilities;
-(void)setClientCapabilities:(GEORPClientCapabilities *)arg1 ;
-(BOOL)hasClientCapabilities;
-(void)_readAnalyticMetadata;
-(void)_readClientMetadata;
-(GEOPDAnalyticMetadata *)analyticMetadata;
-(BOOL)hasClientMetadata;
-(void)setClientMetadata:(GEOPDClientMetadata *)arg1 ;
-(void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg1 ;
-(BOOL)hasAnalyticMetadata;
-(void)_readInputLanguage;
-(NSString *)inputLanguage;
-(void)setInputLanguage:(NSString *)arg1 ;
-(BOOL)hasInputLanguage;
-(id)initWithProblem:(id)arg1 userCredentials:(id)arg2 pushToken:(id)arg3 allowContactBackAtEmailAddress:(id)arg4 traits:(id)arg5 ;
-(void)_readUserCredentials;
-(void)_readDevicePushToken;
-(void)_readUserEmail;
-(NSData *)devicePushToken;
-(NSString *)userEmail;
-(void)setDevicePushToken:(NSData *)arg1 ;
-(void)setUserEmail:(NSString *)arg1 ;
-(BOOL)hasUserCredentials;
-(BOOL)hasDevicePushToken;
-(BOOL)hasUserEmail;
-(void)_readProblem;
-(void)_readProblemUuid;
-(GEORPProblem *)problem;
-(NSString *)problemUuid;
-(void)setProblem:(GEORPProblem *)arg1 ;
-(void)setProblemUuid:(NSString *)arg1 ;
-(BOOL)hasProblem;
-(BOOL)hasProblemUuid;
-(int)debugUserType;
-(void)setDebugUserType:(int)arg1 ;
-(void)setHasDebugUserType:(BOOL)arg1 ;
-(BOOL)hasDebugUserType;
-(id)debugUserTypeAsString:(int)arg1 ;
-(int)StringAsDebugUserType:(id)arg1 ;
@end

