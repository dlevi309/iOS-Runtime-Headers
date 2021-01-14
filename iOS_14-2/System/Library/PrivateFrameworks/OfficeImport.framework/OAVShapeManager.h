/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)shadowAlpha;
-(xmlNode*)shape;
-(BOOL)isShadowed;
-(id)shadowColor;
-(BOOL)isFilled;
-(id)limo;
-(id)shadowType;
-(id)path;
-(BOOL)isImage;
-(id)fillType;
-(unsigned short)type;
-(float)strokeWidth;
-(OAVTextBoxInsets)textInsets;
-(id)points;
-(float)strokeMiterLimit;
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
-(id)strokeCompoundType;
-(id)strokeCapStyle;
-(id)strokeJoinStyle;
-(id)strokeStartArrowType;
-(id)strokeStartArrowWidth;
-(id)strokeStartArrowLength;
-(id)strokeEndArrowType;
-(id)strokeEndArrowWidth;
-(id)strokeEndArrowLength;
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
-(BOOL)autoInsets;
-(id)strokeDashStyle;
-(id)textLayoutFlow;
-(id)textAltLayoutFlow;
-(BOOL)fitShapeToText;
-(id)textWrapStyle;
@end

