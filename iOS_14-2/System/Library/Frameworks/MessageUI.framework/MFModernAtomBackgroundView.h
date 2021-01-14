/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSeparatorStyle:(int)arg1 ;
-(UIView *)separatorView;
-(int)separatorStyle;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setSelectionStyle:(unsigned long long)arg1 ;
-(BOOL)isSelected;
-(double)scalingFactor;
-(UIView *)selectedView;
-(void)layoutSubviews;
-(void)invalidateIntrinsicContentSize;
-(void)setHostAtomView:(MFModernAtomView *)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 style:(unsigned long long)arg3 ;
-(double)separatorWidth;
-(void)setScalingFactor:(double)arg1 ;
-(MFModernAtomView *)hostAtomView;
-(id)_chevronImage;
-(UIEdgeInsets)_backgroundBleedArea;
@end

