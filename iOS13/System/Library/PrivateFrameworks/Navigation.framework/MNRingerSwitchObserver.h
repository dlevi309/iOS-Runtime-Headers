/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)ringerSwitchEnabled;
-(void)registerForRingerStateNotifications;
-(void)loadPropertiesOnConcurrentQueue;
-(void)unregisterForRingerStateNotifications;
-(BOOL)fetchRingerSwitchEnabled;
-(int)ringerStateNotifyToken;
-(unsigned long long)stateForNotifyToken:(int)arg1 ;
-(void)setRingerSwitchEnabled:(BOOL)arg1 ;
-(void)setRingerStateNotifyToken:(int)arg1 ;
@end

