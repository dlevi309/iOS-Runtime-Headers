/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)initStrongToStrongDictionary;
-(id)initWeakToStrongDictionary;
@end

