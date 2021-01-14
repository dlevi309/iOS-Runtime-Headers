/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PUAssetViewModelChangeObserver.h>

@class UIView, UIActivityIndicatorView, PUAssetViewModel, NSString;

@interface PUImportStatusTileViewController : PUTileViewController <PUAssetViewModelChangeObserver> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	UIView* _successView;
	UIView* _errorView;
	UIActivityIndicatorView* _progressIndicatorView;
	BOOL __isPerformingChanges;
	PUAssetViewModel* _assetViewModel;

}

@property (assign,nonatomic) BOOL _isPerformingChanges;                      //@synthesize _isPerformingChanges=__isPerformingChanges - In the implementation block
@property (nonatomic,retain) PUAssetViewModel * assetViewModel;              //@synthesize assetViewModel=_assetViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PUAssetViewModel *)assetViewModel;
-(void)setAssetViewModel:(PUAssetViewModel *)arg1 ;
-(void)becomeReusable;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(BOOL)_isPerformingChanges;
-(void)_updateStatusView;
-(void)set_isPerformingChanges:(BOOL)arg1 ;
-(void)_updateIfNeeded;
-(void)applyLayoutInfo:(id)arg1 ;
-(void)viewDidLoad;
-(void)performChanges:(/*^block*/id)arg1 ;
@end

