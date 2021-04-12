/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PUAssetViewModelChangeObserver.h>

@class PUBrowsingViewModel, PUAssetReference, PUAssetActionManager, UIButton, PUAssetViewModel, NSString;

@interface PUOneUpSelectionIndicatorTileViewController : PUTileViewController <PXChangeObserver, PUAssetViewModelChangeObserver> {

	BOOL __performingChanges;
	BOOL __needsUpdateButton;
	BOOL __buttonVisible;
	PUBrowsingViewModel* _browsingViewModel;
	PUAssetReference* _assetReference;
	PUAssetActionManager* _actionManager;
	UIButton* __button;
	PUAssetViewModel* _assetViewModel;

}

@property (assign,setter=_setPerformingChanges:,getter=_isPerformingChanges,nonatomic) BOOL _performingChanges;              //@synthesize _performingChanges=__performingChanges - In the implementation block
@property (assign,setter=_setNeedsUpdateButton:,nonatomic) BOOL _needsUpdateButton;                                          //@synthesize _needsUpdateButton=__needsUpdateButton - In the implementation block
@property (setter=_setButton:,nonatomic,retain) UIButton * _button;                                                          //@synthesize _button=__button - In the implementation block
@property (assign,setter=_setButtonVisible:,getter=_isButtonVisible,nonatomic) BOOL _buttonVisible;                          //@synthesize _buttonVisible=__buttonVisible - In the implementation block
@property (nonatomic,retain) PUAssetViewModel * assetViewModel;                                                              //@synthesize assetViewModel=_assetViewModel - In the implementation block
@property (nonatomic,retain) PUBrowsingViewModel * browsingViewModel;                                                        //@synthesize browsingViewModel=_browsingViewModel - In the implementation block
@property (nonatomic,retain) PUAssetReference * assetReference;                                                              //@synthesize assetReference=_assetReference - In the implementation block
@property (nonatomic,retain) PUAssetActionManager * actionManager;                                                           //@synthesize actionManager=_actionManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PUAssetViewModel *)assetViewModel;
-(void)setAssetViewModel:(PUAssetViewModel *)arg1 ;
-(void)setAssetReference:(PUAssetReference *)arg1 ;
-(void)becomeReusable;
-(UIButton *)_button;
-(void)_setPerformingChanges:(BOOL)arg1 ;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(BOOL)_isPerformingChanges;
-(void)_handleButton:(id)arg1 ;
-(void)_updateIfNeeded;
-(void)setActionManager:(PUAssetActionManager *)arg1 ;
-(PUAssetActionManager *)actionManager;
-(PUBrowsingViewModel *)browsingViewModel;
-(void)viewDidLoad;
-(void)setBrowsingViewModel:(PUBrowsingViewModel *)arg1 ;
-(BOOL)_needsUpdate;
-(PUAssetReference *)assetReference;
-(void)_invalidateButton;
-(void)_setButtonVisible:(BOOL)arg1 ;
-(void)_updateButtonIfNeeded;
-(void)_setButtonVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_needsUpdateButton;
-(void)_setNeedsUpdateButton:(BOOL)arg1 ;
-(BOOL)_isButtonVisible;
-(void)_setNeedsUpdate;
-(id)_selectionManager;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)_setButton:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)_reviewActionManager;
@end

