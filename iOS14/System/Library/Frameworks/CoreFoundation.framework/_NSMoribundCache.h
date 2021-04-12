/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCache.h>

@interface _NSMoribundCache : NSCache
-(unsigned long long)countLimit;
-(unsigned long long)totalCostLimit;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(BOOL)evictsObjectsWithDiscardedContent;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 ;
-(void)setEvictsObjectsWithDiscardedContent:(BOOL)arg1 ;
-(void)setTotalCostLimit:(unsigned long long)arg1 ;
-(oneway void)release;
-(id)delegate;
-(id)retain;
-(id)autorelease;
-(void)removeObjectForKey:(id)arg1 ;
-(id)name;
-(void)setDelegate:(id)arg1 ;
-(id)copy;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)retainCount;
-(void)removeAllObjects;
-(void)setName:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

