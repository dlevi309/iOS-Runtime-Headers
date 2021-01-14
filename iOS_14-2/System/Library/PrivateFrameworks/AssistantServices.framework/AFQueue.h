/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol AFQueueDelegate;
@class AFLinkedListItem;

@interface AFQueue : NSObject <NSFastEnumeration> {

	AFLinkedListItem* _head;
	AFLinkedListItem* _tail;
	unsigned long long _count;
	id<AFQueueDelegate> _delegate;

}

@property (nonatomic,readonly) id frontObject; 
@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic,__weak) id<AFQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_AF1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id<AFQueueDelegate>)delegate;
-(unsigned long long)count;
-(id)dequeueObject;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)setDelegate:(id<AFQueueDelegate>)arg1 ;
-(id)description;
-(void)enqueueObjects:(id)arg1 ;
-(void)enqueueObject:(id)arg1 ;
-(id)_objects;
-(id)frontObject;
-(id)dequeueAllObjects;
-(void)dealloc;
@end

