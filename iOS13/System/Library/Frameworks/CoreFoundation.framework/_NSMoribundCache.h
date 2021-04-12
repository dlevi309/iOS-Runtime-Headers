/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCache.h>

@interface _NSMoribundCache : NSCache
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setName:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 ;
-(unsigned long long)totalCostLimit;
-(void)setTotalCostLimit:(unsigned long long)arg1 ;
-(unsigned long long)countLimit;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(BOOL)evictsObjectsWithDiscardedContent;
-(void)setEvictsObjectsWithDiscardedContent:(BOOL)arg1 ;
@end

