/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <NotesUI/ICCircleLayer.h>

@interface ICArcLayer : ICCircleLayer {

	BOOL _drawClockwise;
	double _startAngle;
	double _endAngle;

}

@property (assign,nonatomic) double startAngle;               //@synthesize startAngle=_startAngle - In the implementation block
@property (assign,nonatomic) double endAngle;                 //@synthesize endAngle=_endAngle - In the implementation block
@property (assign,nonatomic) BOOL drawClockwise;              //@synthesize drawClockwise=_drawClockwise - In the implementation block
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setStartAngle:(double)arg1 ;
-(double)startAngle;
-(double)endAngle;
-(void)setEndAngle:(double)arg1 ;
-(void)setDrawClockwise:(BOOL)arg1 ;
-(BOOL)drawClockwise;
@end

