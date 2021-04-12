/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface CAMPowerController : NSObject {

	Ai _assertionIdentifierGenerator;
	BOOL __isBackgrounded;
	int __powerPressureNotificationToken;
	unsigned __powerControllerQueue_powerPressureLevel;
	NSMutableDictionary* __assertionsByIdentifier;
	NSObject*<OS_dispatch_queue> __powerControllerQueue;
	unsigned long long __backgroundTaskIdentifier;

}

@property (nonatomic,readonly) NSMutableDictionary * _assertionsByIdentifier;                                                                    //@synthesize _assertionsByIdentifier=__assertionsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _powerControllerQueue;                                                               //@synthesize _powerControllerQueue=__powerControllerQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long _backgroundTaskIdentifier;                                                                     //@synthesize _backgroundTaskIdentifier=__backgroundTaskIdentifier - In the implementation block
@property (assign,setter=_setBackgrounded:,getter=_isBackgrounded,nonatomic) BOOL _isBackgrounded;                                               //@synthesize _isBackgrounded=__isBackgrounded - In the implementation block
@property (nonatomic,readonly) int _powerPressureNotificationToken;                                                                              //@synthesize _powerPressureNotificationToken=__powerPressureNotificationToken - In the implementation block
@property (assign,setter=_powerControllerQueue_setPowerPressureLevel:,nonatomic) unsigned _powerControllerQueue_powerPressureLevel;              //@synthesize _powerControllerQueue_powerPressureLevel=__powerControllerQueue_powerPressureLevel - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)_applicationWillResignActive:(id)arg1 ;
-(unsigned long long)_backgroundTaskIdentifier;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(NSMutableDictionary *)_assertionsByIdentifier;
-(int)_powerPressureNotificationToken;
-(BOOL)_isBackgrounded;
-(NSObject*<OS_dispatch_queue>)_powerControllerQueue;
-(unsigned)generateAssertionIdentifier;
-(void)_powerControllerQueue_setPowerPressureLevel:(unsigned)arg1 ;
-(void)_setBackgrounded:(BOOL)arg1 ;
-(void)_endBackgroundTaskIfNeeded;
-(void)_startBackgroundTaskIfNeeded;
-(unsigned)_powerControllerQueue_powerPressureLevel;
-(void)addAssertionForIndentifier:(unsigned)arg1 withReason:(unsigned)arg2 ;
-(void)removeAssertionForIdentifier:(unsigned)arg1 withReason:(unsigned)arg2 ;
-(unsigned)powerPressureLevel;
@end

