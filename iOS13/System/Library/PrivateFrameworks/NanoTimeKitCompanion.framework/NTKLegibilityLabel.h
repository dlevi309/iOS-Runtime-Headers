/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL legibilityEnabled;                //@synthesize legibilityEnabled=_legibilityEnabled - In the implementation block
@property (assign,nonatomic) double shadowBlur; 
@property (nonatomic,retain) UIColor * shadowColor; 
-(UIColor *)shadowColor;
-(void)setShadowColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)_contentInsetsFromFonts;
-(double)shadowBlur;
-(void)setShadowBlur:(double)arg1 ;
-(void)_updateShadow;
-(void)setLegibilityEnabled:(BOOL)arg1 ;
-(BOOL)legibilityEnabled;
@end

