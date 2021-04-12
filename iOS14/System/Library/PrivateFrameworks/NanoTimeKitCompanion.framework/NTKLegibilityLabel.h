/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UILabel.h>
#import <libobjc.A.dylib/NTKLegibilityView.h>

@class UIColor, NSString;

@interface NTKLegibilityLabel : UILabel <NTKLegibilityView> {

	double _sBlur;
	UIColor* _sColor;
	BOOL _legibilityEnabled;

}

@property (assign,nonatomic) BOOL legibilityEnabled;                //@synthesize legibilityEnabled=_legibilityEnabled - In the implementation block
@property (assign,nonatomic) double shadowBlur; 
@property (nonatomic,retain) UIColor * shadowColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShadowColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)_contentInsetsFromFonts;
-(UIColor *)shadowColor;
-(void)_updateShadow;
-(double)shadowBlur;
-(void)setShadowBlur:(double)arg1 ;
-(BOOL)legibilityEnabled;
-(void)setLegibilityEnabled:(BOOL)arg1 ;
@end

