/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>
#import <libobjc.A.dylib/PXReusableObject.h>

@protocol PXAssetImportStatusManager;
@class PXCMMViewModel, PXMomentShareStatusPresentation, UIView, UIButton, UILabel, NSString;

@interface PXCMMSectionHeaderController : NSObject <PXChangeObserver, PXUIViewBasicTile, PXReusableObject> {

	unsigned long long _activityType;
	PXCMMViewModel* _viewModel;
	PXMomentShareStatusPresentation* _momentShareStatusPresentation;
	id<PXAssetImportStatusManager> _importStatusManager;
	BOOL _isViewLoaded;
	UIView* _underlyingView;
	UIButton* _actionButton;
	UIButton* _secondaryButton;
	UILabel* _photosLabel;
	long long _actionButtonType;
	long long _secondaryActionButtonType;

}

@property (assign,setter=_setActionButtonType:,nonatomic) long long actionButtonType;                                //@synthesize actionButtonType=_actionButtonType - In the implementation block
@property (assign,setter=_setSecondaryActionButtonType:,nonatomic) long long secondaryActionButtonType;              //@synthesize secondaryActionButtonType=_secondaryActionButtonType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
+(id)new;
+(id)_buttonLabelFont;
+(id)_photosLabelFont;
-(void)becomeReusable;
-(id)init;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)prepareForReuse;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)_loadViewIfNeeded;
-(void)_handleActionButtonTapped:(id)arg1 ;
-(void)_handleSecondaryButtonTapped:(id)arg1 ;
-(id)initWithActivityType:(unsigned long long)arg1 viewModel:(id)arg2 momentShareStatusPresentation:(id)arg3 importStatusManager:(id)arg4 ;
-(void)_setActionButtonType:(long long)arg1 ;
-(void)_setSecondaryActionButtonType:(long long)arg1 ;
-(void)_layoutButtonWithSize:(CGSize)arg1 ;
-(BOOL)_wantsActionButtons;
-(void)_updateActionButtons;
-(void)_selectAllAssets;
-(UIView *)view;
-(void)_deselectAllAssets;
-(long long)actionButtonType;
-(long long)secondaryActionButtonType;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

