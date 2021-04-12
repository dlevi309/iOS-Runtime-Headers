/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIToolbar, UIBarButtonItem, UIControl;

@interface HKBarButtonItemControl : UIControl {

	BOOL _collapseHeight;
	long long _preferredHeight;
	double _horizontalMargin;
	UIToolbar* _toolbar;
	UIBarButtonItem* _barButtonItem;
	UIControl* _barButtonItemControl;

}

@property (assign,nonatomic) long long preferredHeight;                       //@synthesize preferredHeight=_preferredHeight - In the implementation block
@property (assign,nonatomic) BOOL collapseHeight;                             //@synthesize collapseHeight=_collapseHeight - In the implementation block
@property (assign,nonatomic) double horizontalMargin;                         //@synthesize horizontalMargin=_horizontalMargin - In the implementation block
@property (nonatomic,readonly) UIToolbar * toolbar;                           //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * barButtonItem;               //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (nonatomic,readonly) UIControl * barButtonItemControl;              //@synthesize barButtonItemControl=_barButtonItemControl - In the implementation block
-(UIBarButtonItem *)barButtonItem;
-(CGSize)intrinsicContentSize;
-(UIToolbar *)toolbar;
-(void)setTintColor:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHorizontalMargin:(double)arg1 ;
-(long long)preferredHeight;
-(void)setPreferredHeight:(long long)arg1 ;
-(BOOL)isEnabled;
-(double)horizontalMargin;
-(id)initWithSystemItem:(long long)arg1 preferredHeight:(double)arg2 collapseHeight:(BOOL)arg3 ;
-(void)_barButtonAction:(id)arg1 ;
-(BOOL)collapseHeight;
-(void)setCollapseHeight:(BOOL)arg1 ;
-(UIControl *)barButtonItemControl;
@end

