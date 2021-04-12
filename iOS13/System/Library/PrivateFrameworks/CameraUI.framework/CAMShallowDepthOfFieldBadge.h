/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CEKBadgeTextView;

@interface CAMShallowDepthOfFieldBadge : UIView {

	long long _shallowDepthOfFieldStatus;
	CEKBadgeTextView* __enabledTextView;
	CEKBadgeTextView* __disabledTextView;

}

@property (nonatomic,readonly) CEKBadgeTextView * _enabledTextView;               //@synthesize _enabledTextView=__enabledTextView - In the implementation block
@property (nonatomic,readonly) CEKBadgeTextView * _disabledTextView;              //@synthesize _disabledTextView=__disabledTextView - In the implementation block
@property (assign,nonatomic) long long shallowDepthOfFieldStatus;                 //@synthesize shallowDepthOfFieldStatus=_shallowDepthOfFieldStatus - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)updateToContentSize:(id)arg1 ;
-(void)setShallowDepthOfFieldStatus:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setShallowDepthOfFieldStatus:(long long)arg1 ;
-(long long)shallowDepthOfFieldStatus;
-(void)_updateForShallowDepthOfFieldStatusAnimated:(BOOL)arg1 ;
-(CEKBadgeTextView *)_enabledTextView;
-(CEKBadgeTextView *)_disabledTextView;
@end

