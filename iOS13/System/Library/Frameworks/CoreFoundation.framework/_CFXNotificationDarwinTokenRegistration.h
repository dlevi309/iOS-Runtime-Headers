/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/_CFXNotificationTokenRegistration.h>

@interface _CFXNotificationDarwinTokenRegistration : _CFXNotificationTokenRegistration {

	int _notifyToken;

}

@property (readonly) int notifyToken;              //@synthesize notifyToken=_notifyToken - In the implementation block
-(id)initWithToken:(unsigned long long)arg1 notifyToken:(int)arg2 options:(unsigned long long)arg3 queue:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)invalidate;
-(int)notifyToken;
@end

