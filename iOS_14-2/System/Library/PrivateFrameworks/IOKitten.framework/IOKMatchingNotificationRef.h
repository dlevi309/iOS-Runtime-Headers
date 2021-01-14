/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
*/


#import <IOKitten/IOKitten-Structs.h>
@class IOKMatchingNotification;

@interface IOKMatchingNotificationRef : NSObject {

	os_unfair_recursive_lock_s _lock;
	IOKMatchingNotification* _notification;

}

@property (assign,nonatomic) IOKMatchingNotification * notification;              //@synthesize notification=_notification - In the implementation block
-(void)unlock;
-(void)setNotification:(IOKMatchingNotification *)arg1 ;
-(id)init;
-(IOKMatchingNotification *)notification;
-(void)lock;
@end

