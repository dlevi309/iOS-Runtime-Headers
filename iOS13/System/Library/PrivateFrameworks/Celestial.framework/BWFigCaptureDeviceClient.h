/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@interface BWFigCaptureDeviceClient : NSObject {

	int _clientID;
	int _pid;
	int _stealingBehavior;
	int _releaseBehavior;
	BOOL _deviceSharingWithOtherClientsAllowed;
	/*^block*/id _deviceAvailabilityChangedHandler;

}

@property (nonatomic,readonly) int clientID;                                           //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) int pid;                                                //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) int stealingBehavior;                                   //@synthesize stealingBehavior=_stealingBehavior - In the implementation block
@property (assign,nonatomic) int releaseBehavior;                                      //@synthesize releaseBehavior=_releaseBehavior - In the implementation block
@property (nonatomic,readonly) BOOL deviceSharingWithOtherClientsAllowed;              //@synthesize deviceSharingWithOtherClientsAllowed=_deviceSharingWithOtherClientsAllowed - In the implementation block
@property (nonatomic,copy) id deviceAvailabilityChangedHandler;                        //@synthesize deviceAvailabilityChangedHandler=_deviceAvailabilityChangedHandler - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(int)pid;
-(int)clientID;
-(id)initWithPID:(int)arg1 stealingBehavior:(int)arg2 deviceSharingWithOtherClientsAllowed:(BOOL)arg3 deviceAvailabilityChangedHandler:(/*^block*/id)arg4 ;
-(BOOL)canShareDeviceWithClientPID:(int)arg1 deviceAvailabilityChangedHandler:(/*^block*/id)arg2 ;
-(int)stealingBehavior;
-(int)releaseBehavior;
-(void)setReleaseBehavior:(int)arg1 ;
-(BOOL)deviceSharingWithOtherClientsAllowed;
-(id)deviceAvailabilityChangedHandler;
-(void)setDeviceAvailabilityChangedHandler:(id)arg1 ;
@end

