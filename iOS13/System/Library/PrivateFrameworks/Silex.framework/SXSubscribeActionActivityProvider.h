/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXActionActivityProvider.h>

@protocol SXSubscribeActionHandler, SXViewControllerPresenting, SXActionManager;
@class NSString;

@interface SXSubscribeActionActivityProvider : NSObject <SXActionActivityProvider> {

	id<SXSubscribeActionHandler> _handler;
	id<SXViewControllerPresenting> _viewControllerPresenting;
	id<SXActionManager> _actionManager;

}

@property (nonatomic,readonly) id<SXSubscribeActionHandler> handler;                                 //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) id<SXViewControllerPresenting> viewControllerPresenting;              //@synthesize viewControllerPresenting=_viewControllerPresenting - In the implementation block
@property (nonatomic,__weak,readonly) id<SXActionManager> actionManager;                             //@synthesize actionManager=_actionManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXSubscribeActionHandler>)handler;
-(id<SXActionManager>)actionManager;
-(id)activityGroupForAction:(id)arg1 ;
-(id<SXViewControllerPresenting>)viewControllerPresenting;
-(id)initWithHandler:(id)arg1 viewControllerPresenting:(id)arg2 actionManager:(id)arg3 ;
@end

