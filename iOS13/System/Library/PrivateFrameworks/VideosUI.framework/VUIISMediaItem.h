/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVPlayback/TVPBaseMediaItem.h>
#import <libobjc.A.dylib/TVPContentKeyLoading.h>

@class NSURL, NSDictionary, NSString, NSData, NSMutableArray;

@interface VUIISMediaItem : TVPBaseMediaItem <TVPContentKeyLoading> {

	BOOL _disableScrubbing;
	NSURL* _url;
	NSURL* _tokenServerURL;
	NSURL* _stopServerURL;
	NSDictionary* _tokenServerParameters;
	NSString* _assetIDForStopping;
	long long _state;
	NSData* _certificateData;
	NSMutableArray* _requestsAwaitingCertFetch;
	unsigned long long _loadingContext;

}

@property (nonatomic,retain) NSURL * url;                                             //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSURL * tokenServerURL;                                  //@synthesize tokenServerURL=_tokenServerURL - In the implementation block
@property (nonatomic,retain) NSURL * stopServerURL;                                   //@synthesize stopServerURL=_stopServerURL - In the implementation block
@property (nonatomic,retain) NSDictionary * tokenServerParameters;                    //@synthesize tokenServerParameters=_tokenServerParameters - In the implementation block
@property (nonatomic,retain) NSString * assetIDForStopping;                           //@synthesize assetIDForStopping=_assetIDForStopping - In the implementation block
@property (assign,nonatomic) long long state;                                         //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSData * certificateData;                                //@synthesize certificateData=_certificateData - In the implementation block
@property (nonatomic,retain) NSMutableArray * requestsAwaitingCertFetch;              //@synthesize requestsAwaitingCertFetch=_requestsAwaitingCertFetch - In the implementation block
@property (assign,nonatomic) unsigned long long loadingContext;                       //@synthesize loadingContext=_loadingContext - In the implementation block
@property (assign,nonatomic) BOOL disableScrubbing;                                   //@synthesize disableScrubbing=_disableScrubbing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(long long)state;
-(NSURL *)url;
-(void)setState:(long long)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSData *)certificateData;
-(void)setCertificateData:(NSData *)arg1 ;
-(unsigned long long)loadingContext;
-(void)setLoadingContext:(unsigned long long)arg1 ;
-(id)mediaItemURL;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(BOOL)isEqualToMediaItem:(id)arg1 ;
-(BOOL)hasTrait:(id)arg1 ;
-(void)loadFairPlayStreamingKeyRequests:(id)arg1 ;
-(NSMutableArray *)requestsAwaitingCertFetch;
-(void)setRequestsAwaitingCertFetch:(NSMutableArray *)arg1 ;
-(void)cleanUpMediaItem;
-(void)_failKeyRequests:(id)arg1 withError:(id)arg2 ;
-(void)_generateKeyRequestDataForKeyRequests:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSURL *)tokenServerURL;
-(id)initWithURL:(id)arg1 tokenServerURL:(id)arg2 stopServerURL:(id)arg3 tokenServerParameters:(id)arg4 ;
-(BOOL)disableScrubbing;
-(void)setDisableScrubbing:(BOOL)arg1 ;
-(NSString *)assetIDForStopping;
-(void)_sendStopForAssetID:(id)arg1 ;
-(void)setAssetIDForStopping:(NSString *)arg1 ;
-(id)_assetIDForKeyRequest:(id)arg1 ;
-(id)_certificateURLForKeyRequest:(id)arg1 ;
-(void)_startKeyRequests:(id)arg1 token:(id)arg2 ;
-(void)_loadCertificateDataFromURL:(id)arg1 loadingContext:(unsigned long long)arg2 attemptNumber:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_fetchTokenForAssetID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_parseCertificateURL:(id*)arg1 keyServerURL:(id*)arg2 assetID:(id*)arg3 fromKeyRequest:(id)arg4 ;
-(BOOL)_allowedToRetryRequestForError:(id)arg1 response:(id)arg2 ;
-(double)_randomRetryDelayForFailedAttemptNumber:(unsigned long long)arg1 ;
-(void)_sendKeyRequestsToServer:(id)arg1 token:(id)arg2 ;
-(id)_assetIDDataForKeyRequest:(id)arg1 ;
-(NSDictionary *)tokenServerParameters;
-(NSURL *)stopServerURL;
-(id)_linearServiceRequestForURL:(id)arg1 assetID:(id)arg2 ;
-(id)_keyServerURLForKeyRequest:(id)arg1 ;
-(void)_sendURLRequestToServer:(id)arg1 forKeyRequest:(id)arg2 attemptNumber:(unsigned long long)arg3 ;
-(void)setTokenServerURL:(NSURL *)arg1 ;
-(void)setStopServerURL:(NSURL *)arg1 ;
-(void)setTokenServerParameters:(NSDictionary *)arg1 ;
@end

