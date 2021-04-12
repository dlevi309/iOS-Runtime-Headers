/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
*/

#import <libobjc.A.dylib/AXAssetControllerObserver.h>

@protocol AXPhoenixAssetMonitorDelegate;
@class AXAssetController, AXPhoenixAssetPolicy, AXAsset, NSString;

@interface AXPhoenixAssetMonitor : NSObject <AXAssetControllerObserver> {

	AXAssetController* _assetController;
	AXPhoenixAssetPolicy* _assetPolicy;
	AXAsset* _latestAsset;
	id<AXPhoenixAssetMonitorDelegate> _delegate;

}

@property (nonatomic,retain) AXAssetController * assetController;                            //@synthesize assetController=_assetController - In the implementation block
@property (nonatomic,retain) AXPhoenixAssetPolicy * assetPolicy;                             //@synthesize assetPolicy=_assetPolicy - In the implementation block
@property (nonatomic,retain) AXAsset * latestAsset;                                          //@synthesize latestAsset=_latestAsset - In the implementation block
@property (assign,nonatomic,__weak) id<AXPhoenixAssetMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AXPhoenixAssetMonitorDelegate>)delegate;
-(void)setDelegate:(id<AXPhoenixAssetMonitorDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(AXPhoenixAssetPolicy *)assetPolicy;
-(void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4 ;
-(void)assetController:(id)arg1 didFinishDownloadingAsset:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4 hasRemainingDownloads:(BOOL)arg5 ;
-(AXAssetController *)assetController;
-(void)setAssetController:(AXAssetController *)arg1 ;
-(void)setAssetPolicy:(AXPhoenixAssetPolicy *)arg1 ;
-(void)setLatestAsset:(AXAsset *)arg1 ;
-(void)assetDidUpdate;
-(AXAsset *)latestAsset;
@end

