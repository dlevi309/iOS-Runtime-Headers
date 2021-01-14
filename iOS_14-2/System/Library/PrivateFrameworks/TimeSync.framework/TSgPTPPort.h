/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@protocol OS_dispatch_queue;
@class IOKService, NSObject, IOKNotificationPort, IOKInterestNotification;

@interface TSgPTPPort : NSObject {

	IOKService* _service;
	NSObject*<OS_dispatch_queue> _notificationsQueue;
	IOKNotificationPort* _notificationPort;
	IOKInterestNotification* _interestNotification;
	IOKInterestNotification* _terminationNotification;
	NSObject*<OS_dispatch_queue> _internalPropertyUpdateQueue;
	unsigned short _portNumber;
	int _portRole;
	unsigned long long _clockIdentifier;
	NSObject*<OS_dispatch_queue> _propertyUpdateQueue;

}

@property (assign,nonatomic) unsigned short portNumber;                                     //@synthesize portNumber=_portNumber - In the implementation block
@property (assign,nonatomic) int portRole;                                                  //@synthesize portRole=_portRole - In the implementation block
@property (assign,nonatomic) unsigned long long clockIdentifier;                            //@synthesize clockIdentifier=_clockIdentifier - In the implementation block
@property (nonatomic,readonly) IOKService * service; 
@property (nonatomic,readonly) int portType; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyUpdateQueue;              //@synthesize propertyUpdateQueue=_propertyUpdateQueue - In the implementation block
+(id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2 ;
+(id)gPTPPortWithService:(id)arg1 ;
+(id)diagnosticInfoForService:(id)arg1 ;
-(id)init;
-(int)portType;
-(id)_notificationPort;
-(id)initWithService:(id)arg1 ;
-(id)_notificationQueue;
-(unsigned short)portNumber;
-(void)setPortNumber:(unsigned short)arg1 ;
-(unsigned short)_portNumber;
-(id)initWithMatchingDictionary:(id)arg1 ;
-(IOKService *)service;
-(int)portRole;
-(void)dealloc;
-(unsigned long long)clockIdentifier;
-(void)setClockIdentifier:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyUpdateQueue;
-(void)setPropertyUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)_clockIdentifier;
-(int)_portRole;
-(void)serviceTerminated;
-(BOOL)_commonInitWithService:(id)arg1 ;
-(void)setPortRole:(int)arg1 ;
-(void)updateProperties;
-(BOOL)startAutomaticPropertyUpdates;
-(BOOL)stopAutomaticPropertyUpdates;
@end

