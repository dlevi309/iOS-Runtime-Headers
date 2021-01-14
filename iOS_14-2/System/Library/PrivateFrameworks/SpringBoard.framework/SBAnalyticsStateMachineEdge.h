/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)edgeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 uponGestureState:(long long)arg3 ;
+(id)edgeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 uponGestureState:(long long)arg3 andDo:(/*^block*/id)arg4 ;
+(id)edgeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 uponEvent:(unsigned long long)arg3 ;
+(id)edgeFromState:(unsigned long long)arg1 transition:(/*^block*/id)arg2 ;
-(id)succinctDescription;
-(unsigned long long)handleEvent:(unsigned long long)arg1 withContext:(id)arg2 ;
-(unsigned long long)fromState;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)initWithFromState:(unsigned long long)arg1 transition:(/*^block*/id)arg2 ;
-(id)succinctDescriptionBuilder;
@end

