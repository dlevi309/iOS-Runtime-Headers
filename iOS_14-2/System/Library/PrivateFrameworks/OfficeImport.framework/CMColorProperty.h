/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMProperty.h>

@class OITSUColor;

@interface CMColorProperty : CMProperty {

	OITSUColor* wdValue;

}
+(id)cssStringFromOADColor:(id)arg1 ;
+(float)transformedAlphaFromOADColor:(id)arg1 ;
+(id)nsColorFromShading:(id)arg1 ;
+(id)resolveStyleColorWithPercentage:(float)arg1 shading:(id)arg2 ;
+(id)resolveStyleColorWithPercentage:(float)arg1 foregroundColor:(id)arg2 backgroundColor:(id)arg3 ;
+(float)resolveColorValueWithPercentage:(float)arg1 foregroundComponent:(float)arg2 backgroundComponent:(float)arg3 ;
+(id)nsColorFromOADFill:(id)arg1 state:(id)arg2 ;
+(id)nsColorFromOADColor:(id)arg1 state:(id)arg2 ;
+(id)cssStringFromRed:(float)arg1 green:(float)arg2 blue:(float)arg3 ;
+(id)cssStringFromTSUColor:(id)arg1 ;
+(CGColorRef)copyCGColorFromOADColor:(id)arg1 state:(id)arg2 ;
+(CGColorRef)copyCGColorFromOADFill:(id)arg1 state:(id)arg2 ;
+(id)cssStringFromOADGradientFill:(id)arg1 state:(id)arg2 ;
-(id)initWithColor:(id)arg1 ;
-(BOOL)isEqualTo:(id)arg1 ;
-(id)value;
-(id)cssStringForName:(id)arg1 ;
-(id)cssString;
@end

