/*
* Generated on Monday, March 1, 2021 at 2:35:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface ACM2SVDigitCodeView : UIView {

	long long _fillType;
	UIColor* _fillColor;

}

@property (assign,nonatomic) long long fillType;               //@synthesize fillType=_fillType - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)fillColor;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(long long)fillType;
-(void)setFillType:(long long)arg1 ;
@end

