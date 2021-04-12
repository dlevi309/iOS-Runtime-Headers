/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@class NSMutableArray;

@interface _PFMulticasterReceiverList : NSObject {

	id _inlineReceivers[12];
	NSMutableArray* _extraReceivers;
	SEL _selector;
	unsigned long long _count;

}

@property (readonly) SEL selector;                          //@synthesize selector=_selector - In the implementation block
@property (readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SEL)selector;
-(unsigned long long)count;
-(id)initWithSelector:(SEL)arg1 receivers:(id)arg2 ;
-(id)initWithSelector:(SEL)arg1 receiversHash:(id)arg2 ;
-(BOOL)hasReceivers;
-(void)enumerateReceiversWithBlock:(/*^block*/id)arg1 ;
@end

