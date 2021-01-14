/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/WBSPhishingAssetControllerDelegate.h>
#import <libobjc.A.dylib/WBSPhishingClassifier.h>

@protocol OS_dispatch_queue, WBSPhishingURLClassifier, WBSPhishingAssetControllerProtocol, WBSPhishingImageClassifierModelProtocol, WBSPhishingClassifierControllerDelegate;
@class NSObject, WBSPhishingURLClassifierCache, WBSPhishingURLClassifierConfigurationOverrideAdapter, WBSPhishingConfiguration;

@interface WBSPhishingClassifierController : NSObject <WBSPhishingAssetControllerDelegate, WBSPhishingClassifier> {

	NSObject*<OS_dispatch_queue> _queue;
	WBSPhishingURLClassifierCache* _cache;
	WBSPhishingURLClassifierConfigurationOverrideAdapter* _configurationAdapter;
	id<WBSPhishingURLClassifier> _root;
	id<WBSPhishingAssetControllerProtocol> _assetController;
	id<WBSPhishingImageClassifierModelProtocol> _model;
	WBSPhishingConfiguration* _configuration;
	id<WBSPhishingClassifierControllerDelegate> _delegate;

}

@property (__weak) id<WBSPhishingClassifierControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isDisabled;
-(id<WBSPhishingClassifierControllerDelegate>)delegate;
-(void)setDelegate:(id<WBSPhishingClassifierControllerDelegate>)arg1 ;
-(void)classifyURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)phishingAssetController:(id)arg1 didFailModelInitialization:(id)arg2 ;
-(void)phishingAssetController:(id)arg1 didLoadImageClassifierModel:(id)arg2 configuration:(id)arg3 ;
-(void)phishingAssetController:(id)arg1 didFailDownload:(id)arg2 ;
-(void)phishingAssetController:(id)arg1 didFailCatalogDownload:(id)arg2 ;
-(void)phishingAssetController:(id)arg1 didFailLoad:(id)arg2 ;
-(id)initWithAssetController:(id)arg1 history:(id)arg2 crowdsourcedFeedbackAllowList:(id)arg3 ;
-(void)classifyURL:(id)arg1 image:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)classifyURL:(id)arg1 webView:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)takeSnapshotForWebView:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setClassification:(unsigned long long)arg1 forURL:(id)arg2 ;
-(id)initWithHistory:(id)arg1 crowdsourcedFeedbackAllowList:(id)arg2 ;
@end

