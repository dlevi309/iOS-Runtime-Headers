/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/

#import <CameraEditKit/CameraEditKit-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UIColor;

@interface CEKWheelScrubberRoundedCornerOverlayView : UICollectionReusableView {

	UIColor* _cornerColor;
	double _cornerRadius;
	unsigned long long _corners;

}

@property (nonatomic,readonly) UIColor * cornerColor;                 //@synthesize cornerColor=_cornerColor - In the implementation block
@property (nonatomic,readonly) double cornerRadius;                   //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) unsigned long long corners;              //@synthesize corners=_corners - In the implementation block
-(unsigned long long)corners;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)cornerRadius;
-(void)drawRect:(CGRect)arg1 ;
-(void)setCorners:(unsigned long long)arg1 ;
-(UIColor *)cornerColor;
-(void)_setCorners:(unsigned long long)arg1 ;
@end

