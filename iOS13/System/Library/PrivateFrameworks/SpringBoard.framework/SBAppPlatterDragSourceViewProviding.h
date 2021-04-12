/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBAppPlatterDragSourceViewProviding <NSObject>
@property (assign,getter=isDragging,nonatomic) BOOL dragging; 
@required
-(BOOL)isDragging;
-(id)sourceView;
-(void)setDragging:(BOOL)arg1;
-(id)initialCornerRadiusConfiguration;
-(SBDragPreviewShadowParameters*)initialDiffuseShadowParameters;
-(SBDragPreviewShadowParameters*)initialRimShadowParameters;
-(id)initialDiffuseShadowFilters;
-(id)initialRimShadowFilters;
-(id)containerViewForBlurContentView;

@end

