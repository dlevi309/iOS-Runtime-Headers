/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBSwitcherModifierAction : NSObject <BSDescriptionProviding> {

	BOOL _consumed;
	double _delay;
	/*^block*/id _validator;

}

@property (nonatomic,copy) id validator;                                   //@synthesize validator=_validator - In the implementation block
@property (assign,getter=isConsumed,nonatomic) BOOL consumed;              //@synthesize consumed=_consumed - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) double delay;                               //@synthesize delay=_delay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionByAppendingAction:(id)arg1 toAction:(id)arg2 ;
-(id)init;
-(NSString *)description;
-(long long)type;
-(BOOL)isValid;
-(double)delay;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setValidator:(id)arg1 ;
-(id)validator;
-(BOOL)isConsumed;
-(id)appendAction:(id)arg1 ;
-(void)consumeWithReason:(id)arg1 ;
-(void)enumerateActionsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)leafCount;
-(void)enumerateLeafActionsUsingBlock:(/*^block*/id)arg1 ;
-(void)setDelay:(double)arg1 withValidator:(/*^block*/id)arg2 ;
-(void)setConsumed:(BOOL)arg1 ;
@end

