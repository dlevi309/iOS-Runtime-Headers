/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
*/


@protocol NMBUIPowerSourceInfoDelegate;
@class NSNumber, NMNotificationObserver;

@interface NMBUIPowerSourceInfo : NSObject {

	NSNumber* _lastNotifiedExternalPowerSourceConnected;
	NMNotificationObserver* _accessoryNotificationObserver;
	NMNotificationObserver* _powerSourceNotificationObserver;
	id<NMBUIPowerSourceInfoDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NMBUIPowerSourceInfoDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (getter=hasExternalPowerSourceConnected,nonatomic,readonly) BOOL externalPowerSourceConnected; 
-(id<NMBUIPowerSourceInfoDelegate>)delegate;
-(void)setDelegate:(id<NMBUIPowerSourceInfoDelegate>)arg1 ;
-(BOOL)hasExternalPowerSourceConnected;
-(void)_handlePowerSourceNotification;
-(BOOL)_hasExternalPowerSourceConnected;
@end

