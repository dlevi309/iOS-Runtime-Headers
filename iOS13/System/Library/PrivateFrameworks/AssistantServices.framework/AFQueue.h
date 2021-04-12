/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_AF1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id<AFQueueDelegate>)delegate;
-(void)setDelegate:(id<AFQueueDelegate>)arg1 ;
-(id)_objects;
-(void)enqueueObject:(id)arg1 ;
-(id)dequeueObject;
-(void)enqueueObjects:(id)arg1 ;
-(id)frontObject;
-(id)dequeueAllObjects;
@end

