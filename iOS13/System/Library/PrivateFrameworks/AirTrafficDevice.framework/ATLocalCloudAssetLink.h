/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <libobjc.A.dylib/ATMessageLinkObserver.h>
#import <libobjc.A.dylib/ATAssetLink.h>

@protocol OS_dispatch_queue, ATAssetLinkDelegate;
@class NSObject, ATLegacyMessageLink, NSMutableOrderedSet, NSMutableDictionary, NSString;

@interface ATLocalCloudAssetLink : NSObject <ATMessageLinkObserver, ATAssetLink> {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _queue;
	id<ATAssetLinkDelegate> _delegate;
	ATLegacyMessageLink* _messageLink;
	NSMutableOrderedSet* _queuedAssets;
	NSMutableDictionary* _activeRequests;
	BOOL _open;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isOpen,nonatomic,readonly) BOOL open;                            //@synthesize open=_open - In the implementation block
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(BOOL)open;
-(void)close;
-(id<ATAssetLinkDelegate>)delegate;
-(void)setDelegate:(id<ATAssetLinkDelegate>)arg1 ;
-(unsigned long long)priority;
-(BOOL)isOpen;
-(id)initWithMessageLink:(id)arg1 ;
-(unsigned long long)maximumBatchSize;
-(void)messageLinkWasInitialized:(id)arg1 ;
-(void)messageLinkWasClosed:(id)arg1 ;
-(id)enqueueAssets:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)canEnqueueAsset:(id)arg1 ;
-(void)cancelAssets:(id)arg1 ;
-(void)prioritizeAsset:(id)arg1 ;
-(BOOL)linkIsReady;
-(void)_finishAsset:(id)arg1 withError:(id)arg2 ;
-(void)_handleLocalCloudDownloadResponse:(id)arg1 ;
-(void)_requestNextDownload;
@end

