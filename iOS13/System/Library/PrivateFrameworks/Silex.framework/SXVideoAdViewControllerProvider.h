/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXVideoAdViewControllerProviding.h>

@protocol SXVideoAdViewControllerProviding;
@class UIViewController, NSString;

@interface SXVideoAdViewControllerProvider : NSObject <SXVideoAdViewControllerProviding> {

	id<SXVideoAdViewControllerProviding> _viewControllerProvider;

}

@property (nonatomic,__weak,readonly) id<SXVideoAdViewControllerProviding> viewControllerProvider;              //@synthesize viewControllerProvider=_viewControllerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * viewControllerForModalPresentation; 
-(UIViewController *)viewControllerForModalPresentation;
-(id<SXVideoAdViewControllerProviding>)viewControllerProvider;
-(id)initWithViewControllerProvider:(id)arg1 ;
@end

