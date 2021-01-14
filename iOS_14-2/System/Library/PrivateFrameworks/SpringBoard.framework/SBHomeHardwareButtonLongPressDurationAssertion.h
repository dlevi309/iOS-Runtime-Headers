/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBHomeHardwareButtonLongPressDurationAssertion : NSObject <BSDescriptionProviding> {

	double _duration;
	NSString* _reason;

}

@property (nonatomic,readonly) double duration;                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(NSString *)reason;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(double)duration;
-(id)initWithReason:(id)arg1 duration:(double)arg2 ;
@end

