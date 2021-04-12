/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned short)direction;
-(unsigned short)previousState;
-(id)slices;
-(unsigned short)layer;
-(unsigned short)presentationState;
-(SCD_Struct_CS11)contentInsets;
-(unsigned short)size;
-(double)scale;
-(id)description;
-(unsigned short)dimension1;
-(unsigned long long)numberOfSlices;
-(id)stringForState:(unsigned short)arg1 ;
-(id)referenceImage;
-(unsigned short)dimension2;
-(unsigned short)drawingLayer;
-(id)stringForValue:(unsigned short)arg1 ;
-(CGRect*)sliceRects;
-(id)initWithCoreUIOptions:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(CGRect)alignmentRectangle;
-(CGRect)edgeInsets:(BOOL)arg1 ;
-(id)coreUIOptions;
-(long long)rowSlices;
-(id)defaultTemplateName;
-(long long)columnSlices;
-(CGPoint)renditionCoordinatesForPartFeatures:(long long)arg1 ;
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
-(id)scaleLocalizedString;
-(unsigned short)keyScale;
-(unsigned short)state;
-(unsigned short)identifier;
-(unsigned short)appearance;
-(unsigned short)localization;
-(unsigned short)previousValue;
-(unsigned short)value;
-(CUIPSDGradient *)gradient;
-(void)dealloc;
@end

