/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(double)cornerRadius;
-(void)drawRect:(CGRect)arg1 ;
-(unsigned long long)corners;
-(void)setCorners:(unsigned long long)arg1 ;
-(UIColor *)cornerColor;
-(void)_setCorners:(unsigned long long)arg1 ;
@end

