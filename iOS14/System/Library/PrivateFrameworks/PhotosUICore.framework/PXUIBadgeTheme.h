/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class UIImageSymbolConfiguration, UIColor, CAFilter, UIFont, UIBlurEffect;


@protocol PXUIBadgeTheme <NSObject>
@property (nonatomic,readonly) UIImageSymbolConfiguration * imageConfiguration; 
@property (nonatomic,readonly) double imageAlpha; 
@property (nonatomic,readonly) UIColor * imageTintColor; 
@property (nonatomic,readonly) CAFilter * imageCompositingFilter; 
@property (nonatomic,readonly) UIFont * labelFont; 
@property (nonatomic,readonly) double labelAlpha; 
@property (nonatomic,readonly) UIColor * labelTextColor; 
@property (nonatomic,readonly) CAFilter * labelCompositingFilter; 
@property (nonatomic,readonly) Class backgroundViewClass; 
@property (nonatomic,readonly) double backgroundCornerRadius; 
@property (nonatomic,readonly) double backgroundBorderWidth; 
@property (nonatomic,readonly) double backgroundAlpha; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * backgroundBorderColor; 
@property (nonatomic,readonly) UIBlurEffect * backgroundBlurEffect; 
@required
-(UIFont *)labelFont;
-(double)backgroundCornerRadius;
-(UIColor *)imageTintColor;
-(UIColor *)backgroundBorderColor;
-(UIColor *)labelTextColor;
-(Class)backgroundViewClass;
-(UIImageSymbolConfiguration *)imageConfiguration;
-(double)imageAlpha;
-(UIColor *)backgroundColor;
-(double)backgroundAlpha;
-(CAFilter *)labelCompositingFilter;
-(double)labelAlpha;
-(double)backgroundBorderWidth;
-(UIBlurEffect *)backgroundBlurEffect;
-(CAFilter *)imageCompositingFilter;

@end

