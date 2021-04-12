/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface FPSupport_VideoRangeSingleton : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQ;

}
+(id)sharedFPSupportSingleton;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)postNotification;
@end

