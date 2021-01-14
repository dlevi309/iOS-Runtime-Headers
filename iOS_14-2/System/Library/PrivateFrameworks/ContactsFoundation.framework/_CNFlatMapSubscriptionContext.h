/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol CNScheduler;
@class CNQueue, NSMutableArray;

@interface _CNFlatMapSubscriptionContext : NSObject {

	CNQueue* _decorators;
	NSMutableArray* _tokens;
	id<CNScheduler> _downstream;
	id<CNScheduler> _resourceLock;
	BOOL _operatorReceiving;
	BOOL _observerReceiving;

}

@property (nonatomic,readonly) CNQueue * decorators;                                         //@synthesize decorators=_decorators - In the implementation block
@property (nonatomic,readonly) NSMutableArray * tokens;                                      //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> downstream;                                   //@synthesize downstream=_downstream - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> resourceLock;                                 //@synthesize resourceLock=_resourceLock - In the implementation block
@property (assign,getter=isOperatorReceiving,nonatomic) BOOL operatorReceiving;              //@synthesize operatorReceiving=_operatorReceiving - In the implementation block
@property (assign,getter=isObserverReceiving,nonatomic) BOOL observerReceiving;              //@synthesize observerReceiving=_observerReceiving - In the implementation block
-(NSMutableArray *)tokens;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(id<CNScheduler>)downstream;
-(id<CNScheduler>)resourceLock;
-(CNQueue *)decorators;
-(BOOL)isObserverReceiving;
-(void)setObserverReceiving:(BOOL)arg1 ;
-(BOOL)isOperatorReceiving;
-(void)setOperatorReceiving:(BOOL)arg1 ;
@end

