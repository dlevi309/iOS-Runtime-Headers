/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class CAMModeDialItem, UIImageView;

@interface CAMModeIndicatorView : UIControl {

	long long _selectedMode;
	CAMModeDialItem* __modeTextView;
	UIImageView* __symbolView;

}

@property (nonatomic,readonly) CAMModeDialItem * _modeTextView;              //@synthesize _modeTextView=__modeTextView - In the implementation block
@property (nonatomic,readonly) UIImageView * _symbolView;                    //@synthesize _symbolView=__symbolView - In the implementation block
@property (assign,nonatomic) long long selectedMode;                         //@synthesize selectedMode=_selectedMode - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)_symbolSize;
-(void)setSelectedMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setSelectedMode:(long long)arg1 ;
-(long long)selectedMode;
-(CAMModeDialItem *)_modeTextView;
-(UIImageView *)_symbolView;
-(void)_updateModeIndicatorAnimated:(BOOL)arg1 ;
@end

