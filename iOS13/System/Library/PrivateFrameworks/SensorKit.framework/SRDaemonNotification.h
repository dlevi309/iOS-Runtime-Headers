/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/


@protocol SRDaemonNotificationDelegate;
@class NSString;

@interface SRDaemonNotification : NSObject {

	int _registrationToken;
	int _significantTimeChangeToken;
	id<SRDaemonNotificationDelegate> _delegate;
	NSString* _sensorIdentifier;

}

@property (nonatomic,copy) NSString * sensorIdentifier;                                     //@synthesize sensorIdentifier=_sensorIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<SRDaemonNotificationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id<SRDaemonNotificationDelegate>)delegate;
-(void)setDelegate:(id<SRDaemonNotificationDelegate>)arg1 ;
-(void)registerForDaemonNotification;
-(void)unregisterForDaemonNotification;
-(NSString *)sensorIdentifier;
-(id)initWithSensor:(id)arg1 ;
-(void)setSensorIdentifier:(NSString *)arg1 ;
@end

