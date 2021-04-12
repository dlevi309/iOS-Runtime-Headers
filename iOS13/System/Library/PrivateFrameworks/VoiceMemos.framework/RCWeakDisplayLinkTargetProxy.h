/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/RCDisplayLinkTargetProxy.h>

@class RCWeakRef;

@interface RCWeakDisplayLinkTargetProxy : RCDisplayLinkTargetProxy {

	RCWeakRef* _weakTarget;
	SEL _weakTargetSelector;

}
-(void)dealloc;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)displayLinkFired:(id)arg1 ;
@end

