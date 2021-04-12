/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class NSMutableArray, FBSDisplayLayoutMonitor;

@interface FigCaptureDisplayLayoutMonitor : NSObject {

	OpaqueFigSimpleMutexRef _layoutObserversLock;
	NSMutableArray* _layoutObservers;
	OpaqueFigSimpleMutexRef _appsLock;
	NSMutableArray* _fullScreenApps;
	NSMutableArray* _nonFullScreenApps;
	NSMutableArray* _obscuredApps;
	NSMutableArray* _transitioningApps;
	FBSDisplayLayoutMonitor* _layoutMonitor;

}

@property (getter=isOnHomeScreen,nonatomic,readonly) BOOL onHomeScreen; 
@property (getter=isOnLockScreen,nonatomic,readonly) BOOL onLockScreen; 
+(void)initialize;
+(id)sharedDisplayLayoutMonitor;
+(int)_openFrontBoardServicesFramework;
-(void)dealloc;
-(BOOL)isOnLockScreen;
-(BOOL)isOnHomeScreen;
-(void)removeLayoutObserver:(id)arg1 ;
-(void)addLayoutObserver:(id)arg1 ;
-(id)initWithFBSDisplayLayoutMonitorCreateFunction:(/*function pointer*/void*)arg1 ;
-(void)_updateCurrentLayout:(id)arg1 ;
-(void)_updateObserversWithForegroundApps:(id)arg1 obscuredApps:(id)arg2 transitioningApps:(id)arg3 ;
@end

