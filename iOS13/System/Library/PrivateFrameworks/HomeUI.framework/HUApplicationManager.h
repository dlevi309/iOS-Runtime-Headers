/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUStatusBarVisibilityHandling;
@class NSHashTable;

@interface HUApplicationManager : NSObject {

	BOOL _wasStatusBarVisible;
	id<HUStatusBarVisibilityHandling> _statusBarVisibilityHandler;
	NSHashTable* _statusBarHidingRequesters;
	NSHashTable* _networkActivityIndicatorRequesters;
	NSHashTable* _idleTimerDisabledRequesters;

}

@property (nonatomic,retain) NSHashTable * statusBarHidingRequesters;                                   //@synthesize statusBarHidingRequesters=_statusBarHidingRequesters - In the implementation block
@property (nonatomic,retain) NSHashTable * networkActivityIndicatorRequesters;                          //@synthesize networkActivityIndicatorRequesters=_networkActivityIndicatorRequesters - In the implementation block
@property (nonatomic,retain) NSHashTable * idleTimerDisabledRequesters;                                 //@synthesize idleTimerDisabledRequesters=_idleTimerDisabledRequesters - In the implementation block
@property (assign,nonatomic) BOOL wasStatusBarVisible;                                                  //@synthesize wasStatusBarVisible=_wasStatusBarVisible - In the implementation block
@property (nonatomic,retain) id<HUStatusBarVisibilityHandling> statusBarVisibilityHandler;              //@synthesize statusBarVisibilityHandler=_statusBarVisibilityHandler - In the implementation block
@property (getter=isStatusBarHidden,nonatomic,readonly) BOOL statusBarHidden; 
+(id)sharedInstance;
-(id)init;
-(BOOL)isStatusBarHidden;
-(BOOL)isIdleTimerDisabled;
-(BOOL)isNetworkActivityIndicatorVisible;
-(void)setStatusBarVisibilityHandler:(id<HUStatusBarVisibilityHandling>)arg1 ;
-(void)setNetworkActivityIndicatorRequesters:(NSHashTable *)arg1 ;
-(void)setStatusBarHidingRequesters:(NSHashTable *)arg1 ;
-(void)setIdleTimerDisabledRequesters:(NSHashTable *)arg1 ;
-(id<HUStatusBarVisibilityHandling>)statusBarVisibilityHandler;
-(void)setStatusBarHidden:(BOOL)arg1 forRequester:(id)arg2 withAnimationSettings:(id)arg3 ;
-(NSHashTable *)statusBarHidingRequesters;
-(void)setWasStatusBarVisible:(BOOL)arg1 ;
-(BOOL)wasStatusBarVisible;
-(NSHashTable *)networkActivityIndicatorRequesters;
-(NSHashTable *)idleTimerDisabledRequesters;
-(void)setStatusBarHidden:(BOOL)arg1 forRequester:(id)arg2 ;
-(void)setNetworkActivityIndicatorVisible:(BOOL)arg1 forRequester:(id)arg2 ;
-(void)setIdleTimerDisabled:(BOOL)arg1 forRequester:(id)arg2 ;
@end

