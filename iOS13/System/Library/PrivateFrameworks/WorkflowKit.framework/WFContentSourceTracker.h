/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface WFContentSourceTracker : NSObject {

	NSMutableDictionary* _contentSources;
	NSObject*<OS_dispatch_queue> _trackingContentSourceQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * contentSources;                                 //@synthesize contentSources=_contentSources - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> trackingContentSourceQueue;              //@synthesize trackingContentSourceQueue=_trackingContentSourceQueue - In the implementation block
-(id)init;
-(NSMutableDictionary *)contentSources;
-(id)trackedContentSource;
-(id)contentSourceForParameter:(id)arg1 ;
-(void)addContentSource:(id)arg1 forParameter:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)trackingContentSourceQueue;
@end

