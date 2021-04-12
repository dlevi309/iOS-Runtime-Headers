/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPFetcher.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class AVURLAsset, NSString, NSURLSession, NSMutableData, NSURL;

@interface LPMediaAssetFetcher : LPFetcher <NSURLSessionDataDelegate> {

	/*^block*/id _completionHandler;
	AVURLAsset* _asset;
	BOOL _hasAudio;
	NSString* _MIMEType;
	NSURLSession* _session;
	NSMutableData* _receivedData;
	NSURL* _URL;

}

@property (nonatomic,retain) NSURL * URL;                           //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_resolveVideo;
-(void)_completedWithVideo:(id)arg1 ;
-(id)videoProperties;
-(id)audioProperties;
-(void)_completedWithAudio:(id)arg1 ;
-(void)fetchWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

