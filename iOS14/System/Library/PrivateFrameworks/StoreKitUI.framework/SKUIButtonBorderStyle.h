/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKColor, NSString;

@interface SKUIButtonBorderStyle : NSObject <NSCopying> {

	IKColor* _borderColor;
	double _borderWidth;
	UIEdgeInsets _contentInset;
	IKCornerRadii _cornerRadii;
	IKColor* _fillColor;
	NSString* _namedCornerStyle;

}

@property (nonatomic,copy) IKColor * borderColor;                    //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double borderWidth;                     //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) IKCornerRadii cornerRadii;              //@synthesize cornerRadii=_cornerRadii - In the implementation block
@property (nonatomic,copy) IKColor * fillColor;                      //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,copy) NSString * namedCornerStyle;              //@synthesize namedCornerStyle=_namedCornerStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;              //@synthesize contentInset=_contentInset - In the implementation block
-(void)setFillColor:(IKColor *)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(IKColor *)fillColor;
-(IKColor *)borderColor;
-(double)borderWidth;
-(void)setCornerRadii:(IKCornerRadii)arg1 ;
-(IKCornerRadii)cornerRadii;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBorderColor:(IKColor *)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(BOOL)_usesBackgroundWithAlpha:(id)arg1 ;
-(id)initWithElementStyle:(id)arg1 ;
-(id)bezierPathWithBounds:(CGRect)arg1 ;
-(NSString *)namedCornerStyle;
-(void)setNamedCornerStyle:(NSString *)arg1 ;
@end

