/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithDispatchQueue:(id)arg1 ;
@end

