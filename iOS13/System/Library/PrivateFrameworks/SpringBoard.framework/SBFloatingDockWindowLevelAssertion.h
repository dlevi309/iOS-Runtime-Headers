/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(NSString *)reason;
-(double)level;
-(unsigned long long)priority;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithPriority:(unsigned long long)arg1 level:(double)arg2 reason:(id)arg3 ;
@end

