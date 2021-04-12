/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
*/

#import <Foundation/NSOperation.h>

@class NSDate, NSString;

@interface PCScheduleSystemWakeOperation : NSOperation {

	BOOL _scheduleOrCancel;
	BOOL _userVisible;
	NSDate* _wakeDate;
	double _acceptableDelay;
	NSString* _serviceIdentifier;
	void* _unqiueIdentifier;

}
-(void)main;
-(id)initForScheduledWake:(BOOL)arg1 wakeDate:(id)arg2 acceptableDelay:(double)arg3 userVisible:(BOOL)arg4 serviceIdentifier:(id)arg5 uniqueIdentifier:(void*)arg6 ;
@end

