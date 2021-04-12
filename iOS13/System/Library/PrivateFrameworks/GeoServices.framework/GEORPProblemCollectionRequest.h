/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSData, NSMutableArray, GEORPUserCredentials, GEOLocation;

@interface GEORPProblemCollectionRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	NSString* _countryCode;
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
	SCD_Struct_GE92 _flags;

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
+(BOOL)isValid:(id)arg1 ;
+(Class)requestElementType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)countryCode;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEORPUserCredentials *)userCredentials;
-(void)setUserCredentials:(GEORPUserCredentials *)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readUserLocation;
-(GEOLocation *)userLocation;
-(void)setUserLocation:(GEOLocation *)arg1 ;
-(BOOL)hasUserLocation;
-(unsigned long long)requestElementsCount;
-(void)clearRequestElements;
-(NSMutableArray *)requestElements;
-(void)setRequestElements:(NSMutableArray *)arg1 ;
-(BOOL)hasCountryCode;
-(void)_readInputLanguage;
-(NSString *)inputLanguage;
-(void)setInputLanguage:(NSString *)arg1 ;
-(BOOL)hasInputLanguage;
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
-(void)_readCountryCode;
-(void)_readHwMachine;
-(NSString *)hwMachine;
-(void)setHwMachine:(NSString *)arg1 ;
-(BOOL)hasHwMachine;
-(void)_readRequestElements;
-(void)_addNoFlagsRequestElement:(id)arg1 ;
-(void)_readOsRelease;
-(NSString *)osRelease;
-(id)requestElementAtIndex:(unsigned long long)arg1 ;
-(void)addRequestElement:(id)arg1 ;
-(void)setOsRelease:(NSString *)arg1 ;
-(BOOL)hasOsRelease;
@end

