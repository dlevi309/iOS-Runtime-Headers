/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXViewControllerPresenting.h>
#import <libobjc.A.dylib/SWViewControllerPresentingManager.h>

@class UIViewController, NSString;

@interface SXViewControllerPresentingManager : NSObject <SXViewControllerPresenting, SWViewControllerPresentingManager> {

	UIViewController* _presentingViewController;

}

@property (nonatomic,readonly) UIViewController * controller; 
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(UIViewController *)controller;
-(void)popOrDismissViewControllerAnimated:(BOOL)arg1 ;
@end

