/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,readonly) double componentWidth;                  //@synthesize componentWidth=_componentWidth - In the implementation block
@property (nonatomic,readonly) double parentWidth;                     //@synthesize parentWidth=_parentWidth - In the implementation block
@property (nonatomic,readonly) double documentGutter;                  //@synthesize documentGutter=_documentGutter - In the implementation block
@property (nonatomic,readonly) double documentMargin;                  //@synthesize documentMargin=_documentMargin - In the implementation block
@property (nonatomic,readonly) CGSize viewportSize;                    //@synthesize viewportSize=_viewportSize - In the implementation block
@property (nonatomic,readonly) double contentScaleFactor;              //@synthesize contentScaleFactor=_contentScaleFactor - In the implementation block
-(double)contentScaleFactor;
-(CGSize)viewportSize;
-(double)convertValueToPoints:(SXConvertibleValue)arg1 ;
-(double)componentWidth;
-(double)convertViewportHeightToPoints:(double)arg1 ;
-(double)convertViewportWidthToPoints:(double)arg1 ;
-(double)convertViewportMinToPoints:(double)arg1 ;
-(double)convertViewportMaxToPoints:(double)arg1 ;
-(double)convertColumnGutterToPoints:(double)arg1 ;
-(double)convertComponentWidthToPoints:(double)arg1 ;
-(double)convertDocumentMarginToPoints:(double)arg1 ;
-(double)convertParentWidthToPoints:(double)arg1 ;
-(id)initWithComponentWidth:(double)arg1 parentWidth:(double)arg2 documentGutter:(double)arg3 documentMargin:(double)arg4 viewportSize:(CGSize)arg5 contentScaleFactor:(double)arg6 ;
-(double)parentWidth;
-(double)documentGutter;
-(double)documentMargin;
@end

