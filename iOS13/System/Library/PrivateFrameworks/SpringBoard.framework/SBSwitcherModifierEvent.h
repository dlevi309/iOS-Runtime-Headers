/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBSwitcherModifierEvent : NSObject <BSDescriptionProviding> {

	NSString* _handledReason;
	BOOL _handled;

}

@property (nonatomic,readonly) long long type; 
@property (getter=isHandled,nonatomic,readonly) BOOL handled;              //@synthesize handled=_handled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(long long)type;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isTransitionEvent;
-(void)handleWithReason:(id)arg1 ;
-(BOOL)isHandled;
-(BOOL)isGestureEvent;
@end

