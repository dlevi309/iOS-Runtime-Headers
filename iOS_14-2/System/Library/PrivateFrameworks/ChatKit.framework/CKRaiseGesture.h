/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class CMGestureManager;

@interface CKRaiseGesture : NSObject {

	int proximityToken;
	BOOL _enabled;
	BOOL _proximityState;
	long long _gestureState;
	id _target;
	SEL _action;
	CMGestureManager* _gestureManager;

}

@property (assign,nonatomic,__weak) id target;                                   //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                         //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) CMGestureManager * gestureManager;                  //@synthesize gestureManager=_gestureManager - In the implementation block
@property (assign,nonatomic) long long gestureState;                             //@synthesize gestureState=_gestureState - In the implementation block
@property (assign,nonatomic) BOOL proximityState;                                //@synthesize proximityState=_proximityState - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                      //@synthesize enabled=_enabled - In the implementation block
@property (getter=isRecognized,nonatomic,readonly) BOOL recognized; 
+(BOOL)isRaiseGestureSupported;
+(BOOL)isRaiseGestureEnabled;
-(void)setTarget:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(BOOL)proximityState;
-(BOOL)isRecognized;
-(void)setProximityMonitoringEnabled:(BOOL)arg1 ;
-(long long)gestureState;
-(void)proximityStateDidChange:(id)arg1 ;
-(void)setProximityState:(BOOL)arg1 ;
-(void)setGestureState:(long long)arg1 ;
-(void)setGestureManager:(CMGestureManager *)arg1 ;
-(CMGestureManager *)gestureManager;
-(id)target;
-(BOOL)isEnabled;
-(void)dealloc;
@end

