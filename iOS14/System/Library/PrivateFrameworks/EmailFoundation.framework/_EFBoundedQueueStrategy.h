/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSString * descriptionType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)enqueueObject:(id)arg1 replaceIfExists:(BOOL)arg2 buffer:(id)arg3 ;
-(void)dequeueObject:(id)arg1 buffer:(id)arg2 ;
-(NSString *)descriptionType;
-(unsigned long long)capacity;
-(id)overflowHandler;
-(id)initWithCapacity:(unsigned long long)arg1 overflowHandler:(/*^block*/id)arg2 ;
@end

