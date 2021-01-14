/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GameCenterUI.BaseCollectionReusableView.h>

@class _TtC12GameCenterUI16DynamicTypeLabel;

@interface GameCenterUI.SectionFooterView : GameCenterUI.BaseCollectionReusableView {

	 footerLabel;
	 attachmentView;
	 tapGestureRecognizer;
	 style;
	 labelTapAction;
	 attachmentTapAction;
	 separator;

}

@property (assign,nonatomic) UIEdgeInsets layoutMargins; 
@property (readonly,nonatomic) BOOL accessibilityLabelHasAction; 
@property (readonly,nonatomic) BOOL accessibilityAttachmentHasAction; 
@property (readonly,nonatomic) _TtC12GameCenterUI16DynamicTypeLabel * accessibilityFooterLabel; 
-(id)initWithFrame:(CGRect)arg1 ;
-(JUMeasurements)measurementsWithFitting:(CGSize)arg1 in:(id)arg2 ;
-(void)prepareForReuse;
-(UIEdgeInsets)layoutMargins;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)layoutSubviews;
-(void)handleTapWithGestureRecognizer:(id)arg1 ;
-(BOOL)accessibilityLabelHasAction;
-(BOOL)accessibilityAttachmentHasAction;
-(_TtC12GameCenterUI16DynamicTypeLabel *)accessibilityFooterLabel;
-(id)initWithCoder:(id)arg1 ;
@end

