/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDrawableMapper.h>

@class OADShape, CMDrawingContext;

@interface PMDrawableMapper : CMDrawableMapper {

	OADShape* mShape;
	CMDrawingContext* mDrawingContext;
	BOOL mTopLevelMapper;

}
-(id)drawingContext;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2 ;
-(void)mapOfficeArtImageAt:(id)arg1 withState:(id)arg2 ;
-(void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2 ;
-(void)mapDiagramAt:(id)arg1 withState:(id)arg2 ;
-(void)mapBounds;
-(CGRect)transformRectToPage:(CGRect)arg1 ;
-(void)mapChartAt:(id)arg1 withState:(id)arg2 ;
-(CGRect)slideRect;
-(void)setTopLevelMapper:(BOOL)arg1 ;
-(void)setDrawingContext:(id)arg1 ;
-(BOOL)isTopLevelMapper;
-(void)mapRectangularShapeAt:(id)arg1 withState:(id)arg2 ;
-(void)mapShapeAsBackgroundAt:(id)arg1 withState:(id)arg2 ;
-(CGRect)shapeTextBoxWithState:(id)arg1 ;
-(void)mapFreeForm:(id)arg1 orientedBounds:(id)arg2 transformedBounds:(CGRect*)arg3 state:(id)arg4 ;
@end

