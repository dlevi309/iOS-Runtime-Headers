/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEORPDebugSettings, NSData, NSMutableArray, GEORPUserCredentials, GEOLocation;

@interface GEORPProblemCollectionRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	NSString* _countryCode;
	GEORPDebugSettings* _debugSettings;
	NSData* _devicePushToken;
	NSString* _hwMachine;
	NSString* _inputLanguage;
	NSString* _osRelease;
	NSMutableArray* _requestElements;
	GEORPUserCredentials* _userCredentials;
	NSString* _userEmail;
	GEOLocation* _userLocation;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_countryCode : 1;
		unsigned read_debugSettings : 1;
		unsigned read_devicePushToken : 1;
		unsigned read_hwMachine : 1;
		unsigned read_inputLanguage : 1;
		unsigned read_osRelease : 1;
		unsigned read_requestElements : 1;
		unsigned read_userCredentials : 1;
		unsigned read_userEmail : 1;
		unsigned read_userLocation : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * requestElements; 
@property (nonatomic,readonly) BOOL hasHwMachine; 
@property (nonatomic,retain) NSString * hwMachine; 
@property (nonatomic,readonly) BOOL hasOsRelease; 
@property (nonatomic,retain) NSString * osRelease; 
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode; 
@property (nonatomic,readonly) BOOL hasInputLanguage; 
@property (nonatomic,retain) NSString * inputLanguage; 
@property (nonatomic,readonly) BOOL hasUserCredentials; 
@property (nonatomic,retain) GEORPUserCredentials * userCredentials; 
@property (nonatomic,readonly) BOOL hasDevicePushToken; 
@property (nonatomic,retain) NSData * devicePushToken; 
@property (nonatomic,readonly) BOOL hasUserEmail; 
@property (nonatomic,retain) NSString * userEmail; 
@property (nonatomic,readonly) BOOL hasUserLocation; 
@property (nonatomic,retain) GEOLocation * userLocation; 
@property (nonatomic,readonly) BOOL hasDebugSettings; 
@property (nonatomic,retain) GEORPDebugSettings * debugSettings; 
+(Class)requestElementType;
+(BOOL)isValid:(id)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(NSString *)countryCode;
-(void)setInputLanguage:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasCountryCode;
-(NSString *)osRelease;
-(void)setOsRelease:(NSString *)arg1 ;
-(unsigned)requestTypeCode;
-(void)addRequestElement:(id)arg1 ;
-(id)requestElementAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasOsRelease;
-(BOOL)hasInputLanguage;
-(void)setDevicePushToken:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)devicePushToken;
-(BOOL)hasDevicePushToken;
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
-(id)description;
-(void)setUserLocation:(GEOLocation *)arg1 ;
-(unsigned long long)hash;
-(NSString *)hwMachine;
-(NSString *)userEmail;
-(void)setHwMachine:(NSString *)arg1 ;
-(NSMutableArray *)requestElements;
-(BOOL)hasHwMachine;
-(unsigned long long)requestElementsCount;
-(void)clearRequestElements;
-(void)setRequestElements:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(GEOLocation *)userLocation;
-(BOOL)hasUserLocation;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

