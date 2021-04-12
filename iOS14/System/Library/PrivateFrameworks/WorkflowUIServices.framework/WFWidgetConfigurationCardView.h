/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WFWidgetConfigurationCardHeaderViewDelegate.h>

@protocol WFWidgetConfigurationCardViewDelegate;
@class WFWidgetConfigurationCardHeaderView, UIView, MTVisualStylingProvider, MTStylingProvidingSolidColorView, UILayoutGuide, NSString;

@interface WFWidgetConfigurationCardView : UIView <WFWidgetConfigurationCardHeaderViewDelegate> {

	WFWidgetConfigurationCardHeaderView* _headerView;
	UIView* _contentView;
	id<WFWidgetConfigurationCardViewDelegate> _delegate;
	double _widgetDescriptionTallScriptCompensatedSpacing;
	MTVisualStylingProvider* _strokeProvider;
	MTVisualStylingProvider* _fillProvider;
	MTStylingProvidingSolidColorView* _backgroundView;
	UILayoutGuide* _contentViewGuide;

}

@property (nonatomic,readonly) MTStylingProvidingSolidColorView * backgroundView;                    //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * contentViewGuide;                                     //@synthesize contentViewGuide=_contentViewGuide - In the implementation block
@property (nonatomic,readonly) WFWidgetConfigurationCardHeaderView * headerView;                     //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                   //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) id<WFWidgetConfigurationCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double widgetDescriptionTallScriptCompensatedSpacing;                   //@synthesize widgetDescriptionTallScriptCompensatedSpacing=_widgetDescriptionTallScriptCompensatedSpacing - In the implementation block
@property (nonatomic,readonly) MTVisualStylingProvider * strokeProvider;                             //@synthesize strokeProvider=_strokeProvider - In the implementation block
@property (nonatomic,readonly) MTVisualStylingProvider * fillProvider;                               //@synthesize fillProvider=_fillProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFWidgetConfigurationCardViewDelegate>)delegate;
-(MTStylingProvidingSolidColorView *)backgroundView;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<WFWidgetConfigurationCardViewDelegate>)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(WFWidgetConfigurationCardHeaderView *)headerView;
-(UIView *)contentView;
-(MTVisualStylingProvider *)strokeProvider;
-(MTVisualStylingProvider *)fillProvider;
-(void)widgetConfigurationCardHeaderViewDidRequestToClose:(id)arg1 ;
-(id)initWithRequest:(id)arg1 contentView:(id)arg2 ;
-(void)setContentView:(id)arg1 stretchToFit:(BOOL)arg2 ;
-(void)setWidgetDescriptionTallScriptCompensatedSpacing:(double)arg1 ;
-(double)widgetDescriptionTallScriptCompensatedSpacing;
-(UILayoutGuide *)contentViewGuide;
@end

