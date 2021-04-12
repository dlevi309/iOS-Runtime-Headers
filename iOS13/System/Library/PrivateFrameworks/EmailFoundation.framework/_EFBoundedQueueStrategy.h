/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFQueueingStrategy.h>

@class NSString;

@interface _EFBoundedQueueStrategy : NSObject <EFQueueingStrategy> {

	/*^block*/id _overflowHandler;
	unsigned long long _capacity;

}

@property (nonatomic,readonly) id overflowHandler;                       //@synthesize overflowHandler=_overflowHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * descriptionType; 
-(unsigned long long)capacity;
-(id)initWithCapacity:(unsigned long long)arg1 overflowHandler:(/*^block*/id)arg2 ;
-(NSString *)descriptionType;
-(void)enqueueObject:(id)arg1 replaceIfExists:(BOOL)arg2 buffer:(id)arg3 ;
-(void)dequeueObject:(id)arg1 buffer:(id)arg2 ;
-(id)overflowHandler;
@end

