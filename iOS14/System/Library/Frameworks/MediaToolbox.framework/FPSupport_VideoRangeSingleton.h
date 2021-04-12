/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface FPSupport_VideoRangeSingleton : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQ;

}
+(id)sharedFPSupportSingleton;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)postNotification;
-(void)dealloc;
@end

