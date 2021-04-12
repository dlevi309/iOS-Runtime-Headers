/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PNPDeviceStateConfigurable.h>

@class PNPDeviceState, UIView, UILabel, NSString, UIColor;

@interface PNPStackedPillView : UIView <PNPDeviceStateConfigurable> {

	PNPDeviceState* _deviceState;
	UIView* _contentAreaView;
	UILabel* _topLabel;
	UILabel* _bottomLabel;
	NSString* _topLabelString;
	NSString* _bottomLabelString;
	UIColor* _bottomLabelColor;

}

@property (nonatomic,retain) UIColor * bottomLabelColor;              //@synthesize bottomLabelColor=_bottomLabelColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) PNPDeviceState * deviceState; 
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(PNPDeviceState *)deviceState;
-(void)setDeviceState:(PNPDeviceState *)arg1 ;
-(void)_configureConstraints;
-(id)initWithFrame:(CGRect)arg1 topString:(id)arg2 bottomString:(id)arg3 ;
-(UIColor *)bottomLabelColor;
-(void)setBottomLabelColor:(UIColor *)arg1 ;
@end

