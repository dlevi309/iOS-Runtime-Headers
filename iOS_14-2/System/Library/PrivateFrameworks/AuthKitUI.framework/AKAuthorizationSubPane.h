/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithViewController:(id)arg1 ;
-(UIView *)view;
-(UIViewController *)viewController;
-(id)initWithView:(id)arg1 ;
-(UIView *)internalView;
-(double)internalCustomSpacingAfter;
-(void)setInternalCustomSpacingAfter:(double)arg1 ;
-(void)addToStackView:(id)arg1 context:(id)arg2 ;
-(void)addToConstraints:(id)arg1 context:(id)arg2 ;
-(double)customSpacingAfter;
-(void)setCustomSpacingAfter:(double)arg1 ;
@end

