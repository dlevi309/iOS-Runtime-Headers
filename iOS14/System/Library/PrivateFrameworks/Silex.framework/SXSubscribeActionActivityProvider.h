/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<SXViewControllerPresenting>)viewControllerPresenting;
-(id<SXActionManager>)actionManager;
-(id)activityGroupForAction:(id)arg1 ;
-(id<SXSubscribeActionHandler>)handler;
-(id)initWithHandler:(id)arg1 viewControllerPresenting:(id)arg2 actionManager:(id)arg3 ;
@end

