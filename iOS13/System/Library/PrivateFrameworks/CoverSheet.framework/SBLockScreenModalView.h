/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

@class _UILegibilitySettings, NSString, UIColor, UIImage;


@protocol SBLockScreenModalView <NSObject>
@property (assign,nonatomic,__weak) id<SBLockScreenModalViewDelegate> delegate; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) UIColor * titleTextColor; 
@property (nonatomic,copy) NSString * subtitleText; 
@property (nonatomic,copy) NSString * secondarySubtitleText; 
@property (nonatomic,copy) NSString * primaryActionButtonText; 
@property (nonatomic,retain) UIColor * primaryActionButtonBackgroundColor; 
@property (nonatomic,copy) NSString * secondaryActionButtonText; 
@property (nonatomic,copy) UIColor * secondaryActionButtonTextColor; 
@property (nonatomic,copy) NSString * footerText; 
@property (nonatomic,retain) UIImage * image; 
@required
-(id<SBLockScreenModalViewDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(UIImage *)image;
-(void)setImage:(id)arg1;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(id)arg1;
-(void)setTitleText:(id)arg1;
-(NSString *)titleText;
-(NSString *)subtitleText;
-(void)setSubtitleText:(id)arg1;
-(NSString *)footerText;
-(UIColor *)titleTextColor;
-(void)setTitleTextColor:(id)arg1;
-(void)setSecondarySubtitleText:(id)arg1;
-(NSString *)secondarySubtitleText;
-(void)setFooterText:(id)arg1;
-(NSString *)primaryActionButtonText;
-(void)setPrimaryActionButtonText:(id)arg1;
-(UIColor *)primaryActionButtonBackgroundColor;
-(void)setPrimaryActionButtonBackgroundColor:(id)arg1;
-(NSString *)secondaryActionButtonText;
-(void)setSecondaryActionButtonText:(id)arg1;
-(UIColor *)secondaryActionButtonTextColor;
-(void)setSecondaryActionButtonTextColor:(id)arg1;

@end

