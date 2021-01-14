/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)direction;
-(CGPoint)end;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)rect;
-(void)setDirection:(unsigned long long)arg1 ;
-(CGPoint)start;
-(void)setRect:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setEnd:(CGPoint)arg1 ;
-(UILabel *)lineLabel;
-(void)setStart:(CGPoint)arg1 ;
-(void)setLineLabel:(UILabel *)arg1 ;
-(void)updateLabelFrame;
@end

