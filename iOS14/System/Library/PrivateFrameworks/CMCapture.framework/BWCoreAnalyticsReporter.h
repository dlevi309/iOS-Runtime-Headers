/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BWCoreAnalyticsReporter : NSObject {

	NSObject*<OS_dispatch_queue> _coreAnalyticsDispatchQueue;

}
+(void)initialize;
+(id)sharedInstance;
+(int)clientApplicationIDType:(id)arg1 ;
-(id)init;
-(void)sendEvent:(id)arg1 ;
-(void)dealloc;
@end

