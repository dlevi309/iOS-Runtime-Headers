/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 ;
-(id)init;
-(id<AVTUIRaiseGestureManagerDelegate>)delegate;
-(void)setDelegate:(id<AVTUIRaiseGestureManagerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)initWithBackingWakeGestureManager:(id)arg1 callbackQueue:(id)arg2 ;
-(CMWakeGestureManager *)wakeGestureManager;
-(void)startRaiseGestureUpdates;
-(void)stopRaiseGestureUpdates;
-(void)dealloc;
@end

