/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
*/


@protocol IOKPowerNotifierDelegate;
#import <IOKitten/IOKitten-Structs.h>
@interface IOKPowerNotifier : NSObject {

	IONotificationPortRef _notificationPort;
	unsigned _connection;
	unsigned _notifier;
	id<IOKPowerNotifierDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IOKPowerNotifierDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<IOKPowerNotifierDelegate>)delegate;
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)setDelegate:(id<IOKPowerNotifierDelegate>)arg1 ;
-(void)systemWillSleep;
-(void)dealloc;
-(void)systemHasPoweredOn;
-(void)_handlePowerNotificationWithMessageType:(unsigned)arg1 andArgument:(long long)arg2 ;
-(void)systemWillNotSleep;
-(void)systemWillPowerOn;
@end

