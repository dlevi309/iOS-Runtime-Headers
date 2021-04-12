/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UILabel.h>

@class MTVisualStylingProvider;

@interface CCUIStatusLabel : UILabel {

	MTVisualStylingProvider* _visualStylingProvider;
	unsigned long long _verticalAlignment;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets edgeInsets;                           //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) unsigned long long verticalAlignment;              //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
-(id)init;
-(unsigned long long)verticalAlignment;
-(void)setVerticalAlignment:(unsigned long long)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)didMoveToWindow;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateVisualStyling;
@end

