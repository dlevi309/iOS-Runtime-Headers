/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <UIKitCore/UIView.h>

@interface SSBlurView : UIView

@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double blurRadius; 
+(Class)layerClass;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBlurRadius:(double)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)_backdropLayer;
-(double)blurRadius;
@end

