/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/PLContentSizeManaging.h>

@protocol PLExpandedPlatterPLContentSizeCategoryAdjusting, PLClickPresentationInteractionPresentable, PLExpandedPlatterPresentationViewDelegate;
@class UIView, UIScrollView, UIViewController, NSString;

@interface PLExpandedPlatterPresentationView : UIView <UIScrollViewDelegate, PLContentSizeManaging> {

	UIView*<PLExpandedPlatter>*<PLContentSizeCategoryAdjusting> _expandedPlatterView;
	UIScrollView* _scrollView;
	UIViewController*<PLClickPresentationInteractionPresentable> _presentableViewController;
	id<PLExpandedPlatterPresentationViewDelegate> _delegate;

}

@property (nonatomic,readonly) UIView*<PLExpandedPlatter>*<PLContentSizeCategoryAdjusting> expandedPlatterView;                          //@synthesize expandedPlatterView=_expandedPlatterView - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                                                                //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<PLClickPresentationInteractionPresentable> presentableViewController;              //@synthesize presentableViewController=_presentableViewController - In the implementation block
@property (assign,nonatomic,__weak) id<PLExpandedPlatterPresentationViewDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)contentSizeForSize:(CGSize)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PLExpandedPlatterPresentationViewDelegate>)delegate;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_handleDismissButton:(id)arg1 ;
-(CGSize)sizeThatFitsContentWithSize:(CGSize)arg1 ;
-(void)setDelegate:(id<PLExpandedPlatterPresentationViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)forwardInvocation:(id)arg1 ;
-(void)setPresentableViewController:(UIViewController*<PLClickPresentationInteractionPresentable>)arg1 ;
-(UIView*<PLExpandedPlatter>*<PLContentSizeCategoryAdjusting>)expandedPlatterView;
-(void)_dismissExpandedPlatterWithTrigger:(long long)arg1 ;
-(void)_configureExpandedPlatterViewIfNecessary;
-(void)_configureScrollViewIfNecessary;
-(double)_translationWithVelocity:(double)arg1 acceleration:(double)arg2 ;
-(UIViewController*<PLClickPresentationInteractionPresentable>)presentableViewController;
@end

