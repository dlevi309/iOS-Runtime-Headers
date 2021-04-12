/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSData, NSString, GEORPUserCredentials;

@interface GEORPProblemOptInRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	NSData* _devicePushToken;
	NSString* _problemId;
	GEORPUserCredentials* _userCredentials;
	NSString* _userEmail;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _didOptIn;
	struct {
		unsigned has_didOptIn : 1;
		unsigned read_devicePushToken : 1;
		unsigned read_problemId : 1;
		unsigned read_userCredentials : 1;
		unsigned read_userEmail : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasProblemId; 
@property (nonatomic,retain) NSString * problemId; 
@property (assign,nonatomic) BOOL hasDidOptIn; 
@property (assign,nonatomic) BOOL didOptIn; 
@property (nonatomic,readonly) BOOL hasUserCredentials; 
@property (nonatomic,retain) GEORPUserCredentials * userCredentials; 
@property (nonatomic,readonly) BOOL hasDevicePushToken; 
@property (nonatomic,retain) NSData * devicePushToken; 
@property (nonatomic,readonly) BOOL hasUserEmail; 
@property (nonatomic,retain) NSString * userEmail; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)problemId;
-(BOOL)didOptIn;
-(unsigned)requestTypeCode;
-(void)setProblemId:(NSString *)arg1 ;
-(BOOL)hasProblemId;
-(void)setDevicePushToken:(NSData *)arg1 ;
-(void)setDidOptIn:(BOOL)arg1 ;
-(void)setHasDidOptIn:(BOOL)arg1 ;
-(BOOL)hasDidOptIn;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)devicePushToken;
-(BOOL)hasDevicePushToken;
-(id)initWithData:(id)arg1 ;
-(GEORPUserCredentials *)userCredentials;
-(void)setUserCredentials:(GEORPUserCredentials *)arg1 ;
-(void)setUserEmail:(NSString *)arg1 ;
-(BOOL)hasUserCredentials;
-(BOOL)hasUserEmail;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSString *)userEmail;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithSubmissionID:(id)arg1 allowContactBackAtEmailAddress:(id)arg2 traits:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

