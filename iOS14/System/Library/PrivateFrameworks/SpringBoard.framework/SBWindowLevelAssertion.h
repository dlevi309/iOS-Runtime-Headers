/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString;

@interface SBWindowLevelAssertion : NSObject <BSDescriptionProviding, BSInvalidatable> {

	/*^block*/id _invalidationHandler;
	double _windowLevel;
	long long _priority;
	NSString* _reason;

}

@property (nonatomic,readonly) double windowLevel;                  //@synthesize windowLevel=_windowLevel - In the implementation block
@property (nonatomic,readonly) long long priority;                  //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(double)windowLevel;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(NSString *)reason;
-(void)invalidate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(long long)priority;
-(id)initWithPriority:(long long)arg1 windowLevel:(double)arg2 reason:(id)arg3 invalidationHandler:(/*^block*/id)arg4 ;
@end

