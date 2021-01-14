/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <AppleMediaServicesUI/AMSUICommonView.h>

@class UIView;

@interface AMSUIWebViewImageWrapper : AMSUICommonView {

	UIView* _view;
	double _inset;

}

@property (nonatomic,retain) UIView * view;              //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) double inset;               //@synthesize inset=_inset - In the implementation block
-(CGSize)intrinsicContentSize;
-(double)inset;
-(void)setView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)view;
-(void)setInset:(double)arg1 ;
-(id)initWithView:(id)arg1 topInset:(double)arg2 ;
@end

