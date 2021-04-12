/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OABFillPropertiesManager.h>

@protocol OABFillPropertiesManager <OABColorPropertiesManager>
@required
-(int)fillType;
-(int)fillFgAlpha;
-(int)fillAngle;
-(int)fillFocusLeft;
-(int)fillFocusTop;
-(int)fillFocusRight;
-(int)fillFocusBottom;
-(unsigned)fillBlipID;
-(id)fillBlipName;
-(int)fillBgAlpha;
-(int)fillFocus;
-(const EshTablePropVal<EshGradientStop>Ref)fillGradientColors;

@end


@protocol OABPropertiesManager;
@class NSString;

@interface OABFillPropertiesManager : NSObject <OABFillPropertiesManager> {

	const EshFill* mFill;
	int mShapeType;
	id<OABPropertiesManager> mMasterManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EshColor)shadowColor;
-(BOOL)isFilled;
-(int)fillType;
-(EshColor)fillFgColor;
-(BOOL)isStroked;
-(EshColor)strokeFgColor;
-(EshColor)fillBgColor;
-(EshColor)strokeBgColor;
-(int)fillFgAlpha;
-(int)fillAngle;
-(int)fillFocusLeft;
-(int)fillFocusTop;
-(int)fillFocusRight;
-(int)fillFocusBottom;
-(unsigned)fillBlipID;
-(id)fillBlipName;
-(EshBlip*)fillBlipDataReference;
-(int)fillBgAlpha;
-(int)fillFocus;
-(const EshTablePropVal<EshGradientStop>Ref)fillGradientColors;
-(id)initWithFill:(const EshFill*)arg1 shapeType:(int)arg2 masterShape:(EshShapeRef)arg3 ;
@end

