/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>

@class SXUnitConverter, UIColor;

@interface SXDataTableBorder : SXJSONObject {

	double _width;
	SXUnitConverter* unitConverter;

}

@property (nonatomic,readonly) SXConvertibleValue actualWidth; 
@property (nonatomic,readonly) double width;                                //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,retain) SXUnitConverter * unitConverter; 
+(id)jsonPropertyNameForObjCPropertyName:(id)arg1 ;
-(UIColor *)color;
-(SXConvertibleValue)actualWidth;
-(double)width;
-(SXUnitConverter *)unitConverter;
-(void)setUnitConverter:(SXUnitConverter *)arg1 ;
@end

