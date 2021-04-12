/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, NSNumber;

@interface SUScriptApplication : SUScriptObject

@property (getter=isDelayingTerminate,readonly) id delayingTerminate; 
@property (getter=isRunningInStoreDemoMode,readonly) id runningInStoreDemoMode; 
@property (retain) id iconBadgeNumber; 
@property (readonly) NSString * identifier; 
@property (readonly) id screenHeight; 
@property (readonly) id screenWidth; 
@property (assign) id statusBarHidden; 
@property (assign) long long statusBarStyle; 
@property (readonly) NSString * version; 
@property (getter=wasLaunchedFromLibrary,readonly) id launchedFromLibrary; 
@property (readonly) NSNumber * exitStoreReasonButton; 
@property (readonly) NSNumber * exitStoreReasonDownloadComplete; 
@property (readonly) NSNumber * exitStoreReasonFatalError; 
@property (readonly) NSNumber * exitStoreReasonGotoMainStore; 
@property (readonly) NSNumber * exitStoreReasonOther; 
@property (readonly) NSNumber * exitStoreReasonPurchase; 
@property (readonly) long long statusBarAnimationFade; 
@property (readonly) long long statusBarAnimationNone; 
@property (readonly) long long statusBarAnimationSlide; 
@property (readonly) long long statusBarStyleDefault; 
@property (readonly) long long statusBarStyleBlackOpaque; 
@property (readonly) long long statusBarStyleBlackTranslucent; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(id)hostIdentifier;
-(long long)statusBarStyle;
-(void)setStatusBarStyle:(long long)arg1 ;
-(void)setStatusBarHidden:(id)arg1 ;
-(id)statusBarHidden;
-(void)setStatusBarHidden:(BOOL)arg1 withAnimation:(long long)arg2 ;
-(id)isRunningInStoreDemoMode;
-(void)setStatusBarStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(id)attributeKeys;
-(id)screenHeight;
-(id)screenWidth;
-(id)scriptAttributeKeys;
-(id)wasLaunchedFromLibrary;
-(void)beginDelayingTerminate;
-(void)endDelayingTerminate;
-(void)exitStoreWithReason:(id)arg1 ;
-(void)returnToLibrary;
-(void)scrollIconToVisible:(id)arg1 shouldSuspend:(BOOL)arg2 ;
-(void)showNewsstand;
-(id)iconBadgeNumber;
-(id)isDelayingTerminate;
-(void)setIconBadgeNumber:(id)arg1 ;
-(NSNumber *)exitStoreReasonButton;
-(NSNumber *)exitStoreReasonDownloadComplete;
-(NSNumber *)exitStoreReasonFatalError;
-(NSNumber *)exitStoreReasonGotoMainStore;
-(NSNumber *)exitStoreReasonOther;
-(NSNumber *)exitStoreReasonPurchase;
-(long long)statusBarAnimationFade;
-(long long)statusBarAnimationNone;
-(long long)statusBarAnimationSlide;
-(long long)statusBarStyleDefault;
-(long long)statusBarStyleBlackOpaque;
-(long long)statusBarStyleBlackTranslucent;
@end

