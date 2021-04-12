/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol MPUTransportControlsViewDataSource, MPUTransportControlsViewDelegate, MPUTransportControlsViewLayoutDelegate;
@class NSMutableDictionary, NSMapTable, NSMutableArray, NSMutableSet, NSArray;

@interface MPUTransportControlsView : UIView {

	NSMutableDictionary* _classByReuseIdentifier;
	UIEdgeInsets _insetsForExpandingButtons;
	BOOL _sortedVisibleControlsWithBlanksNeedsReload;
	BOOL _sortByGroup;
	NSMutableDictionary* _recycledButtonsByReuseIdentifier;
	NSMapTable* _reuseIdentifierByButton;
	NSMutableArray* _sortedVisibleControlsWithBlanks;
	NSMutableSet* _typesOfControlsToReload;
	NSMutableDictionary* _visibleButtonByControlType;
	BOOL _usesLegacyLayoutHeuristics;
	NSArray* _availableTransportControls;
	id<MPUTransportControlsViewDataSource> _dataSource;
	id<MPUTransportControlsViewDelegate> _delegate;
	id<MPUTransportControlsViewLayoutDelegate> _layoutDelegate;
	unsigned long long _minimumNumberOfTransportButtonsForLayout;

}

@property (assign,setter=_setInsetsForExpandingButtons:,getter=_insetsForExpandingButtons,nonatomic) UIEdgeInsets insetsForExpandingButtons; 
@property (assign,setter=_setUsesLegacyLayoutHeuristics:,getter=_usesLegacyLayoutHeuristics,nonatomic) BOOL usesLegacyLayoutHeuristics;                   //@synthesize usesLegacyLayoutHeuristics=_usesLegacyLayoutHeuristics - In the implementation block
@property (nonatomic,copy) NSArray * availableTransportControls;                                                                                          //@synthesize availableTransportControls=_availableTransportControls - In the implementation block
@property (assign,nonatomic,__weak) id<MPUTransportControlsViewDataSource> dataSource;                                                                    //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<MPUTransportControlsViewDelegate> delegate;                                                                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MPUTransportControlsViewLayoutDelegate> layoutDelegate;                                                            //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long minimumNumberOfTransportButtonsForLayout;                                                                 //@synthesize minimumNumberOfTransportButtonsForLayout=_minimumNumberOfTransportButtonsForLayout - In the implementation block
@property (assign,nonatomic) BOOL sortByGroup;                                                                                                            //@synthesize sortByGroup=_sortByGroup - In the implementation block
+(id)defaultTransportControls;
-(id<MPUTransportControlsViewLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<MPUTransportControlsViewLayoutDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<MPUTransportControlsViewDelegate>)delegate;
-(id<MPUTransportControlsViewDataSource>)dataSource;
-(void)setDelegate:(id<MPUTransportControlsViewDelegate>)arg1 ;
-(void)setDataSource:(id<MPUTransportControlsViewDataSource>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)dealloc;
-(void)setAvailableTransportControls:(NSArray *)arg1 ;
-(void)_willRemoveTransportButton:(id)arg1 ;
-(void)_recycleTransportButtonWithControlType:(long long)arg1 ;
-(void)_reloadSortedVisibleControlsWithBlanks;
-(id)_typesOfVisibleControls;
-(id)_visibleTransportControlAtIndex:(unsigned long long)arg1 ;
-(void)_configureTransportButton:(id)arg1 forTransportControl:(id)arg2 ;
-(CGSize)_transportControlButtonSize;
-(CGRect)_adjustedFrameOfButtonForTransportControl:(id)arg1 proposedFrame:(CGRect)arg2 ;
-(id)_typesFromTransportControls:(id)arg1 ;
-(void)reloadTransportButtonWithControlType:(long long)arg1 ;
-(id)_createTransportButtonWithReuseIdentifier:(id)arg1 ;
-(void)_transportControlLongPressBegan:(id)arg1 ;
-(void)_transportControlLongPressEnded:(id)arg1 ;
-(void)_transportControlTapped:(id)arg1 ;
-(void)_transportControlTouchEntered:(id)arg1 ;
-(void)_transportControlTouchExited:(id)arg1 ;
-(id)_availableTransportControlsForGroup:(int)arg1 ;
-(id)availableTransportControlWithType:(long long)arg1 ;
-(void)setSortByGroup:(BOOL)arg1 ;
-(id)dequeueReusableTransportButtonWithReuseIdentifier:(id)arg1 ;
-(void)registerClass:(Class)arg1 forTransportButtonWithReuseIdentifier:(id)arg2 ;
-(id)_transportButtonForControlType:(long long)arg1 ;
-(void)setMinimumNumberOfTransportButtonsForLayout:(unsigned long long)arg1 ;
-(UIEdgeInsets)_insetsForExpandingButtons;
-(void)_setInsetsForExpandingButtons:(UIEdgeInsets)arg1 ;
-(void)_setUsesLegacyLayoutHeuristics:(BOOL)arg1 ;
-(NSArray *)availableTransportControls;
-(unsigned long long)minimumNumberOfTransportButtonsForLayout;
-(BOOL)sortByGroup;
-(BOOL)_usesLegacyLayoutHeuristics;
@end
