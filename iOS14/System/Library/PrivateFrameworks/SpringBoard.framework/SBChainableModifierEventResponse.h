/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableArray, NSString;

@interface SBChainableModifierEventResponse : NSObject <BSDescriptionProviding> {

	NSMutableArray* _childResponses;
	BOOL _consumed;
	double _delay;
	/*^block*/id _validator;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) double delay;                           //@synthesize delay=_delay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)responseByAppendingResponse:(id)arg1 toResponse:(id)arg2 ;
+(id)newEventResponse;
-(id)succinctDescription;
-(id)init;
-(id)loggingCategory;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(double)delay;
-(BOOL)isValid;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)addChildResponse:(id)arg1 ;
-(void)enumerateChildResponsesUsingBlock:(/*^block*/id)arg1 ;
-(void)addChildResponses:(id)arg1 ;
-(void)setDelay:(double)arg1 withValidator:(/*^block*/id)arg2 ;
-(id)responseByTransformingResponseWithTransformer:(/*^block*/id)arg1 ;
-(void)insertChildResponse:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_initWithChildResponses:(id)arg1 ;
-(void)enumerateResponseTreeUsingBlock:(/*^block*/id)arg1 stop:(BOOL*)arg2 ;
-(void)consumeWithReason:(id)arg1 ;
-(void)enumerateResponseTreeUsingBlock:(/*^block*/id)arg1 ;
@end

