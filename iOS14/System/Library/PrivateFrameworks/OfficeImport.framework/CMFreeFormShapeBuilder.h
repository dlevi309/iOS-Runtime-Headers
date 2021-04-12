/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

