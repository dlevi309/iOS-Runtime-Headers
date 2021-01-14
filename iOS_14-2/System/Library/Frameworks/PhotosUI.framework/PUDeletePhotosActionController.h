/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUDeletePhotosActionControllerDelegate;
@class NSArray, UIAlertController;

@interface PUDeletePhotosActionController : NSObject {

	/*^block*/id _completionHandler;
	/*^block*/id _willDeleteHandler;
	BOOL _shouldSkipDeleteConfirmation;
	long long _action;
	id<PUDeletePhotosActionControllerDelegate> _delegate;
	NSArray* __assets;
	NSArray* __plAssets;
	NSArray* __plAdditionalAssetsToDelete;
	UIAlertController* __mainAlertController;
	UIAlertController* __oneTimeConfirmationAlertController;

}

@property (nonatomic,copy,readonly) NSArray * _assets;                                                                                            //@synthesize _assets=__assets - In the implementation block
@property (nonatomic,copy,readonly) NSArray * _plAssets;                                                                                          //@synthesize _plAssets=__plAssets - In the implementation block
@property (nonatomic,copy,readonly) NSArray * _plAdditionalAssetsToDelete;                                                                        //@synthesize _plAdditionalAssetsToDelete=__plAdditionalAssetsToDelete - In the implementation block
@property (setter=_setMainAlertController:,nonatomic,retain) UIAlertController * _mainAlertController;                                            //@synthesize _mainAlertController=__mainAlertController - In the implementation block
@property (setter=_setOneTimeConfirmationAlertController:,nonatomic,retain) UIAlertController * _oneTimeConfirmationAlertController;              //@synthesize _oneTimeConfirmationAlertController=__oneTimeConfirmationAlertController - In the implementation block
@property (nonatomic,readonly) long long action;                                                                                                  //@synthesize action=_action - In the implementation block
@property (nonatomic,__weak,readonly) id<PUDeletePhotosActionControllerDelegate> delegate;                                                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipDeleteConfirmation;                                                                                   //@synthesize shouldSkipDeleteConfirmation=_shouldSkipDeleteConfirmation - In the implementation block
-(id<PUDeletePhotosActionControllerDelegate>)delegate;
-(long long)action;
-(NSArray *)_plAssets;
-(NSArray *)_assets;
-(id)initWithAction:(long long)arg1 assets:(id)arg2 delegate:(id)arg3 ;
-(void)_runDestructiveActionWithCompletion:(/*^block*/id)arg1 ;
-(void)performWithWillDeleteHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)ppt_performDeleteWithoutUserConfirmationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleFinalUserDecisionShouldDelete:(BOOL)arg1 ;
-(void)_ensureMainAlertController;
-(void)_showOnetimeConfirmation;
-(void)_ensureOneTimeConfirmationAlertController;
-(void)_handleMainAlertConfirmed:(BOOL)arg1 ;
-(void)_handleOneTimeAlertConfirmed;
-(NSArray *)_plAdditionalAssetsToDelete;
-(UIAlertController *)_mainAlertController;
-(void)_setMainAlertController:(id)arg1 ;
-(void)_getDeleteActionSheetTitle:(id*)arg1 destructiveButtonTitle:(id*)arg2 cancelButtonTitle:(id*)arg3 isDestructiveBehavior:(BOOL*)arg4 forAssets:(id)arg5 additionalPhotoStreamAssets:(id)arg6 ;
-(BOOL)shouldSkipDeleteConfirmation;
-(void)setShouldSkipDeleteConfirmation:(BOOL)arg1 ;
-(UIAlertController *)_oneTimeConfirmationAlertController;
-(void)_setOneTimeConfirmationAlertController:(id)arg1 ;
@end

