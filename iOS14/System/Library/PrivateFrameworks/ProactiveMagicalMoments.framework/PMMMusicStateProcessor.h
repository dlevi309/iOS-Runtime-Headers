/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
*/


@protocol OS_dispatch_queue;
@class NSObject, PMMMusicContainer;

@interface PMMMusicStateProcessor : NSObject {

	BOOL _inCar;
	NSObject*<OS_dispatch_queue> _queue;
	PMMMusicContainer* _lastPlayed;
	PMMMusicContainer* _lastPlayedInCar;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL inCar;                                       //@synthesize inCar=_inCar - In the implementation block
@property (nonatomic,retain) PMMMusicContainer * lastPlayed;                   //@synthesize lastPlayed=_lastPlayed - In the implementation block
@property (nonatomic,retain) PMMMusicContainer * lastPlayedInCar;              //@synthesize lastPlayedInCar=_lastPlayedInCar - In the implementation block
+(id)shared;
-(void)_persist;
-(void)_initStarkConnect;
-(id)init;
-(void)_handlePause;
-(void)_initStarkDisconnect;
-(void)setLastPlayedInCar:(PMMMusicContainer *)arg1 ;
-(BOOL)inCar;
-(void)_handlePlay;
-(void)_initNowPlayingPause;
-(void)setLastPlayed:(PMMMusicContainer *)arg1 ;
-(void)setInCar:(BOOL)arg1 ;
-(void)_initNowPlayingPlay;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)_init;
-(PMMMusicContainer *)lastPlayedInCar;
-(PMMMusicContainer *)lastPlayed;
-(void)lastPlayedInCarWithHandler:(/*^block*/id)arg1 ;
-(void)lastPlayedWithHandler:(/*^block*/id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

