/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PUEditPluginHostViewControllerDataSource.h>
#import <libobjc.A.dylib/PUEditPluginHostViewControllerDelegate.h>
#import <libobjc.A.dylib/PUEditExtensionActivityViewControllerDelegate.h>

@protocol PUEditPluginSessionDataSource, PUEditPluginSessionDelegate, PUEditableAsset;
@class PUEditPluginManager, UINavigationController, PUEditPlugin, UIViewController, NSString;

@interface PUEditPluginSession : NSObject <PUEditPluginHostViewControllerDataSource, PUEditPluginHostViewControllerDelegate, PUEditExtensionActivityViewControllerDelegate> {

	PUEditPluginManager* _pluginManager;
	UINavigationController* _pluginNavigationController;
	BOOL _isAvailable;
	id<PUEditPluginSessionDataSource> _dataSource;
	id<PUEditPluginSessionDelegate> _delegate;
	id<PUEditableAsset> _asset;
	long long _adjustmentType;
	PUEditPlugin* _currentPlugin;
	UIViewController* __hostViewController;

}

@property (assign,setter=_setIsAvailable:,nonatomic) BOOL isAvailable;                                                  //@synthesize isAvailable=_isAvailable - In the implementation block
@property (setter=_setCurrentPlugin:,nonatomic,retain) PUEditPlugin * currentPlugin;                                    //@synthesize currentPlugin=_currentPlugin - In the implementation block
@property (assign,setter=_setAdjustmentType:,nonatomic) long long adjustmentType;                                       //@synthesize adjustmentType=_adjustmentType - In the implementation block
@property (setter=_setAsset:,nonatomic,retain) id<PUEditableAsset> asset;                                               //@synthesize asset=_asset - In the implementation block
@property (assign,setter=_setHostViewController:,nonatomic,__weak) UIViewController * _hostViewController;              //@synthesize _hostViewController=__hostViewController - In the implementation block
@property (assign,nonatomic,__weak) id<PUEditPluginSessionDataSource> dataSource;                                       //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<PUEditPluginSessionDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateAvailability;
-(BOOL)isAvailable;
-(id)init;
-(id<PUEditPluginSessionDelegate>)delegate;
-(id<PUEditableAsset>)asset;
-(id<PUEditPluginSessionDataSource>)dataSource;
-(void)setDelegate:(id<PUEditPluginSessionDelegate>)arg1 ;
-(void)setDataSource:(id<PUEditPluginSessionDataSource>)arg1 ;
-(void)editPluginHostViewController:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)editPluginHostViewController:(id)arg1 didFinishWithCompletionType:(unsigned long long)arg2 ;
-(void)editPluginHostViewController:(id)arg1 loadItemProviderWithHandler:(/*^block*/id)arg2 ;
-(void)editExtensionActivityViewController:(id)arg1 didSelectActivity:(id)arg2 ;
-(void)updatePluginManager;
-(unsigned long long)pluginManagerMediaType;
-(void)loadItemProviderWithSupportedAdjustmentData:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
-(void)dismissSession;
-(void)_pluginManagerPluginsDidChange:(id)arg1 ;
-(void)_setIsAvailable:(BOOL)arg1 ;
-(void)_unlockScreenIfNeededWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)beginMarkupSessionWithAsset:(id)arg1 fromViewController:(id)arg2 ;
-(void)_beginMarkupSessionWithAsset:(id)arg1 fromViewController:(id)arg2 ;
-(id)_linkPresentationImage;
-(void)beginSessionWithAsset:(id)arg1 fromViewController:(id)arg2 sourceElement:(id)arg3 ;
-(void)_beginSessionWithAsset:(id)arg1 fromViewController:(id)arg2 sourceElement:(id)arg3 ;
-(id)_localizedEditorListTitle;
-(void)shouldLaunchPlugin:(id)arg1 completion:(/*^block*/id)arg2 ;
-(PUEditPlugin *)currentPlugin;
-(void)presentAlertController:(id)arg1 ;
-(void)_launchPlugin:(id)arg1 afterDismissingViewController:(id)arg2 ;
-(void)_setAdjustmentType:(long long)arg1 ;
-(void)_setCurrentPlugin:(id)arg1 ;
-(UIViewController *)_hostViewController;
-(void)_setAsset:(id)arg1 ;
-(long long)adjustmentType;
-(void)_setHostViewController:(id)arg1 ;
-(void)dealloc;
@end

