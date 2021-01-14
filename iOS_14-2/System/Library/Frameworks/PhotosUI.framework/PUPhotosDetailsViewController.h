/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUICore/PXPhotosDetailsUIViewController.h>
#import <libobjc.A.dylib/PUAssetViewModelChangeObserver.h>
#import <libobjc.A.dylib/PUAccessoryContentViewController.h>

@protocol PUAccessoryContentViewControllerDelegate;
@class _UIContentUnavailableView, PUAssetViewModel, NSString;

@interface PUPhotosDetailsViewController : PXPhotosDetailsUIViewController <PUAssetViewModelChangeObserver, PUAccessoryContentViewController> {

	SCD_Struct_PU16 _superRespondsTo;
	_UIContentUnavailableView* _contentUnavailableView;
	id<PUAccessoryContentViewControllerDelegate> _accessoryContentViewControllerDelegate;
	PUAssetViewModel* _assetViewModel;
	double _maxVisibleHeightInEdit;

}

@property (nonatomic,readonly) PUAssetViewModel * assetViewModel;                                                                     //@synthesize assetViewModel=_assetViewModel - In the implementation block
@property (assign,nonatomic) double maxVisibleHeightInEdit;                                                                           //@synthesize maxVisibleHeightInEdit=_maxVisibleHeightInEdit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PUAccessoryContentViewControllerDelegate> accessoryContentViewControllerDelegate;              //@synthesize accessoryContentViewControllerDelegate=_accessoryContentViewControllerDelegate - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentInsets; 
@property (nonatomic,readonly) CGSize minimumContentSize; 
-(PUAssetViewModel *)assetViewModel;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)scrollViewControllerDidScroll:(id)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)scrollViewControllerContentBoundsDidChange:(id)arg1 ;
-(CGSize)preferredContentSize;
-(BOOL)_canShowWhileLocked;
-(id)initWithContext:(id)arg1 configuration:(id)arg2 ;
-(void)_layoutContentUnavailableView;
-(unsigned long long)occludedContentEdges;
-(void)editingDidChange:(BOOL)arg1 ;
-(void)editorHeightDidChange;
-(double)maxVisibleHeightInEdit;
-(void)setMaxVisibleHeightInEdit:(double)arg1 ;
-(id)initWithContext:(id)arg1 options:(unsigned long long)arg2 ;
-(UIEdgeInsets)px_safeAreaInsets;
-(id)initWithContext:(id)arg1 configuration:(id)arg2 assetViewModel:(id)arg3 ;
-(CGRect)contentBoundsInCoordinateSpace:(id)arg1 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 changeReason:(long long)arg2 ;
-(CGSize)minimumContentSize;
-(void)setMaxVisibleContentInsetsWhenInEdit:(UIEdgeInsets)arg1 ;
-(void)setAccessoryContentViewControllerDelegate:(id<PUAccessoryContentViewControllerDelegate>)arg1 ;
-(id<PUAccessoryContentViewControllerDelegate>)accessoryContentViewControllerDelegate;
-(BOOL)contentAreaContainsPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(void)setEmpty:(BOOL)arg1 ;
@end

