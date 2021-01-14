/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)registerBlock:(/*^block*/id)arg1 ;
-(id)initWithCallback:(/*^block*/id)arg1 ;
-(void)unregisterBlock;
-(void)updateSunriseSunsetInfo;
-(void)unregisterNotification;
-(int)logLevel;
-(id)copySunsetSunriseInfoFromContext;
-(void)setLogLevel:(int)arg1 ;
-(id)copySunriseSunsetInfo:(int)arg1 ;
-(void)cancel;
-(void)dealloc;
@end

