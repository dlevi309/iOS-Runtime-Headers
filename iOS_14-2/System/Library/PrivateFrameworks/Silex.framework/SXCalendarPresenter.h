/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)presentCalendarEvent:(id)arg1 ;
-(id<SXViewControllerPresenting>)viewControllerPresenting;
-(SXEventStoreProvider *)eventStoreProvider;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(id)initWithViewControllerPresenting:(id)arg1 eventStoreProvider:(id)arg2 ;
@end

