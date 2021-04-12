/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)setTintColor:(id)arg1 ;
-(UIBarButtonItem *)barButtonItem;
-(long long)preferredHeight;
-(void)setPreferredHeight:(long long)arg1 ;
-(UIToolbar *)toolbar;
-(double)horizontalMargin;
-(void)setHorizontalMargin:(double)arg1 ;
-(void)_barButtonAction:(id)arg1 ;
-(id)initWithSystemItem:(long long)arg1 preferredHeight:(double)arg2 collapseHeight:(BOOL)arg3 ;
-(BOOL)collapseHeight;
-(void)setCollapseHeight:(BOOL)arg1 ;
-(UIControl *)barButtonItemControl;
@end

