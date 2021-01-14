/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSMutableArray, FBSDisplayLayoutMonitor;

@interface FigCaptureDisplayLayoutMonitor : NSObject {

	OpaqueFigSimpleMutexRef _layoutObserversLock;
	NSMutableArray* _layoutObservers;
	OpaqueFigSimpleMutexRef _appsLock;
	NSMutableArray* _fullScreenApps;
	NSMutableArray* _nonFullScreenApps;
	NSMutableArray* _obscuredApps;
	NSMutableArray* _transitioningApps;
	NSMutableArray* _pipApps;
	FBSDisplayLayoutMonitor* _layoutMonitor;

}

@property (getter=isOnHomeScreen,nonatomic,readonly) BOOL onHomeScreen; 
@property (getter=isOnLockScreen,nonatomic,readonly) BOOL onLockScreen; 
+(void)initialize;
+(id)sharedDisplayLayoutMonitor;
-(void)addLayoutObserver:(id)arg1 ;
-(void)removeLayoutObserver:(id)arg1 ;
-(BOOL)isOnLockScreen;
-(id)initWithFBSDisplayLayoutMonitorCreateFunction:(/*function pointer*/void*)arg1 ;
-(void)_updateObserversWithForegroundApps:(id)arg1 obscuredApps:(id)arg2 transitioningApps:(id)arg3 pipApps:(id)arg4 ;
-(BOOL)isOnHomeScreen;
-(void)_updateCurrentLayout:(id)arg1 ;
-(void)dealloc;
@end

