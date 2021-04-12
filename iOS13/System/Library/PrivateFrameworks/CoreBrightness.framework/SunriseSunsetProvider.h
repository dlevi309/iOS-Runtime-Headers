/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol OS_dispatch_semaphore;
@class _CDClientContext, _CDContextualKeyPath, _CDContextualChangeRegistration, NSDictionary, NSObject, _CDContextualPredicate;

@interface SunriseSunsetProvider : NSObject {

	_CDClientContext* _duetContextStore;
	_CDContextualKeyPath* _duetKeyPath;
	_CDContextualChangeRegistration* _duetRegistration;
	NSDictionary* _duetInfo;
	NSObject*<OS_dispatch_semaphore> _duetDispatchSemaphore;
	BOOL _sunriseSunsetNotificationEnabled;
	/*^block*/id _callbackBlock;
	/*^block*/id _duetCallback;
	_CDContextualPredicate* _predicate;
	int _logLevel;

}

@property (assign) int logLevel;              //@synthesize logLevel=_logLevel - In the implementation block
-(void)dealloc;
-(void)cancel;
-(id)initWithCallback:(/*^block*/id)arg1 ;
-(int)logLevel;
-(void)setLogLevel:(int)arg1 ;
-(void)unregisterBlock;
-(void)registerBlock:(/*^block*/id)arg1 ;
-(id)copySunriseSunsetInfo:(int)arg1 ;
-(void)updateSunriseSunsetInfo;
-(void)unregisterNotification;
-(id)copySunsetSunriseInfoFromContext;
@end

