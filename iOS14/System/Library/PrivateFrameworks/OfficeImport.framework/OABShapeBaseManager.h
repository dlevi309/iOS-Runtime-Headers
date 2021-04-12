/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OABFillPropertiesManager.h>
#import <libobjc.A.dylib/OABBasePropertiesManager.h>

@class NSString;

@interface OABShapeBaseManager : OABFillPropertiesManager <OABBasePropertiesManager> {

	EshShapeBase* mShapeBase;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)shadowAlpha;
-(BOOL)isShadowed;
-(EshColor)shadowColor;
-(int)shadowType;
-(int)shadowOffsetY;
-(int)strokeWidth;
-(int)shadowOffsetX;
-(int)strokeMiterLimit;
-(BOOL)isStroked;
-(EshColor)strokeFgColor;
-(EshColor)strokeBgColor;
-(id)initWithShapeBase:(EshShapeBase*)arg1 shapeType:(int)arg2 masterShape:(EshShapeRef)arg3 ;
-(int)strokeFillType;
-(unsigned)strokeFillBlipID;
-(id)strokeFillBlipName;
-(EshBlip*)strokeFillBlipDataReference;
-(int)strokeFgAlpha;
-(int)strokeCompoundType;
-(int)strokePresetDash;
-(const EshTablePropVal<int>Ref)strokeCustomDash;
-(int)strokeCapStyle;
-(int)strokeJoinStyle;
-(int)strokeStartArrowType;
-(int)strokeStartArrowWidth;
-(int)strokeStartArrowLength;
-(int)strokeEndArrowType;
-(int)strokeEndArrowWidth;
-(int)strokeEndArrowLength;
-(int)shadowSoftness;
@end

