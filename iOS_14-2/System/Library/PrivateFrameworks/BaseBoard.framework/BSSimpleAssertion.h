/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue;
@class BSAtomicSignal, NSObject, NSString;

@interface BSSimpleAssertion : NSObject <BSInvalidatable, BSDescriptionProviding> {

	BSAtomicSignal* _invalidated;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _invalidationBlock;
	NSString* _identifier;
	NSString* _reason;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                  //@synthesize reason=_reason - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)initWithIdentifier:(id)arg1 forReason:(id)arg2 queue:(id)arg3 invalidationBlock:(/*^block*/id)arg4 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(BOOL)isValid;
-(NSString *)reason;
-(void)invalidate;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 forReason:(id)arg2 invalidationBlock:(/*^block*/id)arg3 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
@end

