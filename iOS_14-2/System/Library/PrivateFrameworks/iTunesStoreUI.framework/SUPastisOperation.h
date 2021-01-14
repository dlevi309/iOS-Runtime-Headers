/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)run;
-(NSURL *)keyURL;
-(NSURL *)certificateURL;
-(void)setCertificateURL:(NSURL *)arg1 ;
-(void)dealloc;
-(id)_getURIWithError:(id*)arg1 ;
-(id)_getAppCertWithError:(id*)arg1 ;
-(id)_getCKCForSPC:(id)arg1 URI:(id)arg2 error:(id*)arg3 ;
-(void)setKeyURL:(NSURL *)arg1 ;
-(AVAssetResourceLoadingRequest *)loadingRequest;
-(void)setLoadingRequest:(AVAssetResourceLoadingRequest *)arg1 ;
@end

