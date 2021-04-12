/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<SKArcadeSubscribeViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKArcadeSubscribeViewControllerDelegate>)arg1 ;
-(void)finish;
-(NSString *)bundleID;
-(NSNumber *)itemID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(SKStoreRemoteViewController *)remoteViewController;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)setExtensionRequestIdentifier:(id<NSCopying>)arg1 ;
-(NSExtension *)extension;
-(id<NSCopying>)extensionRequestIdentifier;
-(void)setRemoteViewController:(SKStoreRemoteViewController *)arg1 ;
-(void)_loadOcelotUpsellExtension;
-(void)_setupRemoteChildViewController;
-(void)storeRemoteViewControllerNeedsTabSelection:(id)arg1 ;
-(void)storeRemoteViewController:(id)arg1 presentRequestedViewControllerWithIdentifier:(id)arg2 ;
-(void)storeRemoteViewControllerDidDismiss;
-(void)storeRemoteViewControllerTerminatedWithError:(id)arg1 ;
-(id)initWithItemID:(id)arg1 bundleID:(id)arg2 ;
-(void)finishExtension;
@end

