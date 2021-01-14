/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSSet, PXAssetReference;


@protocol PXMutableZoomablePhotosViewModel <NSObject>
@property (assign,nonatomic) BOOL lowMemoryMode; 
@property (assign,nonatomic) BOOL viewBasedDecorationsEnabled; 
@property (nonatomic,copy) NSSet * draggedAssetReferences; 
@property (nonatomic,retain) PXAssetReference * dropTargetAssetReference; 
@property (assign,nonatomic) BOOL isInSelectMode; 
@property (assign,nonatomic) BOOL aspectFit; 
@property (assign,nonatomic) BOOL captionsVisible; 
@property (assign,nonatomic) BOOL wantsDimmedSelectionStyle; 
@property (assign,nonatomic) BOOL isPinching; 
@property (assign,nonatomic) BOOL isInteractiveZooming; 
@property (assign,nonatomic) BOOL wantsOverBackgroundFloatingHeaderAppearance; 
@property (assign,nonatomic) BOOL layoutExtendsContentBelowBounds; 
@required
-(PXAssetReference *)dropTargetAssetReference;
-(BOOL)viewBasedDecorationsEnabled;
-(NSSet *)draggedAssetReferences;
-(void)setWantsDimmedSelectionStyle:(BOOL)arg1;
-(void)setIsInteractiveZooming:(BOOL)arg1;
-(void)setCaptionsVisible:(BOOL)arg1;
-(void)setDropTargetAssetReference:(id)arg1;
-(void)setDraggedAssetReferences:(id)arg1;
-(BOOL)wantsDimmedSelectionStyle;
-(void)setLayoutExtendsContentBelowBounds:(BOOL)arg1;
-(void)zoomInToLastRememberedWithAnchorAssetReference:(id)arg1 animated:(BOOL)arg2;
-(void)setAspectFit:(BOOL)arg1;
-(void)setInteractiveZoomColumnIndex:(double)arg1 withAnchorAssetReference:(id)arg2;
-(void)setWantsOverBackgroundFloatingHeaderAppearance:(BOOL)arg1;
-(BOOL)aspectFit;
-(void)zoomToColumnIndex:(long long)arg1 withAnchorAssetReference:(id)arg2 animated:(BOOL)arg3;
-(void)setLowMemoryMode:(BOOL)arg1;
-(BOOL)isInSelectMode;
-(BOOL)captionsVisible;
-(void)setViewBasedDecorationsEnabled:(BOOL)arg1;
-(void)setIsInSelectMode:(BOOL)arg1;
-(BOOL)layoutExtendsContentBelowBounds;
-(void)zoomInToIndividualItemsWithAnchorAssetReference:(id)arg1 animated:(BOOL)arg2;
-(BOOL)isInteractiveZooming;
-(BOOL)isPinching;
-(void)resetColumns;
-(BOOL)wantsOverBackgroundFloatingHeaderAppearance;
-(BOOL)lowMemoryMode;
-(void)setIsPinching:(BOOL)arg1;
-(void)setPinchState:(SCD_Struct_PX47)arg1 withAnchorAssetReference:(id)arg2;

@end

