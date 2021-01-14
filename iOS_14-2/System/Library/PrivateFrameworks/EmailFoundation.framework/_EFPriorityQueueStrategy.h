/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFQueueingStrategy.h>

@class NSString;

@interface _EFPriorityQueueStrategy : NSObject <EFQueueingStrategy> {

	/*^block*/id _comparator;

}

@property (nonatomic,readonly) id comparator;                           //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,readonly) NSString * descriptionType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)enqueueObject:(id)arg1 replaceIfExists:(BOOL)arg2 buffer:(id)arg3 ;
-(void)dequeueObject:(id)arg1 buffer:(id)arg2 ;
-(NSString *)descriptionType;
-(id)comparator;
-(unsigned long long)_indexForObject:(id)arg1 buffer:(id)arg2 ;
-(id)initWithComparator:(/*^block*/id)arg1 ;
-(unsigned long long)_insertionIndexForObject:(id)arg1 buffer:(id)arg2 ;
@end

