/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, NSArray;

@interface HKElectrocardiogramWaveformView : UIView {

	double _lineWidth;
	UIColor* _lineColor;
	NSArray* _shapeLayers;
	CGRect _pathBounds;
	CGRect _lastPathBounds;

}

@property (nonatomic,retain) NSArray * shapeLayers;              //@synthesize shapeLayers=_shapeLayers - In the implementation block
@property (assign,nonatomic) CGRect pathBounds;                  //@synthesize pathBounds=_pathBounds - In the implementation block
@property (assign,nonatomic) CGRect lastPathBounds;              //@synthesize lastPathBounds=_lastPathBounds - In the implementation block
@property (assign,nonatomic) double lineWidth;                   //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,retain) UIColor * lineColor;                //@synthesize lineColor=_lineColor - In the implementation block
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tintColorDidChange;
-(void)setLineColor:(UIColor *)arg1 ;
-(UIColor *)lineColor;
-(void)setPaths:(id)arg1 ;
-(CGRect)pathBounds;
-(NSArray *)shapeLayers;
-(id)createShapeLayerWithPath:(id)arg1 ;
-(void)setLastPathBounds:(CGRect)arg1 ;
-(void)setPathBounds:(CGRect)arg1 ;
-(void)setShapeLayers:(NSArray *)arg1 ;
-(CGRect)lastPathBounds;
@end

