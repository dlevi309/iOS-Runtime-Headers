/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSArray;

@interface AMSThreadSafeDictionary : NSObject {

	NSMutableDictionary* _backingDictionary;
	NSObject*<OS_dispatch_queue> _backingDictionaryAccessQueue;

}

@property (nonatomic,retain) NSMutableDictionary * backingDictionary;                                //@synthesize backingDictionary=_backingDictionary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backingDictionaryAccessQueue;              //@synthesize backingDictionaryAccessQueue=_backingDictionaryAccessQueue - In the implementation block
@property (copy,readonly) NSArray * allKeys; 
@property (copy,readonly) NSArray * allValues; 
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)init;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(NSMutableDictionary *)backingDictionary;
-(void)setBackingDictionary:(NSMutableDictionary *)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(NSArray *)allValues;
-(NSObject*<OS_dispatch_queue>)backingDictionaryAccessQueue;
-(void)setBackingDictionaryAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)allKeys;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

