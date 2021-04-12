/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/


@protocol OS_dispatch_queue;
@class BMSource, NSObject;

@interface CPSClipEventsReporter : NSObject {

	BMSource* _source;
	NSObject*<OS_dispatch_queue> _logQueue;

}
+(id)reporter;
-(id)init;
-(void)logClipLaunchEventForSession:(id)arg1 ;
@end

