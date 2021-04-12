/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBFloatingDockWindowLevelAssertion : NSObject <BSDescriptionProviding> {

	unsigned long long _priority;
	double _level;
	NSString* _reason;

}

@property (nonatomic,readonly) unsigned long long priority;              //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) double level;                             //@synthesize level=_level - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                   //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(double)level;
-(NSString *)reason;
-(void)invalidate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(unsigned long long)priority;
-(void)dealloc;
-(id)initWithPriority:(unsigned long long)arg1 level:(double)arg2 reason:(id)arg3 ;
@end

