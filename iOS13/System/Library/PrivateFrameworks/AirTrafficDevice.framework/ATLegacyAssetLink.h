/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <libobjc.A.dylib/ATMessageLinkObserver.h>
#import <libobjc.A.dylib/ATAssetLink.h>

@protocol ATAssetLinkDelegate, OS_dispatch_queue, ATLegacyAssetLinkProgressDelegate;
@class NSMutableSet, NSMutableDictionary, ATLegacyMessageLink, NSMutableArray, NSObject, NSString, NSArray;

@interface ATLegacyAssetLink : NSObject <ATMessageLinkObserver, ATAssetLink> {

	NSMutableSet* _unqueuedAssets;
	NSMutableDictionary* _enqueuedAssetsByDataClass;
	ATLegacyMessageLink* _messageLink;
	NSMutableDictionary* _syncIDToItemPidMap;
	BOOL _open;
	id<ATAssetLinkDelegate> _delegate;
	NSMutableArray* _readyDataClasses;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _hostVersion;
	NSArray* _supportedDataClasses;
	id<ATLegacyAssetLinkProgressDelegate> _progressDelegate;

}

@property (nonatomic,copy) NSArray * supportedDataClasses;                                               //@synthesize supportedDataClasses=_supportedDataClasses - In the implementation block
@property (nonatomic,copy) NSArray * readyDataClasses; 
@property (assign,nonatomic,__weak) id<ATLegacyAssetLinkProgressDelegate> progressDelegate;              //@synthesize progressDelegate=_progressDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isOpen,nonatomic,readonly) BOOL open;                                                  //@synthesize open=_open - In the implementation block
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
-(BOOL)open;
-(void)close;
-(id<ATAssetLinkDelegate>)delegate;
-(void)setDelegate:(id<ATAssetLinkDelegate>)arg1 ;
-(unsigned long long)priority;
-(BOOL)isOpen;
-(unsigned long long)maximumBatchSize;
-(void)messageLinkWasClosed:(id)arg1 ;
-(id<ATLegacyAssetLinkProgressDelegate>)progressDelegate;
-(void)setProgressDelegate:(id<ATLegacyAssetLinkProgressDelegate>)arg1 ;
-(id)enqueueAssets:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)canEnqueueAsset:(id)arg1 ;
-(void)cancelAssets:(id)arg1 ;
-(void)prioritizeAsset:(id)arg1 ;
-(BOOL)linkIsReady;
-(void)_handleFileCompleteMessage:(id)arg1 ;
-(void)_handleFileErrorMessage:(id)arg1 ;
-(void)_handleFileProgressMessage:(id)arg1 ;
-(void)_enqueueAndRequestAssets;
-(NSArray *)supportedDataClasses;
-(void)_finishAsset:(id)arg1 withError:(id)arg2 ;
-(id)_assetsForDataClass:(id)arg1 identifier:(id)arg2 ;
-(id)_manifestEntryForATAsset:(id)arg1 ;
-(id)_assetManifestForDataclasses:(id)arg1 ;
-(id)initWithMessageLink:(id)arg1 hostVersion:(id)arg2 ;
-(void)setReadyDataClasses:(NSArray *)arg1 ;
-(NSArray *)readyDataClasses;
-(void)setSupportedDataClasses:(NSArray *)arg1 ;
@end

