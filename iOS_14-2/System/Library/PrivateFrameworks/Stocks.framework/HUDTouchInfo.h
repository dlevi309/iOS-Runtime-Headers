/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


#import <Stocks/Stocks-Structs.h>
@class UITouch, UIImageView, UIView;

@interface HUDTouchInfo : NSObject {

	UITouch* _touch;
	UIImageView* _dot;
	UIView* _bar;
	CGPoint _plottedLocation;
	CGPoint _locationInHUD;
	SCD_Struct_HU8 _stockValue;

}

@property (assign,nonatomic) SCD_Struct_HU8 stockValue;              //@synthesize stockValue=_stockValue - In the implementation block
@property (assign,nonatomic) CGPoint plottedLocation;                //@synthesize plottedLocation=_plottedLocation - In the implementation block
@property (assign,nonatomic) CGPoint locationInHUD;                  //@synthesize locationInHUD=_locationInHUD - In the implementation block
@property (assign,nonatomic,__weak) UITouch * touch;                 //@synthesize touch=_touch - In the implementation block
@property (nonatomic,retain) UIImageView * dot;                      //@synthesize dot=_dot - In the implementation block
@property (nonatomic,retain) UIView * bar;                           //@synthesize bar=_bar - In the implementation block
-(UIImageView *)dot;
-(UIView *)bar;
-(UITouch *)touch;
-(void)setDot:(UIImageView *)arg1 ;
-(void)setTouch:(UITouch *)arg1 ;
-(id)description;
-(void)setBar:(UIView *)arg1 ;
-(SCD_Struct_HU8)stockValue;
-(void)setStockValue:(SCD_Struct_HU8)arg1 ;
-(CGPoint)plottedLocation;
-(void)setPlottedLocation:(CGPoint)arg1 ;
-(CGPoint)locationInHUD;
-(void)setLocationInHUD:(CGPoint)arg1 ;
@end

