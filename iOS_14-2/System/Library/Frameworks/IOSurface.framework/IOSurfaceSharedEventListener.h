/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IOSurface.framework/IOSurface
*/


@protocol OS_dispatch_queue;
#import <IOSurface/IOSurface-Structs.h>
@class NSObject;

@interface IOSurfaceSharedEventListener : NSObject {

	IONotificationPortRef _notificationPort;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
-(id)init;
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)dealloc;
@end

