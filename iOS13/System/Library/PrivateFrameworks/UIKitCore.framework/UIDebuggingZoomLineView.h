/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface UIDebuggingZoomLineView : UIView {

	unsigned long long _direction;
	UILabel* _lineLabel;
	CGPoint _start;
	CGPoint _end;
	CGRect _rect;

}

@property (nonatomic,retain) UILabel * lineLabel;                       //@synthesize lineLabel=_lineLabel - In the implementation block
@property (assign,nonatomic) CGPoint start;                             //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) CGPoint end;                               //@synthesize end=_end - In the implementation block
@property (assign,nonatomic) unsigned long long direction;              //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) CGRect rect;                               //@synthesize rect=_rect - In the implementation block
-(CGPoint)start;
-(CGPoint)end;
-(unsigned long long)direction;
-(void)setDirection:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGRect)rect;
-(void)setStart:(CGPoint)arg1 ;
-(void)setEnd:(CGPoint)arg1 ;
-(void)setRect:(CGRect)arg1 ;
-(UILabel *)lineLabel;
-(void)setLineLabel:(UILabel *)arg1 ;
-(void)updateLabelFrame;
@end

