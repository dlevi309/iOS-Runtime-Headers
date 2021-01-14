/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

@class UIColor;


@protocol NTKLegibilityView <NSObject>
@property (assign,nonatomic) BOOL legibilityEnabled; 
@property (assign,nonatomic) double shadowBlur; 
@property (nonatomic,retain) UIColor * shadowColor; 
@required
-(void)setShadowColor:(id)arg1;
-(UIColor *)shadowColor;
-(double)shadowBlur;
-(void)setShadowBlur:(double)arg1;
-(BOOL)legibilityEnabled;
-(void)setLegibilityEnabled:(BOOL)arg1;

@end

