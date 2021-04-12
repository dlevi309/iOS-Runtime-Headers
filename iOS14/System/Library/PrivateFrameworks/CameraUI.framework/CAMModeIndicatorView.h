/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSelectedMode:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelectedMode:(long long)arg1 animated:(BOOL)arg2 ;
-(CGSize)_symbolSize;
-(void)layoutSubviews;
-(long long)selectedMode;
-(CAMModeDialItem *)_modeTextView;
-(UIImageView *)_symbolView;
-(void)_updateModeIndicatorAnimated:(BOOL)arg1 ;
@end

