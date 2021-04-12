/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class NSDictionary, CUIPSDGradient;

@interface CUIThemeSchemaRendition : CUIThemeRendition {

	NSDictionary* cuiInfo;
	unsigned long long _nimages;
	CGImage* _image[9];
	CGRect _layoutRects[9];
	CGSize _intrinsicSize;
	CGRect _elementRect;
	long long _columnSlices;
	long long _rowSlices;
	SCD_Struct_CS11 _contentInsets;
	CUIPSDGradient* _gradient;

}

@property (nonatomic,readonly) unsigned long long numberOfSlices; 
@property (nonatomic,readonly) CGRect* sliceRects; 
@property (nonatomic,readonly) CUIPSDGradient * gradient; 
-(void)dealloc;
-(id)description;
-(unsigned short)identifier;
-(unsigned short)size;
-(unsigned short)value;
-(unsigned short)state;
-(double)scale;
-(unsigned short)direction;
-(unsigned short)previousState;
-(unsigned short)appearance;
-(unsigned short)layer;
-(SCD_Struct_CS11)contentInsets;
-(id)stringForState:(unsigned short)arg1 ;
-(CUIPSDGradient *)gradient;
-(id)slices;
-(unsigned short)previousValue;
-(unsigned short)drawingLayer;
-(unsigned long long)numberOfSlices;
-(id)initWithCoreUIOptions:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(id)referenceImage;
-(unsigned short)dimension1;
-(unsigned short)presentationState;
-(unsigned short)dimension2;
-(unsigned short)keyScale;
-(id)stringForValue:(unsigned short)arg1 ;
-(unsigned short)look;
-(CGRect*)sliceRects;
-(id)initWithCoreUIOptions:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(CGRect)alignmentRectangle;
-(CGRect)edgeInsets:(BOOL)arg1 ;
-(id)coreUIOptions;
-(id)defaultTemplateName;
-(long long)columnSlices;
-(long long)rowSlices;
-(CGPoint)renditionCoordinatesForPartFeatures:(long long)arg1 ;
-(unsigned short)localization;
-(id)typeLocalizedString;
-(id)stateLocalizedString;
-(id)previousStateLocalizedString;
-(id)directionLocalizedString;
-(id)valueLocalizedString;
-(id)previousValueLocalizedString;
-(id)sizeLocalizedString;
-(id)presentationStateLocalizedString;
-(id)dimension1LocalizedString;
-(id)dimension2LocalizedString;
-(id)drawingLayerLocalizedString;
-(id)lookLocalizedString;
-(id)scaleLocalizedString;
@end

