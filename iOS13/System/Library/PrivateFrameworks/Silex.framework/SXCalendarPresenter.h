/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/EKEventEditViewDelegate.h>
#import <libobjc.A.dylib/SXCalendarPresenter.h>

@protocol SXCalendarPresenter <NSObject>
@required
-(void)presentCalendarEvent:(id)arg1;

@end


@protocol SXViewControllerPresenting;
@class SXEventStoreProvider, NSString;

@interface SXCalendarPresenter : NSObject <EKEventEditViewDelegate, SXCalendarPresenter> {

	id<SXViewControllerPresenting> _viewControllerPresenting;
	SXEventStoreProvider* _eventStoreProvider;

}

@property (nonatomic,readonly) id<SXViewControllerPresenting> viewControllerPresenting;              //@synthesize viewControllerPresenting=_viewControllerPresenting - In the implementation block
@property (nonatomic,readonly) SXEventStoreProvider * eventStoreProvider;                            //@synthesize eventStoreProvider=_eventStoreProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(SXEventStoreProvider *)eventStoreProvider;
-(id<SXViewControllerPresenting>)viewControllerPresenting;
-(void)presentCalendarEvent:(id)arg1 ;
-(id)initWithViewControllerPresenting:(id)arg1 eventStoreProvider:(id)arg2 ;
@end

