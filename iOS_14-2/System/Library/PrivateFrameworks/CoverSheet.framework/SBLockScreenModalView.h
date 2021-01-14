/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImage:(id)arg1;
-(void)setFooterText:(id)arg1;
-(id<SBLockScreenModalViewDelegate>)delegate;
-(void)setLegibilitySettings:(id)arg1;
-(NSString *)titleText;
-(UIImage *)image;
-(void)setTitleText:(id)arg1;
-(void)setSubtitleText:(id)arg1;
-(NSString *)subtitleText;
-(void)setDelegate:(id)arg1;
-(_UILegibilitySettings *)legibilitySettings;
-(NSString *)footerText;
-(void)setSecondarySubtitleText:(id)arg1;
-(NSString *)secondarySubtitleText;
-(UIColor *)titleTextColor;
-(void)setTitleTextColor:(id)arg1;
-(NSString *)primaryActionButtonText;
-(void)setPrimaryActionButtonText:(id)arg1;
-(UIColor *)primaryActionButtonBackgroundColor;
-(void)setPrimaryActionButtonBackgroundColor:(id)arg1;
-(NSString *)secondaryActionButtonText;
-(void)setSecondaryActionButtonText:(id)arg1;
-(UIColor *)secondaryActionButtonTextColor;
-(void)setSecondaryActionButtonTextColor:(id)arg1;

@end

