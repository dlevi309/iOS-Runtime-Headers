/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/CMWakeGestureDelegate.h>

@protocol AVTUIRaiseGestureManagerDelegate, OS_dispatch_queue;
@class NSObject, CMWakeGestureManager, NSString;

@interface AVTUIRaiseGestureManager : NSObject <CMWakeGestureDelegate> {

	id<AVTUIRaiseGestureManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	CMWakeGestureManager* _wakeGestureManager;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;                      //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,readonly) CMWakeGestureManager * wakeGestureManager;                       //@synthesize wakeGestureManager=_wakeGestureManager - In the implementation block
@property (assign,nonatomic,__weak) id<AVTUIRaiseGestureManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<AVTUIRaiseGestureManagerDelegate>)delegate;
-(void)setDelegate:(id<AVTUIRaiseGestureManagerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 ;
-(id)initWithBackingWakeGestureManager:(id)arg1 callbackQueue:(id)arg2 ;
-(CMWakeGestureManager *)wakeGestureManager;
-(void)startRaiseGestureUpdates;
-(void)stopRaiseGestureUpdates;
@end

