/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFillColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFillType:(long long)arg1 ;
-(UIColor *)fillColor;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(long long)fillType;
-(void)dealloc;
@end

