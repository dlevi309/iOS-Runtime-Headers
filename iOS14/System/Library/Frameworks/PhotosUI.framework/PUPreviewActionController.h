/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PUAssetActionPerformerDelegate.h>

@protocol PUPreviewActionControllerDelegate;
@class PUBrowsingSession, UIViewController, PXActionManager, PUAssetActionPerformer, NSArray, NSString;

@interface PUPreviewActionController : NSObject <PUAssetActionPerformerDelegate> {

	SCD_Struct_PU16 _delegateRespondsTo;
	PUBrowsingSession* _browsingSession;
	UIViewController* _presentingViewController;
	id<PUPreviewActionControllerDelegate> _delegate;
	PXActionManager* _photosUICoreActionManager;
	PUAssetActionPerformer* __activeActionPerformer;

}

@property (setter=_setActiveActionPerformer:,nonatomic,retain) PUAssetActionPerformer * _activeActionPerformer;              //@synthesize _activeActionPerformer=__activeActionPerformer - In the implementation block
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,retain) PUBrowsingSession * browsingSession;                                                            //@synthesize browsingSession=_browsingSession - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                                             //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic,__weak) id<PUPreviewActionControllerDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PXActionManager * photosUICoreActionManager;                                                    //@synthesize photosUICoreActionManager=_photosUICoreActionManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)_actionForPreferredAction:(unsigned long long)arg1 ;
-(void)_notifiyDelegateOfAction:(id)arg1 ;
-(void)_performSimpleActionWithType:(unsigned long long)arg1 ;
-(void)_performFavoriteAction:(BOOL)arg1 ;
-(void)_performCopyAction;
-(void)_performRevealInMomentAction;
-(PXActionManager *)photosUICoreActionManager;
-(NSArray *)actions;
-(void)setPhotosUICoreActionManager:(PXActionManager *)arg1 ;
-(id<PUPreviewActionControllerDelegate>)delegate;
-(PUBrowsingSession *)browsingSession;
-(BOOL)assetActionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(PUAssetActionPerformer *)_activeActionPerformer;
-(void)_executeActionPerformer:(id)arg1 ;
-(UIViewController *)presentingViewController;
-(void)setDelegate:(id<PUPreviewActionControllerDelegate>)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(BOOL)assetActionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(void)_performTrashAction;
-(void)_setActiveActionPerformer:(id)arg1 ;
-(void)_performRestoreAction;
-(void)setBrowsingSession:(PUBrowsingSession *)arg1 ;
@end

