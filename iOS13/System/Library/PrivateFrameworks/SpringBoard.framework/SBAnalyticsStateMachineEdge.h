/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBAnalyticsStateMachineEdge : NSObject <BSDescriptionProviding> {

	unsigned long long _fromState;
	/*^block*/id _transition;

}

@property (nonatomic,readonly) unsigned long long fromState;              //@synthesize fromState=_fromState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)edgeFromState:(unsigned long long)arg1 transition:(/*^block*/id)arg2 ;
+(id)edgeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 uponEvent:(unsigned long long)arg3 ;
+(id)edgeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 uponGestureState:(long long)arg3 andDo:(/*^block*/id)arg4 ;
+(id)edgeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 uponGestureState:(long long)arg3 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)handleEvent:(unsigned long long)arg1 withContext:(id)arg2 ;
-(unsigned long long)fromState;
-(id)initWithFromState:(unsigned long long)arg1 transition:(/*^block*/id)arg2 ;
@end

