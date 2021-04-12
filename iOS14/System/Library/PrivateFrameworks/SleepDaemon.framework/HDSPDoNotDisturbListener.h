/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/


@protocol HDSPDoNotDisturbListenerDelegate;
@class HDSPContextStoreManager;

@interface HDSPDoNotDisturbListener : NSObject {

	id<HDSPDoNotDisturbListenerDelegate> _delegate;
	HDSPContextStoreManager* _contextStoreManager;

}

@property (nonatomic,readonly) HDSPContextStoreManager * contextStoreManager;                   //@synthesize contextStoreManager=_contextStoreManager - In the implementation block
@property (assign,nonatomic,__weak) id<HDSPDoNotDisturbListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startListening;
-(HDSPContextStoreManager *)contextStoreManager;
-(id<HDSPDoNotDisturbListenerDelegate>)delegate;
-(void)setDelegate:(id<HDSPDoNotDisturbListenerDelegate>)arg1 ;
-(id)initWithContextStoreManager:(id)arg1 ;
-(void)_processCoreDuetCallbackWithNewDNDState:(id)arg1 oldDNDState:(id)arg2 ;
@end

