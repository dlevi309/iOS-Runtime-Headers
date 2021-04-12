/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MNRingerSwitchObserver : NSObject {

	BOOL _ringerSwitchEnabled;
	int _ringerStateNotifyToken;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) int ringerStateNotifyToken;                              //@synthesize ringerStateNotifyToken=_ringerStateNotifyToken - In the implementation block
@property (assign,nonatomic) BOOL ringerSwitchEnabled;                                //@synthesize ringerSwitchEnabled=_ringerSwitchEnabled - In the implementation block
+(id)sharedObserver;
-(id)init;
-(void)setRingerSwitchEnabled:(BOOL)arg1 ;
-(void)registerForRingerStateNotifications;
-(int)ringerStateNotifyToken;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)stateForNotifyToken:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)loadPropertiesOnConcurrentQueue;
-(BOOL)fetchRingerSwitchEnabled;
-(void)setRingerStateNotifyToken:(int)arg1 ;
-(BOOL)ringerSwitchEnabled;
-(void)unregisterForRingerStateNotifications;
-(void)dealloc;
@end

