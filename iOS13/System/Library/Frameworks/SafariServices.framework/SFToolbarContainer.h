/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>

@class UIToolbar;

@interface SFToolbarContainer : UIView {

	UIToolbar* _toolbar;
	double _minimumWidth;
	UIEdgeInsets _toolbarInsets;

}

@property (nonatomic,readonly) UIToolbar * toolbar;                   //@synthesize toolbar=_toolbar - In the implementation block
@property (assign,nonatomic) double minimumWidth;                     //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets toolbarInsets;              //@synthesize toolbarInsets=_toolbarInsets - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(double)minimumWidth;
-(void)setMinimumWidth:(double)arg1 ;
-(id)initWithToolbar:(id)arg1 ;
-(UIToolbar *)toolbar;
-(void)setToolbarInsets:(UIEdgeInsets)arg1 ;
-(CGPoint)widthRangeUsingNarrowMetrics:(BOOL)arg1 ;
-(UIEdgeInsets)toolbarInsets;
@end

