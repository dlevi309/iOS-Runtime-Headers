/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/


@protocol SWNavigationHandler;
@class UIViewController, NSURLRequest;

@interface SWNavigationPreview : NSObject {

	UIViewController* _viewController;
	id<SWNavigationHandler> _navigationHandler;
	NSURLRequest* _request;

}

@property (nonatomic,__weak,readonly) UIViewController * viewController;               //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) id<SWNavigationHandler> navigationHandler;              //@synthesize navigationHandler=_navigationHandler - In the implementation block
@property (nonatomic,readonly) NSURLRequest * request;                                 //@synthesize request=_request - In the implementation block
-(NSURLRequest *)request;
-(UIViewController *)viewController;
-(id)initWithViewController:(id)arg1 navigationHandler:(id)arg2 URLRequest:(id)arg3 ;
-(id<SWNavigationHandler>)navigationHandler;
@end

