/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/WorldClockComplications.bundle/WorldClockComplications
*/

#import <WorldClockComplications/WorldClockComplications-Structs.h>
#import <WorldClockComplications/NWCMapLocationView.h>

@class UIColor;

@interface NWCHighlightedMapLocationView : NWCMapLocationView {

	UIColor* _fillColor;
	double _strokeWidth;

}

@property (assign,nonatomic) double strokeWidth;               //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)drawRect:(CGRect)arg1 ;
-(double)strokeWidth;
-(void)setStrokeWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 fillColor:(id)arg2 andStrokeWidth:(double)arg3 ;
@end

