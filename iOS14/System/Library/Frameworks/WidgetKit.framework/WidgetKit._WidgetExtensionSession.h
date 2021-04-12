/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WidgetKit.framework/WidgetKit
*/

#import <WidgetKit/WidgetKit.WidgetExtensionSession.h>

@interface WidgetKit._WidgetExtensionSession : _UKNOWN_SUPERCLASS_ <WidgetKit.WidgetExtensionSession> {

	 theExtension;
	 hostContext;
	 loggingIdentifier;
	 lock;
	 subscriptions;
	 watchdogTimeoutQueue;
	 watchdogTimeoutProvider;
	 rbsInterface;
	 suspensionObserver;
	 widgetExtensionAssertion;
	 lock_invalidated;
	 connection;

}
-(void)invalidate;
-(void)getDescriptorsWithCompletion:(/*^block*/id)arg1 ;
-(void)getPlaceholdersWithEnvironment:(id)arg1 for:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleURLSessionEventsFor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)attachPreviewAgentWithFrameworkPath:(id)arg1 endpoint:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)getTimelineFor:(id)arg1 into:(id)arg2 environment:(id)arg3 isPreview:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
@end

