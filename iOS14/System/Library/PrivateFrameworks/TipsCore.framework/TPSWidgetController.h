/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/


@protocol TPSWidgetControllerDelegate, OS_dispatch_queue;
@class TPSTip, NSOperationQueue, NSObject, NSMutableDictionary;

@interface TPSWidgetController : NSObject {

	TPSTip* _preferredTip;
	id<TPSWidgetControllerDelegate> _delegate;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSMutableDictionary* _assetURLSessionMap;

}

@property (nonatomic,retain) NSOperationQueue * operationQueue;                            //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                       //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetURLSessionMap;                     //@synthesize assetURLSessionMap=_assetURLSessionMap - In the implementation block
@property (assign,nonatomic,__weak) id<TPSWidgetControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) TPSTip * preferredTip; 
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(NSOperationQueue *)operationQueue;
-(id)init;
-(id<TPSWidgetControllerDelegate>)delegate;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)fetchWidgetAssetsForTip:(id)arg1 preferCacheIfAvailable:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<TPSWidgetControllerDelegate>)arg1 ;
-(void)setPreferredTip:(TPSTip *)arg1 ;
-(TPSTip *)preferredTip;
-(id)cacheFileURLForAssets:(id)arg1 language:(id)arg2 mode:(long long)arg3 ;
-(void)fetchAssetForAssets:(id)arg1 language:(id)arg2 mode:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)widgetAssetsForTip:(id)arg1 preferCacheIfAvailable:(BOOL)arg2 userInterface:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)assetsConfigurationForAssets:(id)arg1 language:(id)arg2 userInterface:(long long)arg3 ;
-(void)updateWidgetTipWithTipsMap:(id)arg1 tipsDeliveryInfoMap:(id)arg2 deliveryInfoMap:(id)arg3 preferHardwareWelcome:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setAssetURLSessionMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)assetURLSessionMap;
-(void)dealloc;
@end

