/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKWorldClockMapLocationView.h>

@class UIColor;

@interface NTKWorldClockHighlightedMapLocationView : NTKWorldClockMapLocationView {

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

