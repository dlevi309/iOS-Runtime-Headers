/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_CDStringKeyDataValueStoring.h>

@protocol OS_dispatch_queue, OS_os_log;
@class NSObject, NSMutableDictionary;

@interface _CDSharedMemoryKeyValueStore : NSObject <_CDStringKeyDataValueStoring> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _archivingQueue;
	BOOL _needToPersist;
	NSObject*<OS_os_log> _log;
	NSMutableDictionary* _dictionary;
	void* _mappedMem;
	unsigned long long _size;

}

@property (nonatomic,readonly) unsigned long long size;              //@synthesize size=_size - In the implementation block
+(id)sharedInstance;
+(unsigned long long)defaultSize;
+(id)defaultName;
+(id)keyValueStoreWithName:(id)arg1 size:(unsigned long long)arg2 ;
-(void*)memoryPointer;
-(id)dataForKey:(id)arg1 ;
-(BOOL)setData:(id)arg1 forKey:(id)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)size;
-(id)valueForKey:(id)arg1 ;
-(id)description;
-(BOOL)setData:(id)arg1 forKey:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)removeDataForKeys:(id)arg1 ;
-(id)allKeys;
-(BOOL)removeDataForKey:(id)arg1 ;
@end

