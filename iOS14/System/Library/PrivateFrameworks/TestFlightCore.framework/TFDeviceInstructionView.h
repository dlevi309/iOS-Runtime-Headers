/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/

#import <TestFlightCore/TestFlightCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface TFDeviceInstructionView : UIView {

	UIImageView* _deviceImageView;

}

@property (nonatomic,readonly) UIImageView * deviceImageView;              //@synthesize deviceImageView=_deviceImageView - In the implementation block
+(id)backgroundColor;
+(double)cornerRadius;
+(UIEdgeInsets)imageLayoutInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)displayDeviceImage:(id)arg1 inOrientation:(long long)arg2 ;
-(UIImageView *)deviceImageView;
-(void)updateCurrentDeviceImageToOrientation:(long long)arg1 ;
@end

