/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@class NSURL, NSString, NSDate, NSData, NSDictionary, NSArray, NSNumber, NSMutableDictionary, NSError, AVContentKeyRequest, TVPContentKeySession;

@interface TVPContentKeyRequest : NSObject {

	BOOL _isRenewal;
	BOOL _isLowValueKey;
	BOOL _allowManualRenewal;
	BOOL _wantsOfflineKeysIfPossible;
	NSURL* _keyIdentifier;
	unsigned long long _requestID;
	NSString* _eventReportingID;
	long long _type;
	NSDate* _requestStartDate;
	NSDate* _requestEndDate;
	NSData* _keyRequestData;
	NSDictionary* _additionalRequestParams;
	NSDate* _serverRequestStartDate;
	NSArray* _keyFormatVersions;
	NSData* _offlineKeyData;
	NSData* _secureInvalidationNonceData;
	id _context;
	NSData* _keyResponseData;
	NSDate* _renewalDate;
	NSNumber* _renewalInterval;
	NSDate* _expirationDate;
	NSDate* _availabilityEndDate;
	NSString* _contentID;
	NSNumber* _playbackDuration;
	NSDictionary* _additionalRequestParamsFromResponse;
	NSMutableDictionary* _userInfo;
	NSError* _error;
	AVContentKeyRequest* _avContentKeyRequest;
	TVPContentKeySession* _contentKeySession;

}

@property (assign,nonatomic) long long offlineKeyRenewalPolicy; 
@property (nonatomic,retain) NSURL * keyIdentifier;                                           //@synthesize keyIdentifier=_keyIdentifier - In the implementation block
@property (nonatomic,readonly) AVContentKeyRequest * avContentKeyRequest;                     //@synthesize avContentKeyRequest=_avContentKeyRequest - In the implementation block
@property (assign,nonatomic,__weak) TVPContentKeySession * contentKeySession;                 //@synthesize contentKeySession=_contentKeySession - In the implementation block
@property (assign,nonatomic) BOOL wantsOfflineKeysIfPossible;                                 //@synthesize wantsOfflineKeysIfPossible=_wantsOfflineKeysIfPossible - In the implementation block
@property (assign,nonatomic) BOOL isRenewal;                                                  //@synthesize isRenewal=_isRenewal - In the implementation block
@property (assign,nonatomic) long long type;                                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long requestID;                                  //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) NSString * eventReportingID;                                   //@synthesize eventReportingID=_eventReportingID - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled; 
@property (nonatomic,retain) NSDate * requestStartDate;                                       //@synthesize requestStartDate=_requestStartDate - In the implementation block
@property (nonatomic,retain) NSDate * requestEndDate;                                         //@synthesize requestEndDate=_requestEndDate - In the implementation block
@property (nonatomic,retain) NSData * keyRequestData;                                         //@synthesize keyRequestData=_keyRequestData - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalRequestParams;                          //@synthesize additionalRequestParams=_additionalRequestParams - In the implementation block
@property (nonatomic,retain) NSDate * serverRequestStartDate;                                 //@synthesize serverRequestStartDate=_serverRequestStartDate - In the implementation block
@property (nonatomic,retain) NSArray * keyFormatVersions;                                     //@synthesize keyFormatVersions=_keyFormatVersions - In the implementation block
@property (nonatomic,retain) NSData * offlineKeyData;                                         //@synthesize offlineKeyData=_offlineKeyData - In the implementation block
@property (nonatomic,retain) NSData * secureInvalidationNonceData;                            //@synthesize secureInvalidationNonceData=_secureInvalidationNonceData - In the implementation block
@property (nonatomic,retain) id context;                                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSData * keyResponseData;                                        //@synthesize keyResponseData=_keyResponseData - In the implementation block
@property (nonatomic,retain) NSDate * renewalDate;                                            //@synthesize renewalDate=_renewalDate - In the implementation block
@property (nonatomic,retain) NSNumber * renewalInterval;                                      //@synthesize renewalInterval=_renewalInterval - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                                         //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSDate * availabilityEndDate;                                    //@synthesize availabilityEndDate=_availabilityEndDate - In the implementation block
@property (nonatomic,retain) NSString * contentID;                                            //@synthesize contentID=_contentID - In the implementation block
@property (assign,nonatomic) BOOL isLowValueKey;                                              //@synthesize isLowValueKey=_isLowValueKey - In the implementation block
@property (nonatomic,retain) NSNumber * playbackDuration;                                     //@synthesize playbackDuration=_playbackDuration - In the implementation block
@property (assign,nonatomic) BOOL allowManualRenewal;                                         //@synthesize allowManualRenewal=_allowManualRenewal - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalRequestParamsFromResponse;              //@synthesize additionalRequestParamsFromResponse=_additionalRequestParamsFromResponse - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * userInfo;                                //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSError * error;                                                 //@synthesize error=_error - In the implementation block
+(void)initialize;
+(id)secureInvalidationRequestForIdentifier:(id)arg1 offlineKeyData:(id)arg2 additionalRequestParams:(id)arg3 contentID:(id)arg4 ;
-(void)setOfflineKeyRenewalPolicy:(long long)arg1 ;
-(long long)offlineKeyRenewalPolicy;
-(NSNumber *)playbackDuration;
-(void)finish;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSMutableDictionary *)userInfo;
-(NSDate *)requestEndDate;
-(NSDate *)requestStartDate;
-(void)setType:(long long)arg1 ;
-(id)context;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(unsigned long long)requestID;
-(NSString *)contentID;
-(void)setContentID:(NSString *)arg1 ;
-(id)description;
-(NSDate *)renewalDate;
-(void)setRenewalDate:(NSDate *)arg1 ;
-(void)setKeyIdentifier:(NSURL *)arg1 ;
-(NSDate *)expirationDate;
-(NSArray *)keyFormatVersions;
-(long long)type;
-(TVPContentKeySession *)contentKeySession;
-(NSURL *)keyIdentifier;
-(BOOL)isCancelled;
-(void)setPlaybackDuration:(NSNumber *)arg1 ;
-(void)setContext:(id)arg1 ;
-(NSString *)eventReportingID;
-(void)setRequestStartDate:(NSDate *)arg1 ;
-(NSData *)offlineKeyData;
-(NSDictionary *)additionalRequestParams;
-(NSData *)secureInvalidationNonceData;
-(NSData *)keyRequestData;
-(void)setSecureInvalidationNonceData:(NSData *)arg1 ;
-(void)setContentKeySession:(TVPContentKeySession *)arg1 ;
-(void)setKeyRequestData:(NSData *)arg1 ;
-(void)makeKeyRequestDataForCertificateData:(id)arg1 assetIDData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setServerRequestStartDate:(NSDate *)arg1 ;
-(void)setIsLowValueKey:(BOOL)arg1 ;
-(void)setAllowManualRenewal:(BOOL)arg1 ;
-(void)setAdditionalRequestParamsFromResponse:(NSDictionary *)arg1 ;
-(NSDate *)serverRequestStartDate;
-(void)setRenewalInterval:(NSNumber *)arg1 ;
-(void)setAvailabilityEndDate:(NSDate *)arg1 ;
-(void)setRequestEndDate:(NSDate *)arg1 ;
-(id)offlineKeyDataFromServerKeyData:(id)arg1 error:(id*)arg2 ;
-(void)setKeyResponseData:(NSData *)arg1 ;
-(BOOL)isRenewal;
-(NSDate *)availabilityEndDate;
-(void)finishByRequestingOfflineKeysIfPossible;
-(void)setAdditionalRequestParams:(NSDictionary *)arg1 ;
-(NSData *)keyResponseData;
-(NSNumber *)renewalInterval;
-(BOOL)isLowValueKey;
-(BOOL)allowManualRenewal;
-(NSDictionary *)additionalRequestParamsFromResponse;
-(void)setOfflineKeyData:(NSData *)arg1 ;
-(id)initWithAVContentKeyRequest:(id)arg1 ;
-(AVContentKeyRequest *)avContentKeyRequest;
-(void)setWantsOfflineKeysIfPossible:(BOOL)arg1 ;
-(void)setIsRenewal:(BOOL)arg1 ;
-(void)setKeyFormatVersions:(NSArray *)arg1 ;
-(BOOL)wantsOfflineKeysIfPossible;
@end
