/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(long long)position;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)fillColor;
-(void)drawRect:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setPosition:(long long)arg1 ;
-(void)setStrokeColor:(UIColor *)arg1 ;
@end

