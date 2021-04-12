/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSMutableSet, PXCuratedLibraryAssetCollectionSkimmingInfo, NSSet, NSNumber;


@protocol PXMutablePhotosLibraryViewModel <NSObject>
@property (assign,nonatomic) BOOL isAppearing; 
@property (assign,nonatomic) long long zoomLevelTransitionPhase; 
@property (nonatomic,readonly) NSMutableSet * visibleAssetCollections; 
@property (assign,nonatomic) BOOL viewBasedDecorationsEnabled; 
@property (assign,nonatomic) BOOL isSelecting; 
@property (assign,nonatomic) double daysMarginScale; 
@property (nonatomic,retain) PXCuratedLibraryAssetCollectionSkimmingInfo * skimmingInfo; 
@property (nonatomic,copy) NSSet * draggedAssetReferences; 
@property (assign,nonatomic) long long zoomLevel; 
@property (nonatomic,copy) NSObject*<PXFilterState> allPhotosFilterState; 
@property (assign,nonatomic) BOOL wantsOptionalChromeVisible; 
@property (assign,nonatomic) BOOL wantsDarkStatusBar; 
@property (nonatomic,retain) Class cplActionManagerClass; 
@property (assign,nonatomic) BOOL sidebarCanBecomeVisible; 
@property (assign,nonatomic) BOOL wantsSidebarVisible; 
@property (nonatomic,copy) NSNumber * userWantsAspectFitContent; 
@required
-(BOOL)viewBasedDecorationsEnabled;
-(NSSet *)draggedAssetReferences;
-(void)setIsSelecting:(BOOL)arg1;
-(void)setWantsOptionalChromeVisible:(BOOL)arg1;
-(void)setZoomLevelTransitionPhase:(long long)arg1;
-(void)setDraggedAssetReferences:(id)arg1;
-(long long)zoomLevel;
-(BOOL)isSelecting;
-(void)setIsAppearing:(BOOL)arg1;
-(BOOL)sidebarCanBecomeVisible;
-(void)setZoomLevel:(long long)arg1;
-(void)removePresenter:(id)arg1;
-(void)setSidebarCanBecomeVisible:(BOOL)arg1;
-(void)toggleSelectionForAssetCollectionReference:(id)arg1;
-(PXCuratedLibraryAssetCollectionSkimmingInfo *)skimmingInfo;
-(NSMutableSet *)visibleAssetCollections;
-(void)setAllPhotosFilterState:(id)arg1;
-(double)daysMarginScale;
-(void)toggleSelectionForAssetReference:(id)arg1 updateCursorIndexPath:(BOOL)arg2;
-(void)toggleSelectionForAssetReference:(id)arg1;
-(BOOL)wantsSidebarVisible;
-(void)setUserWantsAspectFitContent:(id)arg1;
-(void)setWantsDarkStatusBar:(BOOL)arg1;
-(void)setViewBasedDecorationsEnabled:(BOOL)arg1;
-(BOOL)isAppearing;
-(NSObject*<PXFilterState>)allPhotosFilterState;
-(void)removeView:(id)arg1;
-(void)setDaysMarginScale:(double)arg1;
-(void)setWantsSidebarVisible:(BOOL)arg1;
-(BOOL)wantsDarkStatusBar;
-(void)setSkimmingInfo:(id)arg1;
-(void)addView:(id)arg1;
-(long long)zoomLevelTransitionPhase;
-(void)setWantsOptionalChromeVisible:(BOOL)arg1 changeReason:(long long)arg2;
-(Class)cplActionManagerClass;
-(void)toggleSelectionForIndexPath:(PXSimpleIndexPath)arg1;
-(BOOL)wantsOptionalChromeVisible;
-(NSNumber *)userWantsAspectFitContent;
-(void)addPresenter:(id)arg1;
-(void)setCplActionManagerClass:(Class)arg1;

@end

