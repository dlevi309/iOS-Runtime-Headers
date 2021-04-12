/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBAppPlatterDragSourceViewProviding <NSObject>
@property (assign,getter=isDragging,nonatomic) BOOL dragging; 
@required
-(id)initialDiffuseShadowFilters;
-(id)sourceView;
-(id)containerViewForBlurContentView;
-(id)initialRimShadowFilters;
-(void)setDragging:(BOOL)arg1;
-(SBDragPreviewShadowParameters*)initialRimShadowParameters;
-(BOOL)isDragging;
-(SBDragPreviewShadowParameters*)initialDiffuseShadowParameters;
-(id)initialCornerRadiusConfiguration;

@end

