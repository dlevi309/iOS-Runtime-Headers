/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIRefreshControlHosting.h>

@protocol _UINavigationControllerRefreshControlHostDelegate;
@class UIScrollView, UINavigationController, UIView, UIRefreshControl, NSArray, NSString;

@interface _UINavigationControllerRefreshControlHost : NSObject <_UIRefreshControlHosting> {

	UIScrollView* _scrollView;
	id<_UINavigationControllerRefreshControlHostDelegate> _delegate;
	UINavigationController* _navigationController;
	double _restingHeightOfRefreshControl;
	UIView* _hostContainerView;
	double _unobstructedHeight;
	UIRefreshControl* _refreshControl;
	NSArray* _refreshControlConstraints;

}

@property (__weak) UIRefreshControl * refreshControl;                                                            //@synthesize refreshControl=_refreshControl - In the implementation block
@property (retain) NSArray * refreshControlConstraints;                                                          //@synthesize refreshControlConstraints=_refreshControlConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<_UINavigationControllerRefreshControlHostDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) UINavigationController * navigationController;                             //@synthesize navigationController=_navigationController - In the implementation block
@property (assign,nonatomic) double restingHeightOfRefreshControl;                                               //@synthesize restingHeightOfRefreshControl=_restingHeightOfRefreshControl - In the implementation block
@property (nonatomic,readonly) double fullHeightOfRefreshControl; 
@property (nonatomic,retain) UIView * hostContainerView;                                                         //@synthesize hostContainerView=_hostContainerView - In the implementation block
@property (assign,nonatomic) double unobstructedHeight;                                                          //@synthesize unobstructedHeight=_unobstructedHeight - In the implementation block
@property (readonly) BOOL refreshControlInsetsAffectScrollViewRubberBanding; 
@property (__weak,readonly) UIScrollView * scrollView;                                                           //@synthesize scrollView=_scrollView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canHostRefreshControlOwnedByScrollView:(id)arg1 inNavigationController:(id)arg2 ;
-(void)stopAnimations;
-(id<_UINavigationControllerRefreshControlHostDelegate>)delegate;
-(double)_alphaForRefreshingControlStateWithPossiblyObstructedContent;
-(void)setHostContainerView:(UIView *)arg1 ;
-(void)setDelegate:(id<_UINavigationControllerRefreshControlHostDelegate>)arg1 ;
-(void)incrementInsetHeight:(double)arg1 ;
-(void)refreshControl:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 ;
-(UIView *)hostContainerView;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(double)unobstructedHeight;
-(void)_notifyLayoutDidChange;
-(void)_updateFadeOutProgress;
-(void)_removeRefreshControlFromContainerView;
-(void)_installRefreshControlIntoContainerView;
-(void)setRestingHeightOfRefreshControl:(double)arg1 ;
-(double)_thresholdForObstructedContentFullAlpha;
-(double)_thresholdForObstructedContentZeroAlpha;
-(NSArray *)refreshControlConstraints;
-(void)setRefreshControlConstraints:(NSArray *)arg1 ;
-(BOOL)isHostingRefreshControlOwnedByScrollView:(id)arg1 ;
-(id)initWithNavigationController:(id)arg1 scrollView:(id)arg2 ;
-(UIRefreshControl *)refreshControl;
-(BOOL)refreshControlInsetsAffectScrollViewRubberBanding;
-(UIScrollView *)scrollView;
-(void)decrementInsetHeight:(double)arg1 ;
-(double)restingHeightOfRefreshControl;
-(void)setUnobstructedHeight:(double)arg1 ;
-(double)fullHeightOfRefreshControl;
-(void)dealloc;
-(UINavigationController *)navigationController;
@end

