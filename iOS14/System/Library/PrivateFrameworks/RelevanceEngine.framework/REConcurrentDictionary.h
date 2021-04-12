/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSMapTable, NSObject;

@interface REConcurrentDictionary : NSObject <NSCopying> {

	NSMapTable* _table;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long count; 
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)init;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initStrongToStrongDictionary;
-(id)initWeakToStrongDictionary;
@end

