/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AnalyticsWorkspaceRetrievalCallback : NSObject {

	/*^block*/id _workspaceCallback;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (copy) id workspaceCallback;                                      //@synthesize workspaceCallback=_workspaceCallback - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)workspaceCallback;
-(void)setWorkspaceCallback:(id)arg1 ;
@end

