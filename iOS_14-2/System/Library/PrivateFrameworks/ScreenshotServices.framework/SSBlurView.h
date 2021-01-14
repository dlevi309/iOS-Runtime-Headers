/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <UIKitCore/UIView.h>

@interface SSBlurView : UIView

@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double blurRadius; 
+(Class)layerClass;
-(void)setBlurRadius:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(double)blurRadius;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(id)_backdropLayer;
@end

