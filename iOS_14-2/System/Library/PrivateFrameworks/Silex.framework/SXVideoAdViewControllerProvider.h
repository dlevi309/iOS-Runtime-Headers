/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXVideoAdViewControllerProviding.h>

@protocol SXVideoAdViewControllerProviding;
@class UIViewController, NSString;

@interface SXVideoAdViewControllerProvider : NSObject <SXVideoAdViewControllerProviding> {

	id<SXVideoAdViewControllerProviding> _viewControllerProvider;

}

@property (nonatomic,__weak,readonly) id<SXVideoAdViewControllerProviding> viewControllerProvider;              //@synthesize viewControllerProvider=_viewControllerProvider - In the implementation block
@property (nonatomic,readonly) UIViewController * viewControllerForModalPresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)viewControllerForModalPresentation;
-(id)initWithViewControllerProvider:(id)arg1 ;
-(id<SXVideoAdViewControllerProviding>)viewControllerProvider;
@end

