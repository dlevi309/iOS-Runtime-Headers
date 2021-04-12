/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, NSString;

@interface ASCBorderView : UIView {

	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;                            //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,retain) NSString * cornerCurve; 
@property (assign,nonatomic) unsigned long long cornerMask; 
-(double)width;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)color;
-(void)setWidth:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)cornerRadius;
-(void)setColor:(UIColor *)arg1 ;
-(NSString *)cornerCurve;
-(id)initWithCoder:(id)arg1 ;
-(void)setCornerCurve:(NSString *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)cornerMask;
-(void)setCornerMask:(unsigned long long)arg1 ;
-(void)updateBorderColor;
@end

