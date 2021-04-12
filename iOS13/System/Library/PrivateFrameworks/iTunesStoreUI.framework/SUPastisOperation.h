/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStore/ISOperation.h>

@class NSURL, AVAssetResourceLoadingRequest;

@interface SUPastisOperation : ISOperation {

	NSURL* _certificateUrl;
	NSURL* _keyUrl;
	AVAssetResourceLoadingRequest* _loadingRequest;

}

@property (nonatomic,retain) AVAssetResourceLoadingRequest * loadingRequest;              //@synthesize loadingRequest=_loadingRequest - In the implementation block
@property (nonatomic,retain) NSURL * keyURL;                                              //@synthesize keyUrl=_keyUrl - In the implementation block
@property (nonatomic,retain) NSURL * certificateURL;                                      //@synthesize certificateUrl=_certificateUrl - In the implementation block
-(void)dealloc;
-(void)run;
-(NSURL *)certificateURL;
-(void)setCertificateURL:(NSURL *)arg1 ;
-(id)_getURIWithError:(id*)arg1 ;
-(id)_getAppCertWithError:(id*)arg1 ;
-(id)_getCKCForSPC:(id)arg1 URI:(id)arg2 error:(id*)arg3 ;
-(NSURL *)keyURL;
-(void)setKeyURL:(NSURL *)arg1 ;
-(AVAssetResourceLoadingRequest *)loadingRequest;
-(void)setLoadingRequest:(AVAssetResourceLoadingRequest *)arg1 ;
@end

