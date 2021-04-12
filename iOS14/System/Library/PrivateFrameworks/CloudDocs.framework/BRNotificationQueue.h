/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, NSMutableDictionary;

@interface BRNotificationQueue : NSObject <NSFastEnumeration> {

	NSMutableArray* _array;
	NSMutableArray* _callbacks;
	NSMutableDictionary* _index;
	unsigned long long _dequeued;
	unsigned long long _dequeuedNotificationCount;

}

@property (nonatomic,readonly) unsigned long long count; 
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BR10*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(unsigned long long)count;
-(void)dequeue:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)addNotification:(id)arg1 asDead:(BOOL)arg2 ;
-(id)description;
-(void)_filterIndex:(id)arg1 ;
-(void)processDequeueCallbacks;
-(void)addDequeueCallback:(/*^block*/id)arg1 ;
-(void)removeAllObjects;
@end

