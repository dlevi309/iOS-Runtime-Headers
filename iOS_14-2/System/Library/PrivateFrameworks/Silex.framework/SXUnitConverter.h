/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@interface SXUnitConverter : NSObject {

	double _componentWidth;
	double _parentWidth;
	double _documentGutter;
	double _documentMargin;
	double _contentScaleFactor;
	CGSize _viewportSize;

}
-(id)initWithComponentWidth:(double)arg1 parentWidth:(double)arg2 documentGutter:(double)arg3 documentMargin:(double)arg4 viewportSize:(CGSize)arg5 contentScaleFactor:(double)arg6 ;
-(double)convertValueToPoints:(SXConvertibleValue)arg1 ;
@end

