/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXBarsController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXActionPerformerDelegate.h>

@class UILabel, PXCuratedLibraryViewModel, PXActionPerformer, PXBarAppearance, NSString;

@interface PXCuratedLibraryBarsController : PXBarsController <PXChangeObserver, PXActionPerformerDelegate> {

	UILabel* _selectModeCaptionLabel;
	PXCuratedLibraryViewModel* _viewModel;
	PXActionPerformer* _activeActionPerformer;
	PXActionPerformer* _lastActionPerformer;

}

@property (nonatomic,readonly) PXCuratedLibraryViewModel * viewModel;                //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) PXBarAppearance * barAppearance; 
@property (nonatomic,readonly) UILabel * selectModeCaptionLabel;                     //@synthesize selectModeCaptionLabel=_selectModeCaptionLabel - In the implementation block
@property (nonatomic,retain) PXActionPerformer * activeActionPerformer;              //@synthesize activeActionPerformer=_activeActionPerformer - In the implementation block
@property (nonatomic,retain) PXActionPerformer * lastActionPerformer;                //@synthesize lastActionPerformer=_lastActionPerformer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithCuratedLibraryViewController:(id)arg1 viewModel:(id)arg2 ;
-(id)init;
-(UILabel *)selectModeCaptionLabel;
-(PXCuratedLibraryViewModel *)viewModel;
-(id)curatedLibraryViewController;
-(void)updateBars;
-(void)_applyZoomLevel:(long long)arg1 ;
-(void)_updateSelectModeCaptionLabel;
-(id)_identifierForActionType:(id)arg1 ;
-(void)handleSelectBarButtonItem:(id)arg1 ;
-(id)createAssetActionManagerForAssetReference:(id)arg1 ;
-(void)_invalidateToolbarItems;
-(id)createBarButtonItemForIdentifier:(id)arg1 placement:(unsigned long long)arg2 ;
-(PXActionPerformer *)lastActionPerformer;
-(void)setLastActionPerformer:(PXActionPerformer *)arg1 ;
-(id)rightBarButtonItemIdentifiers;
-(void)handleCancelBarButtonItem:(id)arg1 ;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(PXBarAppearance *)barAppearance;
-(id)_defaultToolbarItemIdentifiers;
-(void)setActiveActionPerformer:(PXActionPerformer *)arg1 ;
-(id)toolbarItemIdentifiers;
-(void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(PXActionPerformer *)activeActionPerformer;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

