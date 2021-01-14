/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

