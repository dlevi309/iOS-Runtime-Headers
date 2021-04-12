/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class NSString;

@interface BWFigCaptureDeviceClient : NSObject {

	int _clientID;
	int _pid;
	NSString* _clientDescription;
	int _stealingBehavior;
	BOOL _deviceSharingWithOtherClientsAllowed;
	/*^block*/id _deviceAvailabilityChangedHandler;

}

@property (nonatomic,readonly) int clientID;                                           //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) int pid;                                                //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSString * clientDescription;                           //@synthesize clientDescription=_clientDescription - In the implementation block
@property (nonatomic,readonly) int stealingBehavior;                                   //@synthesize stealingBehavior=_stealingBehavior - In the implementation block
@property (nonatomic,readonly) BOOL deviceSharingWithOtherClientsAllowed;              //@synthesize deviceSharingWithOtherClientsAllowed=_deviceSharingWithOtherClientsAllowed - In the implementation block
@property (nonatomic,copy) id deviceAvailabilityChangedHandler;                        //@synthesize deviceAvailabilityChangedHandler=_deviceAvailabilityChangedHandler - In the implementation block
-(int)clientID;
-(int)pid;
-(void)setDeviceAvailabilityChangedHandler:(id)arg1 ;
-(BOOL)deviceSharingWithOtherClientsAllowed;
-(id)debugDescription;
-(id)initWithPID:(int)arg1 clientDescription:(id)arg2 stealingBehavior:(int)arg3 deviceSharingWithOtherClientsAllowed:(BOOL)arg4 deviceAvailabilityChangedHandler:(/*^block*/id)arg5 ;
-(NSString *)clientDescription;
-(id)description;
-(int)stealingBehavior;
-(id)deviceAvailabilityChangedHandler;
-(BOOL)canShareDeviceWithClientPID:(int)arg1 deviceAvailabilityChangedHandler:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

