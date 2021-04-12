/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@class NSURL, NSString, NSDate, NSData, NSDictionary, NSArray, NSNumber, NSError, AVContentKeyRequest, TVPContentKeySession;

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
	NSString* _contentID;
	NSNumber* _playbackDuration;
	NSDictionary* _additionalRequestParamsFromResponse;
	NSError* _error;
	AVContentKeyRequest* _avContentKeyRequest;
	TVPContentKeySession* _contentKeySession;

}

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
@property (nonatomic,retain) NSString * contentID;                                            //@synthesize contentID=_contentID - In the implementation block
@property (assign,nonatomic) BOOL isLowValueKey;                                              //@synthesize isLowValueKey=_isLowValueKey - In the implementation block
@property (nonatomic,retain) NSNumber * playbackDuration;                                     //@synthesize playbackDuration=_playbackDuration - In the implementation block
@property (assign,nonatomic) BOOL allowManualRenewal;                                         //@synthesize allowManualRenewal=_allowManualRenewal - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalRequestParamsFromResponse;              //@synthesize additionalRequestParamsFromResponse=_additionalRequestParamsFromResponse - In the implementation block
@property (nonatomic,retain) NSError * error;                                                 //@synthesize error=_error - In the implementation block
+(void)initialize;
+(id)secureInvalidationRequestForIdentifier:(id)arg1 offlineKeyData:(id)arg2 additionalRequestParams:(id)arg3 contentID:(id)arg4 ;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSError *)error;
-(BOOL)isCancelled;
-(void)setError:(NSError *)arg1 ;
-(id)context;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)finish;
-(void)setContext:(id)arg1 ;
-(NSDate *)requestStartDate;
-(NSDate *)requestEndDate;
-(unsigned long long)requestID;
-(TVPContentKeySession *)contentKeySession;
-(NSDate *)renewalDate;
-(void)setRenewalDate:(NSDate *)arg1 ;
-(NSURL *)keyIdentifier;
-(NSNumber *)playbackDuration;
-(void)setPlaybackDuration:(NSNumber *)arg1 ;
-(NSString *)contentID;
-(void)setContentID:(NSString *)arg1 ;
-(void)setKeyIdentifier:(NSURL *)arg1 ;
-(NSArray *)keyFormatVersions;
-(NSData *)keyRequestData;
-(BOOL)isRenewal;
-(void)setRequestStartDate:(NSDate *)arg1 ;
-(void)setRequestEndDate:(NSDate *)arg1 ;
-(void)setKeyRequestData:(NSData *)arg1 ;
-(id)initWithAVContentKeyRequest:(id)arg1 ;
-(void)setOfflineKeyData:(NSData *)arg1 ;
-(void)setAdditionalRequestParams:(NSDictionary *)arg1 ;
-(AVContentKeyRequest *)avContentKeyRequest;
-(NSData *)offlineKeyData;
-(void)setWantsOfflineKeysIfPossible:(BOOL)arg1 ;
-(void)makeKeyRequestDataForCertificateData:(id)arg1 assetIDData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)offlineKeyDataFromServerKeyData:(id)arg1 error:(id*)arg2 ;
-(void)finishByRequestingOfflineKeysIfPossible;
-(NSString *)eventReportingID;
-(void)setIsRenewal:(BOOL)arg1 ;
-(NSDictionary *)additionalRequestParams;
-(NSDate *)serverRequestStartDate;
-(void)setServerRequestStartDate:(NSDate *)arg1 ;
-(void)setKeyFormatVersions:(NSArray *)arg1 ;
-(NSData *)secureInvalidationNonceData;
-(void)setSecureInvalidationNonceData:(NSData *)arg1 ;
-(NSData *)keyResponseData;
-(void)setKeyResponseData:(NSData *)arg1 ;
-(NSNumber *)renewalInterval;
-(void)setRenewalInterval:(NSNumber *)arg1 ;
-(BOOL)isLowValueKey;
-(void)setIsLowValueKey:(BOOL)arg1 ;
-(BOOL)allowManualRenewal;
-(void)setAllowManualRenewal:(BOOL)arg1 ;
-(NSDictionary *)additionalRequestParamsFromResponse;
-(void)setAdditionalRequestParamsFromResponse:(NSDictionary *)arg1 ;
-(void)setContentKeySession:(TVPContentKeySession *)arg1 ;
-(BOOL)wantsOfflineKeysIfPossible;
@end

