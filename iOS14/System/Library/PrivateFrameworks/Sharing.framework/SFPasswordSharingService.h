/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol SFPasswordSharingServiceDelegate, OS_dispatch_queue;
@class SFUserAlert, NSUUID, SFPasswordSharingInfo, SFService, NSDate, NSObject, NSString;

@interface SFPasswordSharingService : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	SFUserAlert* _notification;
	NSUUID* _peer;
	SFPasswordSharingInfo* _promptedInfo;
	SFService* _service;
	int _serviceState;
	NSDate* _shareClock;
	double _shareTime;
	id<SFPasswordSharingServiceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _networkName;

}

@property (assign,nonatomic,__weak) id<SFPasswordSharingServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                        //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSString * networkName;                                            //@synthesize networkName=_networkName - In the implementation block
+(unsigned)passwordSharingAvailability;
-(NSString *)networkName;
-(void)_run;
-(void)_cleanup;
-(id)init;
-(BOOL)disabledViaConfig;
-(int)_runServiceStart;
-(void)_sendPasswordReceived;
-(void)_passInfoToDelegate:(id)arg1 ;
-(void)_sendPasswordDeclinedWithError:(int)arg1 ;
-(void)_handleReceivedPassword:(id)arg1 ;
-(BOOL)__activateCalled;
-(void)_handleUserNotificationResponse:(int)arg1 ;
-(void)_promptUserWithInfo:(id)arg1 message:(id)arg2 ;
-(id)messageForDisplayName:(id)arg1 deviceName:(id)arg2 info:(id)arg3 ;
-(BOOL)__invalidateCalled;
-(void)__testReceivedObject:(id)arg1 withFlags:(unsigned)arg2 ;
-(id<SFPasswordSharingServiceDelegate>)delegate;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_receivedObject:(id)arg1 flags:(unsigned)arg2 ;
-(void)setNetworkName:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(void)setDelegate:(id<SFPasswordSharingServiceDelegate>)arg1 ;
-(void)invalidate;
-(void)_handleSessionStarted:(id)arg1 ;
-(void)dealloc;
@end

