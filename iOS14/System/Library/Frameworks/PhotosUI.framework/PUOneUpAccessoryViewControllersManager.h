/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>
#import <libobjc.A.dylib/PXPhotosDetailsUIViewControllerDelegate.h>

@protocol PUOneUpAccessoryViewControllersManagerDelegate;
@class PUBrowsingSession, NSMapTable, NSString;

@interface PUOneUpAccessoryViewControllersManager : NSObject <PUBrowsingViewModelChangeObserver, PXPhotosDetailsUIViewControllerDelegate> {

	SCD_Struct_PU16 _delegateRepondsTo;
	PUBrowsingSession* _browsingSession;
	id<PUOneUpAccessoryViewControllersManagerDelegate> _delegate;
	/*^block*/id _unlockDeviceStatus;
	/*^block*/id _unlockDeviceHandler;
	NSMapTable* __accessoryViewControllers;

}

@property (nonatomic,readonly) NSMapTable * _accessoryViewControllers;                                        //@synthesize _accessoryViewControllers=__accessoryViewControllers - In the implementation block
@property (nonatomic,readonly) PUBrowsingSession * browsingSession;                                           //@synthesize browsingSession=_browsingSession - In the implementation block
@property (assign,nonatomic,__weak) id<PUOneUpAccessoryViewControllersManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id unlockDeviceStatus;                                                             //@synthesize unlockDeviceStatus=_unlockDeviceStatus - In the implementation block
@property (nonatomic,copy) id unlockDeviceHandler;                                                            //@synthesize unlockDeviceHandler=_unlockDeviceHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)_invalidateAccessoryViewControllersForAssetReferences:(id)arg1 ;
-(id)unlockDeviceHandler;
-(id)init;
-(id<PUOneUpAccessoryViewControllersManagerDelegate>)delegate;
-(PUBrowsingSession *)browsingSession;
-(NSMapTable *)_accessoryViewControllers;
-(long long)_accessoryViewTypeForAsset:(id)arg1 ;
-(void)setUnlockDeviceStatus:(id)arg1 ;
-(long long)accessoryViewTypeForAsset:(id)arg1 ;
-(BOOL)photosDetailsUIViewControllerRequestDismissal:(id)arg1 ;
-(void)setDelegate:(id<PUOneUpAccessoryViewControllersManagerDelegate>)arg1 ;
-(id)assetReferenceForAccessoryViewController:(id)arg1 ;
-(void)setUnlockDeviceHandler:(id)arg1 ;
-(id)_createAccessoryViewControllerForAssetReference:(id)arg1 ;
-(id)unlockDeviceStatus;
-(id)accessoryViewControllerForAssetReference:(id)arg1 ;
-(BOOL)shouldHideToolbarWhenShowingAccessoryViewControllerForAssetReference:(id)arg1 ;
-(id)accessoryViewControllerForAssetReference:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)initWithBrowsingSession:(id)arg1 ;
@end

