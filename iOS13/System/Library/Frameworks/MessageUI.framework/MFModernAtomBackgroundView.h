/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, MFModernAtomView;

@interface MFModernAtomBackgroundView : UIView {

	UIView* _selectedView;
	unsigned long long _selectionStyle;
	UIView* _separatorView;
	int _separatorStyle;
	BOOL _selected;
	double _scalingFactor;
	MFModernAtomView* _hostAtomView;

}

@property (nonatomic,readonly) UIView * selectedView;                             //@synthesize selectedView=_selectedView - In the implementation block
@property (nonatomic,readonly) UIView * separatorView;                            //@synthesize separatorView=_separatorView - In the implementation block
@property (assign,nonatomic,__weak) MFModernAtomView * hostAtomView;              //@synthesize hostAtomView=_hostAtomView - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                  //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (assign,nonatomic) double scalingFactor;                                //@synthesize scalingFactor=_scalingFactor - In the implementation block
-(BOOL)isSelected;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)invalidateIntrinsicContentSize;
-(void)tintColorDidChange;
-(UIView *)separatorView;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)_setSelectionStyle:(unsigned long long)arg1 ;
-(double)scalingFactor;
-(void)setScalingFactor:(double)arg1 ;
-(id)_chevronImage;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 style:(unsigned long long)arg3 ;
-(void)setHostAtomView:(MFModernAtomView *)arg1 ;
-(double)separatorWidth;
-(UIView *)selectedView;
-(MFModernAtomView *)hostAtomView;
-(UIEdgeInsets)_backgroundBleedArea;
@end

