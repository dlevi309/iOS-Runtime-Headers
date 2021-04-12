/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
*/

#import <WorkflowUIServices/WorkflowUIServices-Structs.h>
#import <UIKitCore/UIView.h>

@protocol WFWidgetConfigurationContainerViewDelegate;
@class NSArray, NSLayoutConstraint, WFWidgetConfigurationCardView;

@interface WFWidgetConfigurationContainerView : UIView {

	id<WFWidgetConfigurationContainerViewDelegate> _delegate;
	NSArray* _defaultCardLayoutConstraints;
	NSLayoutConstraint* _preferredCardWidthLayoutConstraint;
	NSLayoutConstraint* _preferredCardHeightLayoutConstraint;
	NSArray* _configuredCardLayoutConstraints;
	NSLayoutConstraint* _configuratedCardOriginXConstraint;
	NSLayoutConstraint* _configuratedCardOriginYConstraint;
	NSLayoutConstraint* _configuratedCardWidthConstraint;
	NSLayoutConstraint* _configuratedCardHeightConstraint;
	NSLayoutConstraint* _avoidingKeyboardConstraint;
	WFWidgetConfigurationCardView* _cardView;

}

@property (nonatomic,readonly) NSArray * defaultCardLayoutConstraints;                                    //@synthesize defaultCardLayoutConstraints=_defaultCardLayoutConstraints - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * preferredCardWidthLayoutConstraint;                   //@synthesize preferredCardWidthLayoutConstraint=_preferredCardWidthLayoutConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * preferredCardHeightLayoutConstraint;                  //@synthesize preferredCardHeightLayoutConstraint=_preferredCardHeightLayoutConstraint - In the implementation block
@property (nonatomic,readonly) NSArray * configuredCardLayoutConstraints;                                 //@synthesize configuredCardLayoutConstraints=_configuredCardLayoutConstraints - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * configuratedCardOriginXConstraint;                    //@synthesize configuratedCardOriginXConstraint=_configuratedCardOriginXConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * configuratedCardOriginYConstraint;                    //@synthesize configuratedCardOriginYConstraint=_configuratedCardOriginYConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * configuratedCardWidthConstraint;                      //@synthesize configuratedCardWidthConstraint=_configuratedCardWidthConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * configuratedCardHeightConstraint;                     //@synthesize configuratedCardHeightConstraint=_configuratedCardHeightConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * avoidingKeyboardConstraint;                           //@synthesize avoidingKeyboardConstraint=_avoidingKeyboardConstraint - In the implementation block
@property (nonatomic,readonly) WFWidgetConfigurationCardView * cardView;                                  //@synthesize cardView=_cardView - In the implementation block
@property (assign,nonatomic) CGRect configurationCardViewFrame; 
@property (assign,nonatomic,__weak) id<WFWidgetConfigurationContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WFWidgetConfigurationContainerViewDelegate>)delegate;
-(WFWidgetConfigurationCardView *)cardView;
-(void)setDelegate:(id<WFWidgetConfigurationContainerViewDelegate>)arg1 ;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)requestDismissal;
-(id)initWithCardView:(id)arg1 preferredSize:(CGSize)arg2 ;
-(void)setupDefaultConstraintsWithPreferredSize:(CGSize)arg1 ;
-(void)setupConfiguredCardFrameConstraints;
-(CGRect)configurationCardViewFrame;
-(void)setConfigurationCardViewFrame:(CGRect)arg1 ;
-(NSArray *)defaultCardLayoutConstraints;
-(NSLayoutConstraint *)preferredCardWidthLayoutConstraint;
-(NSLayoutConstraint *)preferredCardHeightLayoutConstraint;
-(NSArray *)configuredCardLayoutConstraints;
-(NSLayoutConstraint *)configuratedCardOriginXConstraint;
-(NSLayoutConstraint *)configuratedCardOriginYConstraint;
-(NSLayoutConstraint *)configuratedCardWidthConstraint;
-(NSLayoutConstraint *)configuratedCardHeightConstraint;
-(NSLayoutConstraint *)avoidingKeyboardConstraint;
@end

