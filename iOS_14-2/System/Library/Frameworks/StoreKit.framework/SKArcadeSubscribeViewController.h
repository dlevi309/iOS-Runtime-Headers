/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKStoreRemoteViewControllerDelegate.h>

@protocol SKArcadeSubscribeViewControllerDelegate, NSCopying;
@class SKStoreRemoteViewController, NSString, NSNumber, NSExtension;

@interface SKArcadeSubscribeViewController : UIViewController <SKStoreRemoteViewControllerDelegate> {

	id<SKArcadeSubscribeViewControllerDelegate> _delegate;
	SKStoreRemoteViewController* _remoteViewController;
	NSString* _bundleID;
	NSNumber* _itemID;
	NSExtension* _extension;
	id<NSCopying> _extensionRequestIdentifier;

}

@property (nonatomic,retain) SKStoreRemoteViewController * remoteViewController;                       //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                                      //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSNumber * itemID;                                                        //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                                  //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) id<NSCopying> extensionRequestIdentifier;                                 //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<SKArcadeSubscribeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(void)setItemID:(NSNumber *)arg1 ;
-(void)finish;
-(SKStoreRemoteViewController *)remoteViewController;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setBundleID:(NSString *)arg1 ;
-(id<SKArcadeSubscribeViewControllerDelegate>)delegate;
-(void)setExtension:(NSExtension *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setDelegate:(id<SKArcadeSubscribeViewControllerDelegate>)arg1 ;
-(NSNumber *)itemID;
-(void)finishExtension;
-(void)setRemoteViewController:(SKStoreRemoteViewController *)arg1 ;
-(NSExtension *)extension;
-(NSString *)bundleID;
-(void)setExtensionRequestIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)extensionRequestIdentifier;
-(void)dealloc;
-(void)_loadOcelotUpsellExtension;
-(void)_setupRemoteChildViewController;
-(void)storeRemoteViewControllerNeedsTabSelection:(id)arg1 ;
-(void)storeRemoteViewController:(id)arg1 presentRequestedViewControllerWithIdentifier:(id)arg2 ;
-(void)storeRemoteViewControllerDidDismiss;
-(void)storeRemoteViewControllerTerminatedWithError:(id)arg1 ;
-(id)initWithItemID:(id)arg1 bundleID:(id)arg2 ;
@end

