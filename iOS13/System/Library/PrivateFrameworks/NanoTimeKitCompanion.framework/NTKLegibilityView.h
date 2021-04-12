/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

@class UIColor;


@protocol NTKLegibilityView <NSObject>
@property (assign,nonatomic) BOOL legibilityEnabled; 
@property (assign,nonatomic) double shadowBlur; 
@property (nonatomic,retain) UIColor * shadowColor; 
@required
-(UIColor *)shadowColor;
-(void)setShadowColor:(id)arg1;
-(double)shadowBlur;
-(void)setShadowBlur:(double)arg1;
-(void)setLegibilityEnabled:(BOOL)arg1;
-(BOOL)legibilityEnabled;

@end

