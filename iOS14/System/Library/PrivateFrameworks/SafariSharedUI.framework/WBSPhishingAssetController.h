/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/WBSMobileAssetControllerDelegate.h>
#import <libobjc.A.dylib/WBSRemotePlistControllerDelegate.h>
#import <libobjc.A.dylib/WBSPhishingAssetControllerProtocol.h>

@protocol OS_dispatch_queue, WBSMobileAssetControllerProtocol, WBSPhishingAssetControllerDelegate;
@class NSObject, WBSPhishingConfiguration, WBSRemotePlistController, NSURL, NSString;

@interface WBSPhishingAssetController : NSObject <WBSMobileAssetControllerDelegate, WBSRemotePlistControllerDelegate, WBSPhishingAssetControllerProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	id<WBSMobileAssetControllerProtocol> _assetController;
	BOOL _canUpdateConfiguration;
	WBSPhishingConfiguration* _configuration;
	WBSRemotePlistController* _configurationController;
	id<WBSPhishingAssetControllerDelegate> _delegate;
	NSURL* _assetURL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<WBSPhishingAssetControllerDelegate> delegate; 
+(id)mobileAssetType;
-(id)init;
-(id<WBSPhishingAssetControllerDelegate>)delegate;
-(void)didDownloadPlistForRemotePlistController:(id)arg1 ;
-(void)setDelegate:(id<WBSPhishingAssetControllerDelegate>)arg1 ;
-(void)mobileAssetController:(id)arg1 didBecomeAvailable:(id)arg2 ;
-(id)initWithMobileAssetController:(id)arg1 canUpdateConfiguration:(BOOL)arg2 ;
-(BOOL)_sendAssetToDelegateIfPossible:(id)arg1 ;
-(BOOL)_sendAssetToDelegateIfPossible;
-(id)_createConfigurationControllerWithDefaultConfigurationURL:(id)arg1 updateConfiguration:(id)arg2 defaultsKey:(id)arg3 ;
-(void)_configurationWasUpdated:(id)arg1 ;
-(void)mobileAssetController:(id)arg1 didDownload:(id)arg2 ;
-(void)mobileAssetController:(id)arg1 didFailDownload:(id)arg2 ;
-(void)mobileAssetController:(id)arg1 didFailCatalogDownload:(id)arg2 ;
-(void)mobileAssetController:(id)arg1 didFailRetrieve:(id)arg2 ;
@end

