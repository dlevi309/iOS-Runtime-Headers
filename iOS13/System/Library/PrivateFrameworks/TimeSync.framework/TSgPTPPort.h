/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@protocol OS_dispatch_queue;
#import <TimeSync/TimeSync-Structs.h>
@class NSObject, __TSgPTPPortNotification;

@interface TSgPTPPort : NSObject {

	unsigned _service;
	NSObject*<OS_dispatch_queue> _notificationsQueue;
	IONotificationPortRef _notificationPort;
	unsigned _interestNotification;
	__TSgPTPPortNotification* _portForNotification;
	NSObject*<OS_dispatch_queue> _internalPropertyUpdateQueue;
	unsigned short _portNumber;
	int _portRole;
	unsigned long long _clockIdentifier;
	NSObject*<OS_dispatch_queue> _propertyUpdateQueue;

}

@property (assign,nonatomic) unsigned short portNumber;                                     //@synthesize portNumber=_portNumber - In the implementation block
@property (assign,nonatomic) int portRole;                                                  //@synthesize portRole=_portRole - In the implementation block
@property (assign,nonatomic) unsigned long long clockIdentifier;                            //@synthesize clockIdentifier=_clockIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned service; 
@property (nonatomic,readonly) int portType; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyUpdateQueue;              //@synthesize propertyUpdateQueue=_propertyUpdateQueue - In the implementation block
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
+(id)gPTPPortWithService:(unsigned)arg1 ;
+(id)diagnosticInfoForService:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
-(int)portType;
-(id)_notificationQueue;
-(unsigned)service;
-(IONotificationPortRef)_notificationPort;
-(id)initWithService:(unsigned)arg1 ;
-(unsigned short)portNumber;
-(void)setPortNumber:(unsigned short)arg1 ;
-(unsigned short)_portNumber;
-(unsigned long long)clockIdentifier;
-(void)setClockIdentifier:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyUpdateQueue;
-(void)setPropertyUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)_clockIdentifier;
-(int)_portRole;
-(BOOL)_commonInitWithService:(unsigned)arg1 ;
-(int)portRole;
-(void)setPortRole:(int)arg1 ;
-(id)initWithMatchingDictionary:(id)arg1 ;
-(void)updateProperties;
-(BOOL)startAutomaticPropertyUpdates;
-(BOOL)stopAutomaticPropertyUpdates;
-(void)serviceTerminated;
-(id)_portForNotification;
@end

