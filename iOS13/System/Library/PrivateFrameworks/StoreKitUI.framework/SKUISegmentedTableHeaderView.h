/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(_UIBackdropView *)backdropView;
-(UIView *)segmentedControl;
-(void)setSegmentedControl:(UIView *)arg1 ;
-(id)_borderView;
-(BOOL)hidesBorderView;
-(void)setHidesBorderView:(BOOL)arg1 ;
@end

