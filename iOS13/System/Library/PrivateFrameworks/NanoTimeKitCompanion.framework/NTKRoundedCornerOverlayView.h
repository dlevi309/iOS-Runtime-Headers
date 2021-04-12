/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, CLKDevice;

@interface NTKRoundedCornerOverlayView : UIView {

	double _cornerRadius;
	UIImageView* _upperLeftCorner;
	UIImageView* _upperRightCorner;
	UIImageView* _bottomLeftCorner;
	UIImageView* _bottomRightCorner;
	CLKDevice* _device;

}
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 forDeviceCornerRadius:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 cornerRadius:(double)arg3 ;
@end

