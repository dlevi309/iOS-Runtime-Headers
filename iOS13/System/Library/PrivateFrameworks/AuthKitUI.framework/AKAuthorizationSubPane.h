/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <libobjc.A.dylib/AKAuthorizationSubPaneAdding.h>

@class UIViewController, UIView;

@interface AKAuthorizationSubPane : NSObject <AKAuthorizationSubPaneAdding> {

	UIViewController* _viewController;
	UIView* _internalView;
	double _internalCustomSpacingAfter;

}

@property (nonatomic,readonly) UIView * internalView;                          //@synthesize internalView=_internalView - In the implementation block
@property (assign,nonatomic) double internalCustomSpacingAfter;                //@synthesize internalCustomSpacingAfter=_internalCustomSpacingAfter - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic) double customSpacingAfter; 
-(UIView *)view;
-(UIViewController *)viewController;
-(id)initWithView:(id)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(void)setCustomSpacingAfter:(double)arg1 ;
-(UIView *)internalView;
-(double)internalCustomSpacingAfter;
-(void)setInternalCustomSpacingAfter:(double)arg1 ;
-(void)addToStackView:(id)arg1 context:(id)arg2 ;
-(void)addToConstraints:(id)arg1 context:(id)arg2 ;
-(double)customSpacingAfter;
@end

