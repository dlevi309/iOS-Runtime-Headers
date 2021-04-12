/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
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
-(void)dealloc;
-(void)sendEvent:(id)arg1 ;
@end

