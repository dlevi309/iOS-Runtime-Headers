/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSNumber, NSSet, PXAssetReference, PXContentFilterState, NSMutableOrderedSet;


@protocol PXMutablePhotosViewModel <NSObject>
@property (assign,nonatomic) BOOL isInSelectMode; 
@property (assign,nonatomic) BOOL isInCompactMode; 
@property (assign,nonatomic) BOOL isAppearing; 
@property (assign,nonatomic) BOOL dismissRequested; 
@property (assign,nonatomic) BOOL hasScrollableContent; 
@property (assign,getter=isScrolledToTop,nonatomic) BOOL scrolledToTop; 
@property (assign,nonatomic) double headerTitleTopInset; 
@property (assign,nonatomic) long long numberOfZoomSteps; 
@property (nonatomic,copy) NSNumber * userWantsAspectFitContent; 
@property (nonatomic,copy) NSSet * draggedAssetReferences; 
@property (nonatomic,retain) PXAssetReference * dropTargetAssetReference; 
@property (assign,nonatomic) BOOL wantsContentFilterVisible; 
@property (assign,nonatomic) BOOL wantsContentFilterIndicatorVisible; 
@property (assign,nonatomic) BOOL footerHasImportantInformation; 
@property (assign,getter=isContentBelowTitle,nonatomic) BOOL contentBelowTitle; 
@property (assign,getter=isShowingAlternateContent,nonatomic) BOOL showingAlternateContent; 
@property (assign,nonatomic) BOOL viewBasedDecorationsEnabled; 
@property (assign,nonatomic) BOOL captionsVisible; 
@property (assign,nonatomic) double floatingTitleOpacity; 
@property (assign,nonatomic) BOOL keepsTabBarAlwaysHidden; 
@property (nonatomic,copy) PXContentFilterState * filterState; 
@property (nonatomic,readonly) NSMutableOrderedSet * visibleAssetCollections; 
@required
-(BOOL)wantsContentFilterVisible;
-(PXAssetReference *)dropTargetAssetReference;
-(BOOL)viewBasedDecorationsEnabled;
-(NSSet *)draggedAssetReferences;
-(void)setCaptionsVisible:(BOOL)arg1;
-(void)setDropTargetAssetReference:(id)arg1;
-(void)setWantsContentFilterVisible:(BOOL)arg1;
-(void)setDraggedAssetReferences:(id)arg1;
-(void)setIsAppearing:(BOOL)arg1;
-(void)setContentBelowTitle:(BOOL)arg1;
-(PXContentFilterState *)filterState;
-(void)toggleSelectionForAssetCollectionReference:(id)arg1;
-(void)setFilterState:(id)arg1;
-(void)setZoomStep:(double)arg1 isInteractive:(BOOL)arg2 shouldAnimate:(BOOL)arg3 anchorAssetReference:(id)arg4;
-(void)setHasScrollableContent:(BOOL)arg1;
-(void)setWantsContentFilterIndicatorVisible:(BOOL)arg1;
-(double)floatingTitleOpacity;
-(NSMutableOrderedSet *)visibleAssetCollections;
-(void)toggleSelectionForAssetReference:(id)arg1 updateCursorIndexPath:(BOOL)arg2;
-(void)setHeaderTitleTopInset:(double)arg1;
-(void)setKeepsTabBarAlwaysHidden:(BOOL)arg1;
-(void)toggleSelectionForAssetReference:(id)arg1;
-(void)setUserWantsAspectFitContent:(id)arg1;
-(void)setFloatingTitleOpacity:(double)arg1;
-(BOOL)isInSelectMode;
-(BOOL)captionsVisible;
-(void)setAspectRatioToggleAllowed:(BOOL)arg1 forReason:(id)arg2;
-(void)toggleSelectionForIndexPath:(PXSimpleIndexPath)arg1 updateCursorIndexPath:(BOOL)arg2;
-(void)setIsInCompactMode:(BOOL)arg1;
-(BOOL)wantsContentFilterIndicatorVisible;
-(void)setViewBasedDecorationsEnabled:(BOOL)arg1;
-(BOOL)isAppearing;
-(BOOL)isShowingAlternateContent;
-(BOOL)dismissRequested;
-(void)setEnterSelectModeAllowed:(BOOL)arg1 forReason:(id)arg2;
-(void)setHideSurroundingContent:(BOOL)arg1 forReason:(id)arg2;
-(void)setNumberOfZoomSteps:(long long)arg1;
-(void)setIsInSelectMode:(BOOL)arg1;
-(BOOL)hasScrollableContent;
-(BOOL)isInCompactMode;
-(long long)numberOfZoomSteps;
-(void)setScrolledToTop:(BOOL)arg1;
-(double)headerTitleTopInset;
-(void)setDismissRequested:(BOOL)arg1;
-(void)setShowingAlternateContent:(BOOL)arg1;
-(BOOL)footerHasImportantInformation;
-(void)setOneUpPresentationAllowed:(BOOL)arg1 forReason:(id)arg2;
-(void)toggleSelectionForIndexPath:(PXSimpleIndexPath)arg1;
-(void)setFooterHasImportantInformation:(BOOL)arg1;
-(NSNumber *)userWantsAspectFitContent;
-(BOOL)keepsTabBarAlwaysHidden;
-(BOOL)isContentBelowTitle;
-(BOOL)isScrolledToTop;
-(BOOL)attemptSetInSelectMode:(BOOL)arg1;

@end

