/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)intrinsicContentSize;
-(WGWidgetPlatterView *)platterView;
-(void)setPlatterView:(WGWidgetPlatterView *)arg1 ;
-(id)initWithPlatterView:(id)arg1 ;
-(void)setOverrideIntrinsicContentHeight:(double)arg1 ;
-(void)layoutSubviews;
-(double)topMarginForLayout;
-(void)setTopMarginForLayout:(double)arg1 ;
-(UIView *)contentView;
-(double)overrideIntrinsicContentHeight;
@end

