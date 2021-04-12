/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVModalPresentationViewControllerProviding.h>

@protocol SVVideoViewControllerProviding;
@class UIViewController, NSString;

@interface SVModalPresentationViewControllerProvider : NSObject <SVModalPresentationViewControllerProviding> {

	id<SVVideoViewControllerProviding> _videoViewControllerProvider;

}

@property (nonatomic,readonly) id<SVVideoViewControllerProviding> videoViewControllerProvider;              //@synthesize videoViewControllerProvider=_videoViewControllerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIViewController * viewControllerForModalPresentation; 
-(id<SVVideoViewControllerProviding>)videoViewControllerProvider;
-(UIViewController *)viewControllerForModalPresentation;
-(id)initWithVideoViewControllerProvider:(id)arg1 ;
@end

