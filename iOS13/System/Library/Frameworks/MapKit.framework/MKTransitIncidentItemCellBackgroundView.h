/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface MKTransitIncidentItemCellBackgroundView : UIView {

	double _scale;
	double _cornerRadius;
	long long _position;
	UIColor* _fillColor;
	UIColor* _strokeColor;

}

@property (assign,nonatomic) long long position;                 //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) UIColor * strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
-(long long)position;
-(void)setPosition:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(UIColor *)fillColor;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
@end

