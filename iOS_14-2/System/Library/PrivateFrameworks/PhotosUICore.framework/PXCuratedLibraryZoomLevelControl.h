/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXCuratedLibraryZoomLevelControlDelegate;
@class PXUpdater, UIVisualEffectView, _PXCuratedLibraryZoomLevelSegmentedControl, PXCuratedLibraryViewModel, PXCuratedLibraryStyleGuide, NSArray, NSString;

@interface PXCuratedLibraryZoomLevelControl : UIView <PXChangeObserver> {

	PXUpdater* _updater;
	UIEdgeInsets _padding;
	CGSize* _textSizes;
	double _minimumInterTextSpacing;
	CGSize _intrinsicSize;
	UIVisualEffectView* _backgroundEffectView;
	_PXCuratedLibraryZoomLevelSegmentedControl* _segmentedControl;
	PXCuratedLibraryViewModel* _viewModel;
	PXCuratedLibraryStyleGuide* _styleGuide;
	id<PXCuratedLibraryZoomLevelControlDelegate> _delegate;
	NSArray* _zoomLevelIdentifiers;
	long long _selectedZoomLevel;
	NSArray* _enabledZoomLevelIdentifiers;
	long long _shrinkLevel;

}

@property (nonatomic,readonly) NSArray * zoomLevelIdentifiers;                                          //@synthesize zoomLevelIdentifiers=_zoomLevelIdentifiers - In the implementation block
@property (assign,nonatomic) long long selectedZoomLevel;                                               //@synthesize selectedZoomLevel=_selectedZoomLevel - In the implementation block
@property (nonatomic,retain) NSArray * enabledZoomLevelIdentifiers;                                     //@synthesize enabledZoomLevelIdentifiers=_enabledZoomLevelIdentifiers - In the implementation block
@property (assign,nonatomic) long long shrinkLevel;                                                     //@synthesize shrinkLevel=_shrinkLevel - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryViewModel * viewModel;                                   //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryStyleGuide * styleGuide;                                 //@synthesize styleGuide=_styleGuide - In the implementation block
@property (assign,nonatomic,__weak) id<PXCuratedLibraryZoomLevelControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_allZoomLevelIdentifiers;
+(id)_enabledZoomLevelIdentifiersForViewModel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PXCuratedLibraryZoomLevelControlDelegate>)delegate;
-(PXCuratedLibraryViewModel *)viewModel;
-(id)initWithViewModel:(id)arg1 styleGuide:(id)arg2 ;
-(void)_invalidateSegmentedControl;
-(void)_updateSegmentedControl;
-(PXCuratedLibraryStyleGuide *)styleGuide;
-(void)setEnabledZoomLevelIdentifiers:(NSArray *)arg1 ;
-(void)setDelegate:(id<PXCuratedLibraryZoomLevelControlDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)_handleSegmentedControlAction:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)selectedZoomLevel;
-(id)initWithCoder:(id)arg1 ;
-(void)setShrinkLevel:(long long)arg1 ;
-(long long)shrinkLevel;
-(long long)zoomLevelDisplayedBeforeZoomLevel:(long long)arg1 ;
-(NSArray *)enabledZoomLevelIdentifiers;
-(NSArray *)zoomLevelIdentifiers;
-(void)_handleContentSizeCategoryDidChange:(id)arg1 ;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setSelectedZoomLevel:(long long)arg1 ;
@end

