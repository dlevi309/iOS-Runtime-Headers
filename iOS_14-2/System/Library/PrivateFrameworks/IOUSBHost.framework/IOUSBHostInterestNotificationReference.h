/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOUSBHost.framework/IOUSBHost
*/


@class IOUSBHostObject, NSRecursiveLock;

@interface IOUSBHostInterestNotificationReference : NSObject {

	BOOL _interestNotificationPortDestroyed;
	IOUSBHostObject* _hostObject;
	NSRecursiveLock* _interestNotificationLock;

}

@property (__weak) IOUSBHostObject * hostObject;                            //@synthesize hostObject=_hostObject - In the implementation block
@property (assign) BOOL interestNotificationPortDestroyed;                  //@synthesize interestNotificationPortDestroyed=_interestNotificationPortDestroyed - In the implementation block
@property (retain) NSRecursiveLock * interestNotificationLock;              //@synthesize interestNotificationLock=_interestNotificationLock - In the implementation block
-(void)setInterestNotificationPortDestroyed:(BOOL)arg1 ;
-(void)setHostObject:(IOUSBHostObject *)arg1 ;
-(void)setInterestNotificationLock:(NSRecursiveLock *)arg1 ;
-(NSRecursiveLock *)interestNotificationLock;
-(id)initWithHostObject:(id)arg1 ;
-(IOUSBHostObject *)hostObject;
-(BOOL)interestNotificationPortDestroyed;
@end

