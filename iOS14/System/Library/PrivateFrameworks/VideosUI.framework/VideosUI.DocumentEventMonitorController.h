/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/VUIAppDocumentUpdateEventMonitorObserving.h>

@interface VideosUI.DocumentEventMonitorController : NSObject <VUIAppDocumentUpdateEventMonitorObserving> {

	 isDocumentDirty;
	 templateViewModel;
	 controllerName;
	 eventEligibleViewModels;
	 $__lazy_storage_$_updateEventStore;
	 documentEventIterable;
	 lastMonitoringReason;
	 hasRefreshEvents;
	 isDocumentDirtyForRefreshEvents;
	 registrationHandler;
	 isSuspended;

}
-(id)init;
-(void)appDocumentDidReceiveEvent:(id)arg1 ;
-(void)appDocumentHasBecomeActive;
@end

