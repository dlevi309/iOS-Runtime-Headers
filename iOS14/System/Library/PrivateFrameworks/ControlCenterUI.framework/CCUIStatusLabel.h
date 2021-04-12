/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(UIEdgeInsets)edgeInsets;
-(id)init;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(unsigned long long)verticalAlignment;
-(void)_updateVisualStyling;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setVerticalAlignment:(unsigned long long)arg1 ;
@end

