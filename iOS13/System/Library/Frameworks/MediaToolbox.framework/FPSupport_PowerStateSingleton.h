/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface FPSupport_PowerStateSingleton : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQ;

}
+(id)sharedFPSupportPowerStateSingleton;
-(id)init;
-(void)dealloc;
-(void)_didChangePowerState:(id)arg1 ;
@end

