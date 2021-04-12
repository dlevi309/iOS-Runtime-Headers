/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIToolbar.h>
#import <libobjc.A.dylib/PUToolbarViewModelChangeObserver.h>

@class PUToolbarViewModel, NSArray, UIView, UIToolbar, NSMutableSet, NSString;

@interface PUExtendedToolbar : UIToolbar <PUToolbarViewModelChangeObserver> {

	BOOL __isUpdating;
	BOOL __needsUpdateToolbarItems;
	BOOL __needsUpdateAccessoryView;
	BOOL __needsUpdateAccessoryViewTopOutset;
	BOOL __needsUpdateContainedToolbar;
	BOOL __needsUpdateAccessoryViewContainer;
	PUToolbarViewModel* _toolbarViewModel;
	long long __numberOfNestedChanges;
	NSArray* __toolbarItems;
	UIView* __accessoryView;
	double __containedToolbarHeight;
	double __accessoryViewTopOutset;
	double __minimumBackgroundHeight;
	UIToolbar* __containedToolbar;
	UIView* __accessoryViewContainer;
	NSMutableSet* __accessoryViewContainers;

}

@property (assign,setter=_setNumberOfNestedChanges:,nonatomic) long long _numberOfNestedChanges;                                 //@synthesize _numberOfNestedChanges=__numberOfNestedChanges - In the implementation block
@property (assign,setter=_setUpdating:,nonatomic) BOOL _isUpdating;                                                              //@synthesize _isUpdating=__isUpdating - In the implementation block
@property (assign,setter=_setNeedsUpdateToolbarItems:,nonatomic) BOOL _needsUpdateToolbarItems;                                  //@synthesize _needsUpdateToolbarItems=__needsUpdateToolbarItems - In the implementation block
@property (assign,setter=_setNeedsUpdateAccessoryView:,nonatomic) BOOL _needsUpdateAccessoryView;                                //@synthesize _needsUpdateAccessoryView=__needsUpdateAccessoryView - In the implementation block
@property (assign,setter=_setNeedsUpdateAccessoryViewTopOutset:,nonatomic) BOOL _needsUpdateAccessoryViewTopOutset;              //@synthesize _needsUpdateAccessoryViewTopOutset=__needsUpdateAccessoryViewTopOutset - In the implementation block
@property (assign,setter=_setNeedsUpdateContainedToolbar:,nonatomic) BOOL _needsUpdateContainedToolbar;                          //@synthesize _needsUpdateContainedToolbar=__needsUpdateContainedToolbar - In the implementation block
@property (assign,setter=_setNeedsUpdateAccessoryViewContainer:,nonatomic) BOOL _needsUpdateAccessoryViewContainer;              //@synthesize _needsUpdateAccessoryViewContainer=__needsUpdateAccessoryViewContainer - In the implementation block
@property (setter=_setToolbarItems:,nonatomic,copy) NSArray * _toolbarItems;                                                     //@synthesize _toolbarItems=__toolbarItems - In the implementation block
@property (setter=_setAccessoryView:,nonatomic,retain) UIView * _accessoryView;                                                  //@synthesize _accessoryView=__accessoryView - In the implementation block
@property (assign,setter=_setContainedToolbarHeight:,nonatomic) double _containedToolbarHeight;                                  //@synthesize _containedToolbarHeight=__containedToolbarHeight - In the implementation block
@property (assign,setter=_setAccessoryViewTopOutset:,nonatomic) double _accessoryViewTopOutset;                                  //@synthesize _accessoryViewTopOutset=__accessoryViewTopOutset - In the implementation block
@property (assign,setter=_setMinimumBackgroundHeight:,nonatomic) double _minimumBackgroundHeight;                                //@synthesize _minimumBackgroundHeight=__minimumBackgroundHeight - In the implementation block
@property (setter=_setContainedToolbar:,nonatomic,retain) UIToolbar * _containedToolbar;                                         //@synthesize _containedToolbar=__containedToolbar - In the implementation block
@property (setter=_setAccessoryViewContainer:,nonatomic,retain) UIView * _accessoryViewContainer;                                //@synthesize _accessoryViewContainer=__accessoryViewContainer - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _accessoryViewContainers;                                                          //@synthesize _accessoryViewContainers=__accessoryViewContainers - In the implementation block
@property (nonatomic,retain) PUToolbarViewModel * toolbarViewModel;                                                              //@synthesize toolbarViewModel=_toolbarViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_assertInsideChangeBlock;
-(double)_containedToolbarHeight;
-(void)_setUpdating:(BOOL)arg1 ;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(BOOL)_isUpdating;
-(void)setBarStyle:(long long)arg1 ;
-(UIView *)_accessoryViewContainer;
-(void)setToolbarViewModel:(PUToolbarViewModel *)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)_invalidateContainedToolbar;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setAccessoryViewTopOutset:(double)arg1 ;
-(void)_setContainedToolbarHeight:(double)arg1 ;
-(PUToolbarViewModel *)toolbarViewModel;
-(void)_updateAccessoryTopOutsetViewIfNeeded;
-(void)_setMinimumBackgroundHeight:(double)arg1 ;
-(void)_invalidateAccessoryViewContainer;
-(void)_setNeedsUpdateToolbarItems:(BOOL)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_setNeedsUpdateAccessoryViewContainer:(BOOL)arg1 ;
-(void)_setNeedsUpdateContainedToolbar:(BOOL)arg1 ;
-(void)_setContainedToolbar:(id)arg1 ;
-(BOOL)_shouldStretchDuringCrossfadeTransition;
-(BOOL)_needsUpdateAccessoryView;
-(void)_performChanges:(/*^block*/id)arg1 ;
-(NSArray *)_toolbarItems;
-(void)_performChanges:(/*^block*/id)arg1 withAnimatorBlock:(/*^block*/id)arg2 ;
-(BOOL)_needsUpdateAccessoryViewTopOutset;
-(void)_setToolbarItems:(id)arg1 ;
-(void)layoutSubviews;
-(void)setToolbarViewModel:(id)arg1 withAnimatorBlock:(/*^block*/id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_setAccessoryView:(id)arg1 ;
-(void)_invalidateToolbarItems;
-(void)_setNeedsUpdateAccessoryViewTopOutset:(BOOL)arg1 ;
-(void)_updateAccessoryViewIfNeeded;
-(double)_minimumBackgroundHeight;
-(void)_invalidateAccessoryView;
-(void)_setAccessoryViewContainer:(id)arg1 ;
-(BOOL)_needsUpdate;
-(void)_invalidateSize;
-(BOOL)_needsUpdateContainedToolbar;
-(void)_assertInsideUpdate;
-(BOOL)_needsUpdateToolbarItems;
-(BOOL)_needsUpdateAccessoryViewContainer;
-(void)_updateToolbarItemsIfNeeded;
-(UIView *)_accessoryView;
-(void)_setNeedsUpdate;
-(NSMutableSet *)_accessoryViewContainers;
-(UIToolbar *)_containedToolbar;
-(void)_updateIfNeededWithAnimatorBlock:(/*^block*/id)arg1 ;
-(void)_invalidateAccessoryViewTopOutset;
-(double)_accessoryViewTopOutset;
-(void)_getContainedToolbarFrame:(CGRect*)arg1 accessoryViewContainerFrame:(CGRect*)arg2 forBounds:(CGRect)arg3 ;
-(void)_updateViewsIfNeededWithAnimatorBlock:(/*^block*/id)arg1 ;
-(void)_setNumberOfNestedChanges:(long long)arg1 ;
-(long long)_numberOfNestedChanges;
-(void)_setNeedsUpdateAccessoryView:(BOOL)arg1 ;
@end

