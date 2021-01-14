/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUStatusBarVisibilityHandling;
@class NSHashTable;

@interface HUApplicationManager : NSObject {

	BOOL _wasStatusBarVisible;
	id<HUStatusBarVisibilityHandling> _statusBarVisibilityHandler;
	NSHashTable* _statusBarHidingRequesters;
	NSHashTable* _idleTimerDisabledRequesters;

}

@property (nonatomic,retain) NSHashTable * statusBarHidingRequesters;                                   //@synthesize statusBarHidingRequesters=_statusBarHidingRequesters - In the implementation block
@property (nonatomic,retain) NSHashTable * idleTimerDisabledRequesters;                                 //@synthesize idleTimerDisabledRequesters=_idleTimerDisabledRequesters - In the implementation block
@property (assign,nonatomic) BOOL wasStatusBarVisible;                                                  //@synthesize wasStatusBarVisible=_wasStatusBarVisible - In the implementation block
@property (nonatomic,retain) id<HUStatusBarVisibilityHandling> statusBarVisibilityHandler;              //@synthesize statusBarVisibilityHandler=_statusBarVisibilityHandler - In the implementation block
@property (getter=isStatusBarHidden,nonatomic,readonly) BOOL statusBarHidden; 
+(id)sharedInstance;
-(id)init;
-(BOOL)isStatusBarHidden;
-(BOOL)isIdleTimerDisabled;
-(void)setStatusBarHidingRequesters:(NSHashTable *)arg1 ;
-(void)setIdleTimerDisabledRequesters:(NSHashTable *)arg1 ;
-(void)setStatusBarVisibilityHandler:(id<HUStatusBarVisibilityHandling>)arg1 ;
-(id<HUStatusBarVisibilityHandling>)statusBarVisibilityHandler;
-(void)setStatusBarHidden:(BOOL)arg1 forRequester:(id)arg2 withAnimationSettings:(id)arg3 ;
-(NSHashTable *)statusBarHidingRequesters;
-(void)setWasStatusBarVisible:(BOOL)arg1 ;
-(BOOL)wasStatusBarVisible;
-(NSHashTable *)idleTimerDisabledRequesters;
-(void)setStatusBarHidden:(BOOL)arg1 forRequester:(id)arg2 ;
-(void)setIdleTimerDisabled:(BOOL)arg1 forRequester:(id)arg2 ;
@end

