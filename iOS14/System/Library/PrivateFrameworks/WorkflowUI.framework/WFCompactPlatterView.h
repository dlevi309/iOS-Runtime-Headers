/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WFCompactTitledPlatterViewDelegate.h>
#import <UIKit/UIInterfaceActionHandlerInvocationDelegate.h>
#import <libobjc.A.dylib/MTVisualStylingProviding.h>

@protocol WFCompactPlatterContentClippingDelegate, WFCompactPlatterSizingDelegate;
@class NSString, WFImage, UIInterfaceActionGroup, UIView, PLTitledPlatterView, UILabel, UIInterfaceActionGroupView;

@interface WFCompactPlatterView : UIView <WFCompactTitledPlatterViewDelegate, UIInterfaceActionHandlerInvocationDelegate, MTVisualStylingProviding> {

	BOOL _arrangeActionsVertically;
	BOOL _hidesContentViewTopSeparator;
	BOOL _clippingContent;
	BOOL _footerViewHidden;
	BOOL _hasScheduledSizeInvalidation;
	NSString* _attributionTitle;
	WFImage* _attributionIcon;
	NSString* _primaryText;
	NSString* _secondaryText;
	UIInterfaceActionGroup* _actionGroup;
	UIView* _contentView;
	double _contentHeightWhenClipped;
	double _contentVerticalOffsetWhenClipped;
	id<WFCompactPlatterContentClippingDelegate> _contentClippingDelegate;
	UIView* _footerView;
	double _footerViewHeight;
	id<WFCompactPlatterSizingDelegate> _sizingDelegate;
	PLTitledPlatterView* _platterView;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UIView* _contentViewSeparatorView;
	UIView* _clippingContentView;
	UIView* _clippingAutoLayoutContainerView;
	UIView* _footerViewSeparatorView;
	UIInterfaceActionGroupView* _actionGroupView;

}

@property (assign,nonatomic,__weak) PLTitledPlatterView * platterView;                                                //@synthesize platterView=_platterView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * primaryLabel;                                                           //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * secondaryLabel;                                                         //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (assign,nonatomic,__weak) UIView * contentViewSeparatorView;                                                //@synthesize contentViewSeparatorView=_contentViewSeparatorView - In the implementation block
@property (assign,nonatomic,__weak) UIView * clippingContentView;                                                     //@synthesize clippingContentView=_clippingContentView - In the implementation block
@property (assign,nonatomic,__weak) UIView * clippingAutoLayoutContainerView;                                         //@synthesize clippingAutoLayoutContainerView=_clippingAutoLayoutContainerView - In the implementation block
@property (assign,nonatomic,__weak) UIView * footerViewSeparatorView;                                                 //@synthesize footerViewSeparatorView=_footerViewSeparatorView - In the implementation block
@property (assign,nonatomic,__weak) UIInterfaceActionGroupView * actionGroupView;                                     //@synthesize actionGroupView=_actionGroupView - In the implementation block
@property (assign,nonatomic) BOOL hasScheduledSizeInvalidation;                                                       //@synthesize hasScheduledSizeInvalidation=_hasScheduledSizeInvalidation - In the implementation block
@property (nonatomic,readonly) UIView * contentViewContainerView; 
@property (nonatomic,copy) NSString * attributionTitle;                                                               //@synthesize attributionTitle=_attributionTitle - In the implementation block
@property (nonatomic,copy) WFImage * attributionIcon;                                                                 //@synthesize attributionIcon=_attributionIcon - In the implementation block
@property (nonatomic,copy) NSString * primaryText;                                                                    //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,copy) NSString * secondaryText;                                                                  //@synthesize secondaryText=_secondaryText - In the implementation block
@property (nonatomic,retain) UIInterfaceActionGroup * actionGroup;                                                    //@synthesize actionGroup=_actionGroup - In the implementation block
@property (assign,nonatomic) BOOL arrangeActionsVertically;                                                           //@synthesize arrangeActionsVertically=_arrangeActionsVertically - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                                    //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) BOOL hidesContentViewTopSeparator;                                                       //@synthesize hidesContentViewTopSeparator=_hidesContentViewTopSeparator - In the implementation block
@property (assign,getter=isClippingContent,nonatomic) BOOL clippingContent;                                           //@synthesize clippingContent=_clippingContent - In the implementation block
@property (assign,nonatomic) double contentHeightWhenClipped;                                                         //@synthesize contentHeightWhenClipped=_contentHeightWhenClipped - In the implementation block
@property (assign,nonatomic) double contentVerticalOffsetWhenClipped;                                                 //@synthesize contentVerticalOffsetWhenClipped=_contentVerticalOffsetWhenClipped - In the implementation block
@property (assign,nonatomic,__weak) id<WFCompactPlatterContentClippingDelegate> contentClippingDelegate;              //@synthesize contentClippingDelegate=_contentClippingDelegate - In the implementation block
@property (nonatomic,readonly) UIView * footerView;                                                                   //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) double footerViewHeight;                                                                 //@synthesize footerViewHeight=_footerViewHeight - In the implementation block
@property (assign,nonatomic) BOOL footerViewHidden;                                                                   //@synthesize footerViewHidden=_footerViewHidden - In the implementation block
@property (assign,nonatomic,__weak) id<WFCompactPlatterSizingDelegate> sizingDelegate;                                //@synthesize sizingDelegate=_sizingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)footerView;
-(double)separatorHeight;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(PLTitledPlatterView *)platterView;
-(id<WFCompactPlatterSizingDelegate>)sizingDelegate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPlatterView:(PLTitledPlatterView *)arg1 ;
-(void)interfaceAction:(id)arg1 invokeActionHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(UILabel *)primaryLabel;
-(id)allowedActionLayoutAxisByPriority;
-(UIInterfaceActionGroup *)actionGroup;
-(UIView *)clippingContentView;
-(void)setClippingContentView:(UIView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSizingDelegate:(id<WFCompactPlatterSizingDelegate>)arg1 ;
-(NSString *)primaryText;
-(void)setContentView:(UIView *)arg1 ;
-(void)setActionGroup:(UIInterfaceActionGroup *)arg1 ;
-(UIInterfaceActionGroupView *)actionGroupView;
-(void)setPrimaryText:(NSString *)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(NSString *)secondaryText;
-(void)setActionGroupView:(UIInterfaceActionGroupView *)arg1 ;
-(UIView *)contentView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)secondaryLabel;
-(void)setFooterViewHeight:(double)arg1 ;
-(double)footerViewHeight;
-(NSString *)attributionTitle;
-(WFImage *)attributionIcon;
-(void)layoutCustomContentViewForPlatterView:(id)arg1 ;
-(UIView *)contentViewContainerView;
-(CGSize)staticContentSizeForSize:(CGSize)arg1 ;
-(void)setNeedsLayoutAndSizeInvalidation;
-(void)layoutContentInsideClippingView;
-(void)setAttributionTitle:(NSString *)arg1 ;
-(void)setAttributionIcon:(WFImage *)arg1 ;
-(void)_labelContentChanged;
-(void)setHidesContentViewTopSeparator:(BOOL)arg1 ;
-(void)updateContentViewSeparatorVisibility;
-(void)setArrangeActionsVertically:(BOOL)arg1 ;
-(void)setFooterViewHidden:(BOOL)arg1 ;
-(void)setClippingContent:(BOOL)arg1 ;
-(void)setContentHeightWhenClipped:(double)arg1 ;
-(void)setContentVerticalOffsetWhenClipped:(double)arg1 ;
-(BOOL)arrangeActionsVertically;
-(BOOL)hidesContentViewTopSeparator;
-(BOOL)isClippingContent;
-(double)contentHeightWhenClipped;
-(double)contentVerticalOffsetWhenClipped;
-(id<WFCompactPlatterContentClippingDelegate>)contentClippingDelegate;
-(void)setContentClippingDelegate:(id<WFCompactPlatterContentClippingDelegate>)arg1 ;
-(BOOL)footerViewHidden;
-(UIView *)contentViewSeparatorView;
-(void)setContentViewSeparatorView:(UIView *)arg1 ;
-(UIView *)clippingAutoLayoutContainerView;
-(void)setClippingAutoLayoutContainerView:(UIView *)arg1 ;
-(UIView *)footerViewSeparatorView;
-(void)setFooterViewSeparatorView:(UIView *)arg1 ;
-(BOOL)hasScheduledSizeInvalidation;
-(void)setHasScheduledSizeInvalidation:(BOOL)arg1 ;
@end

