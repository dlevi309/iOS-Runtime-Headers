/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <UIKitCore/UIView.h>

@interface SSFlashView : UIView {

	unsigned long long _style;

}

@property (assign,nonatomic) unsigned long long style;              //@synthesize style=_style - In the implementation block
+(double)expectedAnimationDurationForStyle:(unsigned long long)arg1 ;
+(id)flashViewForStyle:(unsigned long long)arg1 ;
+(Class)_flashViewClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(void)flashWithCompletion:(/*^block*/id)arg1 ;
@end

