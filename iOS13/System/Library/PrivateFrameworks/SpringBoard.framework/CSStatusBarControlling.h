/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSNumber, _UILegibilitySettings;


@protocol CSStatusBarControlling <NSObject>
@property (nonatomic,readonly) NSNumber * statusBarAlpha; 
@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,readonly) _UILegibilitySettings * statusBarLegibilitySettings; 
@required
-(long long)statusBarStyle;
-(NSNumber *)statusBarAlpha;
-(void)disableStatusBarItem:(int)arg1 requestor:(id)arg2;
-(_UILegibilitySettings *)statusBarLegibilitySettings;
-(void)setStatusBarAlpha:(id)arg1 style:(long long)arg2 legibilitySettings:(id)arg3;
-(void)enableStatusBarTime:(BOOL)arg1 crossfade:(BOOL)arg2 crossfadeDuration:(double)arg3;
-(void)updateStatusBarTimeEnabled;
-(void)clearStatusBarParameters;
-(void)setStatusBarHidden:(BOOL)arg1 forReason:(id)arg2;
-(void)destroyFakeStatusBar:(id)arg1;
-(id)createFakeStatusBarWithReason:(id)arg1 withFrame:(CGRect)arg2;
-(id)effectiveStatusBarStyleRequestForAlpha:(id)arg1 style:(long long)arg2 legibilitySettings:(id)arg3;
-(void)enableStatusBarItem:(int)arg1 requestor:(id)arg2;

@end

