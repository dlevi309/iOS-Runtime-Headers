/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIBackdropView, UIView;

@interface SKUISegmentedTableHeaderView : UIView {

	_UIBackdropView* _backdropView;
	UIView* _borderView;
	UIView* _segmentedControl;

}

@property (assign,nonatomic) BOOL hidesBorderView; 
@property (nonatomic,retain) UIView * segmentedControl;                     //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,readonly) _UIBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
-(_UIBackdropView *)backdropView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_borderView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)segmentedControl;
-(void)setSegmentedControl:(UIView *)arg1 ;
-(BOOL)hidesBorderView;
-(void)setHidesBorderView:(BOOL)arg1 ;
@end

