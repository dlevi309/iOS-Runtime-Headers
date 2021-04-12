/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OCPPackagePart, NSDictionary, OAVReadState;

@interface OAVShapeManager : NSObject {

	xmlNode* mShape;
	unsigned short mType;
	OCPPackagePart* mPackagePart;
	NSDictionary* mShapeStyle;
	NSDictionary* mTextBoxStyle;
	OAVReadState* mOAVState;

}
-(unsigned short)type;
-(id)path;
-(xmlNode*)shape;
-(id)shadowColor;
-(id)points;
-(float)shadowAlpha;
-(BOOL)isImage;
-(float)strokeWidth;
-(OAVTextBoxInsets)textInsets;
-(BOOL)isFilled;
-(id)fillType;
-(id)shadowType;
-(id)textRotation;
-(id)textAnchor;
-(id)packagePart;
-(id)oavState;
-(id)fillFgColor;
-(BOOL)isStroked;
-(id)strokeFgColor;
-(id)fillBgColor;
-(id)strokeBgColor;
-(float)fillFgAlpha;
-(float)fillAngle;
-(float)fillBgAlpha;
-(float)fillFocus;
-(id)fillGradientColors;
-(id)strokeFillType;
-(float)strokeFgAlpha;
-(float)strokeMiterLimit;
-(id)strokeCompoundType;
-(id)strokeCapStyle;
-(id)strokeJoinStyle;
-(id)strokeStartArrowType;
-(id)strokeStartArrowWidth;
-(id)strokeStartArrowLength;
-(id)strokeEndArrowType;
-(id)strokeEndArrowWidth;
-(id)strokeEndArrowLength;
-(BOOL)isShadowed;
-(id)limo;
-(BOOL)isFillOK;
-(BOOL)isStrokeOK;
-(BOOL)isShadowOK;
-(id)imageFillId;
-(id)imageRelId;
-(id)movieRelId;
-(id)initWithShape:(xmlNode*)arg1 type:(unsigned short)arg2 packagePart:(id)arg3 state:(id)arg4 ;
-(BOOL)isPolyline;
-(BOOL)isWordArt;
-(id)textBodyRects;
-(id)imageFillTitle;
-(CGPoint)shadowOffsets;
-(id)textWrapStyle;
-(BOOL)autoInsets;
-(id)textLayoutFlow;
-(id)textAltLayoutFlow;
-(BOOL)fitShapeToText;
-(id)strokeDashStyle;
@end

