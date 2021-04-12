/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>

@class VUIARAssetRequest, NSURLSession, NSString;

@interface VUIARQLPreviewManager : NSObject <QLPreviewControllerDelegate, NSURLSessionDownloadDelegate> {

	VUIARAssetRequest* _activeAssetRequest;
	NSURLSession* _session;

}

@property (nonatomic,retain) NSURLSession * session;                              //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) VUIARAssetRequest * activeAssetRequest;              //@synthesize activeAssetRequest=_activeAssetRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)init;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(void)previewWithURL:(id)arg1 shareURL:(id)arg2 ;
-(VUIARAssetRequest *)activeAssetRequest;
-(void)setActiveAssetRequest:(VUIARAssetRequest *)arg1 ;
-(void)_presentPreviewControllerWithURL:(id)arg1 shareURL:(id)arg2 fileName:(id)arg3 ;
-(id)_quickLookPreviewItemWithFileURL:(id)arg1 shareURL:(id)arg2 ;
-(id)_previewControllerWithAssetRequest:(id)arg1 ;
-(void)cancelExistingDownloadsIfAny;
@end

