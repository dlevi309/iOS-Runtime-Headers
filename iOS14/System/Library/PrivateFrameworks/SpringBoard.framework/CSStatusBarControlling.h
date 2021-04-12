/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSNumber, _UILegibilitySettings;


@protocol CSStatusBarControlling <NSObject>
@property (nonatomic,readonly) NSNumber * statusBarAlpha; 
@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,readonly) _UILegibilitySettings * statusBarLegibilitySettings; 
@required
-(id)effectiveStatusBarStyleRequestForAlpha:(id)arg1 style:(long long)arg2 legibilitySettings:(id)arg3;
-(id)createFakeStatusBarWithReason:(id)arg1 withFrame:(CGRect)arg2;
-(void)setStatusBarAlpha:(id)arg1 style:(long long)arg2 legibilitySettings:(id)arg3;
-(void)destroyFakeStatusBar:(id)arg1;
-(NSNumber *)statusBarAlpha;
-(void)enableStatusBarTime:(BOOL)arg1 crossfade:(BOOL)arg2 crossfadeDuration:(double)arg3;
-(void)clearStatusBarParameters;
-(void)enableStatusBarItem:(int)arg1 requestor:(id)arg2;
-(void)updateStatusBarTimeEnabled;
-(long long)statusBarStyle;
-(_UILegibilitySettings *)statusBarLegibilitySettings;
-(void)setStatusBarHidden:(BOOL)arg1 forReason:(id)arg2;
-(void)disableStatusBarItem:(int)arg1 requestor:(id)arg2;

@end

