/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMLineShapeBuilder.h>

@class OADPath;

@interface CMFreeFormShapeBuilder : CMLineShapeBuilder {

	OADPath* _path;
	CGSize _space;

}
-(void)setPath:(id)arg1 ;
-(CGAffineTransform)affineTransform;
-(void)setSpace:(CGSize)arg1 ;
-(CGPathRef)copyShapeWithTransform:(CGAffineTransform)arg1 ;
-(CGPoint)_renderPathElement:(id)arg1 withTransform:(CGAffineTransform)arg2 inPath:(CGPathRef)arg3 ;
@end

