/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSMutableDictionary, ICStoreRequestContext, NSString, NSData, NSArray, NSNumber, NSDictionary;

@interface ICMediaAVAssetDownloadOptions : NSObject {

	NSMutableDictionary* _httpHeaderFields;
	ICStoreRequestContext* _requestContext;
	BOOL _canUseCellularData;
	BOOL _allowDownloadOnConstrainedNetworks;
	NSString* _clientIdentifier;
	NSString* _secondaryClientIdentifier;
	long long _priority;
	NSData* _purchaseBundleMD5;
	NSArray* _purchaseBundleSinfs;
	NSNumber* _DSID;
	NSString* _redownloadParameters;
	NSNumber* _songID;
	NSString* _contentType;
	NSString* _userAgent;
	NSString* _mediaKind;

}

@property (nonatomic,copy) NSString * clientIdentifier;                            //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * secondaryClientIdentifier;                   //@synthesize secondaryClientIdentifier=_secondaryClientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * httpHeaderFields;               //@synthesize httpHeaderFields=_httpHeaderFields - In the implementation block
@property (assign,nonatomic) long long priority;                                   //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) NSData * purchaseBundleMD5;                             //@synthesize purchaseBundleMD5=_purchaseBundleMD5 - In the implementation block
@property (nonatomic,copy) NSArray * purchaseBundleSinfs;                          //@synthesize purchaseBundleSinfs=_purchaseBundleSinfs - In the implementation block
@property (nonatomic,copy) NSNumber * DSID;                                        //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSString * redownloadParameters;                        //@synthesize redownloadParameters=_redownloadParameters - In the implementation block
@property (nonatomic,copy) NSNumber * songID;                                      //@synthesize songID=_songID - In the implementation block
@property (nonatomic,copy) NSString * contentType;                                 //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy) NSString * userAgent;                                   //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,copy) NSString * mediaKind;                                   //@synthesize mediaKind=_mediaKind - In the implementation block
@property (assign,nonatomic) BOOL canUseCellularData;                              //@synthesize canUseCellularData=_canUseCellularData - In the implementation block
@property (assign,nonatomic) BOOL allowDownloadOnConstrainedNetworks;              //@synthesize allowDownloadOnConstrainedNetworks=_allowDownloadOnConstrainedNetworks - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * optionsDictionary; 
+(id)_avDownloadOptionsWithRequestContent:(id)arg1 properties:(id)arg2 mediaResponseItem:(id)arg3 ;
+(id)_mediaKindFromResponseItemMetadata:(id)arg1 ;
+(void)getMediaAVAssetDownloadOptionsWithRequestContext:(id)arg1 redownloadResponse:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)getMediaAVAssetDownloadOptionsWithRequestContext:(id)arg1 storeMediaResponseItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(NSDictionary *)optionsDictionary;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(void)setDSID:(NSNumber *)arg1 ;
-(NSNumber *)DSID;
-(NSString *)mediaKind;
-(void)setMediaKind:(NSString *)arg1 ;
-(NSString *)redownloadParameters;
-(void)setRedownloadParameters:(NSString *)arg1 ;
-(BOOL)allowDownloadOnConstrainedNetworks;
-(void)setPurchaseBundleMD5:(NSData *)arg1 ;
-(void)setPurchaseBundleSinfs:(NSArray *)arg1 ;
-(void)setSongID:(NSNumber *)arg1 ;
-(NSDictionary *)httpHeaderFields;
-(NSString *)secondaryClientIdentifier;
-(void)setSecondaryClientIdentifier:(NSString *)arg1 ;
-(NSData *)purchaseBundleMD5;
-(NSArray *)purchaseBundleSinfs;
-(NSNumber *)songID;
-(BOOL)canUseCellularData;
-(void)setCanUseCellularData:(BOOL)arg1 ;
-(void)setAllowDownloadOnConstrainedNetworks:(BOOL)arg1 ;
@end

