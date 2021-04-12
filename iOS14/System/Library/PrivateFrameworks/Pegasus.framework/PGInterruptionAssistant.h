/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/


#import <Pegasus/Pegasus-Structs.h>
@class NSMutableDictionary;

@interface PGInterruptionAssistant : NSObject {

	NSMutableDictionary* _reasons;
	BOOL _ignoreFaceTimeCameraInterruptions;
	BOOL _allowsResumingAfterInterruptionEnds;
	BOOL _isInterrupted;
	BOOL _lastInterruptionStateSentToProxy;
	os_unfair_lock_s _unfairLock;

}

@property (getter=isInterrupted,readonly) BOOL interrupted; 
@property (readonly) BOOL allowsResumingAfterInterruptionEnds; 
-(BOOL)isInterrupted;
-(id)init;
-(long long)addReason:(long long)arg1 ;
-(long long)_numberOfInterruptionsForReason:(long long)arg1 ;
-(BOOL)_calculateIsInterrupted;
-(id)initWithExceptionPolicy:(long long)arg1 ;
-(BOOL)shouldNotifyProxyOfInterruptionBegan;
-(void)noteDidNotifyProxyOfInterruptionBegan;
-(BOOL)shouldNotifyProxyOfInterruptionEnded;
-(void)noteDidNotifyProxyOfInterruptionEnded;
-(BOOL)allowsResumingAfterInterruptionEnds;
-(long long)removeReason:(long long)arg1 ;
-(BOOL)isInterruptedForReason:(long long)arg1 ;
-(void)notePictureInPictureSessionDidEnd;
@end

