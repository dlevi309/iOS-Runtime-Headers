/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/


@interface ASCRebootstrapNotifier : NSObject {

	int _token;
	unsigned long long _rebootstrapCounterSnapshot;

}

@property (nonatomic,readonly) int token;                                                //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) unsigned long long rebootstrapCounterSnapshot;              //@synthesize rebootstrapCounterSnapshot=_rebootstrapCounterSnapshot - In the implementation block
+(id)sharedNotifier;
-(int)token;
-(void)dealloc;
-(id)_initSingleton;
-(void)postLocalNotification;
-(void)postLocalNotificationIfNeeded;
-(unsigned long long)rebootstrapCounterSnapshot;
-(void)setRebootstrapCounterSnapshot:(unsigned long long)arg1 ;
@end

