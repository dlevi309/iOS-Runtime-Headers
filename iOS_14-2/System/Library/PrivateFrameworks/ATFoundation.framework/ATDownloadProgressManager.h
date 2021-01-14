/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <ATFoundation/ATDownloadProgressListener.h>
#import <ATFoundation/ATAssetLinkControllerObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCListener, NSMutableSet, NSString;

@interface ATDownloadProgressManager : NSObject <NSXPCListenerDelegate, ATDownloadProgressListener, ATAssetLinkControllerObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;
	NSMutableSet* _downloadObservers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)assetLinkController:(id)arg1 didProcessFinishedAsset:(id)arg2 ;
-(id)init;
-(void)start;
-(void)assetLinkController:(id)arg1 didEnqueueAsset:(id)arg2 ;
-(void)getAllDownloadsWithReplyBlock:(/*^block*/id)arg1 ;
-(void)stop;
-(void)prioritizeDownloadWithStoreForLibraryIdentifier:(long long)arg1 withReplyBlock:(/*^block*/id)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2 ;
-(void)assetLinkController:(id)arg1 didChangeDownloadStateForAssets:(id)arg2 ;
-(void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2 ;
@end

