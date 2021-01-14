/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class ODDPoint, CMDrawingContext, OADOrientedBounds, NSString;

@interface CMDiagramPointMapper : CMMapper {

	ODDPoint* mPoint;
	CMDrawingContext* mDrawingContext;
	OADOrientedBounds* mOrientedBounds;
	NSString* mPresentationName;

}
-(id)fill;
-(id)stroke;
-(float)defaultFontSize;
-(id)diagram;
-(id)shapeStyle;
-(id)plainText;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)styleMatrix;
-(id)initWithPoint:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4 ;
-(id)transformPresentationName;
-(id)transformForPresentationWithName:(id)arg1 ;
-(void)setPresentationName:(id)arg1 ;
-(void)applyDiagramStyleToShapeProperties;
-(void)mapTextAt:(id)arg1 withBounds:(id)arg2 isCentered:(BOOL)arg3 includeChildren:(BOOL)arg4 withState:(id)arg5 ;
-(void)renderShapeAsBackgroundInBounds:(id)arg1 ;
-(void)mapStyledRectangle:(CGRect)arg1 at:(id)arg2 withState:(id)arg3 ;
-(void)mapChlidrenAt:(id)arg1 withState:(id)arg2 ;
-(id)presentationName;
-(id)presentationWithName:(id)arg1 ;
-(id)baseTextListStyleWithBounds:(id)arg1 isCentered:(BOOL)arg2 ;
-(void)mapPointTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4 ;
-(void)mapChildrenTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4 ;
-(void)mapSiblingTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4 ;
@end

