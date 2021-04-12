/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, WGWidgetPlatterView;

@interface WGWidgetWrapperView : UIView {

	UIView* _contentView;
	WGWidgetPlatterView* _platterView;
	double _overrideIntrinsicContentHeight;
	double _topMarginForLayout;

}

@property (nonatomic,readonly) UIView * contentView;                             //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) WGWidgetPlatterView * platterView;                  //@synthesize platterView=_platterView - In the implementation block
@property (assign,nonatomic) double overrideIntrinsicContentHeight;              //@synthesize overrideIntrinsicContentHeight=_overrideIntrinsicContentHeight - In the implementation block
@property (assign,nonatomic) double topMarginForLayout;                          //@synthesize topMarginForLayout=_topMarginForLayout - In the implementation block
-(UIView *)contentView;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)setPlatterView:(WGWidgetPlatterView *)arg1 ;
-(WGWidgetPlatterView *)platterView;
-(void)setTopMarginForLayout:(double)arg1 ;
-(id)initWithPlatterView:(id)arg1 ;
-(void)setOverrideIntrinsicContentHeight:(double)arg1 ;
-(double)overrideIntrinsicContentHeight;
-(double)topMarginForLayout;
@end

