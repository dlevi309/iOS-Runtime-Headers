/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface WFContentAttributionTracker : NSObject {

	NSMutableDictionary* _attributionSets;
	NSObject*<OS_dispatch_queue> _trackingAttributionSetQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * attributionSets;                                 //@synthesize attributionSets=_attributionSets - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> trackingAttributionSetQueue;              //@synthesize trackingAttributionSetQueue=_trackingAttributionSetQueue - In the implementation block
-(id)init;
-(void)addAttributionSet:(id)arg1 forParameter:(id)arg2 ;
-(id)attributionSetForParameter:(id)arg1 ;
-(id)trackedAttributionSet;
-(NSMutableDictionary *)attributionSets;
-(NSObject*<OS_dispatch_queue>)trackingAttributionSetQueue;
@end

