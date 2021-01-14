/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _SiriUINavigationContentView : UIView {

	BOOL _contentLayoutEnabled;
	UIView* _contentView;

}

@property (nonatomic,retain) UIView * contentView;                                                 //@synthesize contentView=_contentView - In the implementation block
@property (assign,getter=isContentLayoutEnabled,nonatomic) BOOL contentLayoutEnabled;              //@synthesize contentLayoutEnabled=_contentLayoutEnabled - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(BOOL)isContentLayoutEnabled;
-(void)setContentLayoutEnabled:(BOOL)arg1 ;
@end

