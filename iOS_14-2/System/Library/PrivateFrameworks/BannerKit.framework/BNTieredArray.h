/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <BannerKit/BannerKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, NSArray;

@interface BNTieredArray : NSObject <NSCopying, NSFastEnumeration> {

	NSMutableArray* _collections;
	NSArray* _allObjects;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long tierCount; 
@property (nonatomic,readonly) id topObject; 
@property (nonatomic,readonly) NSArray * topObjectFromEachTier; 
@property (nonatomic,readonly) NSArray * allObjects; 
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BN7*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)objectAtIndexPath:(id)arg1 ;
-(NSArray *)allObjects;
-(void)removeObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)indexPathForObject:(id)arg1 ;
-(unsigned long long)tierCount;
-(id)tierAtIndex:(unsigned long long)arg1 ;
-(id)topObjectInTier:(long long)arg1 ;
-(void)insertObject:(id)arg1 beneathObject:(id)arg2 ;
-(void)addObject:(id)arg1 incrementingTier:(BOOL)arg2 ;
-(id)topObject;
-(void)_invalidateAllObjectsCache;
-(void)removeObjectAtIndexPath:(id)arg1 ;
-(NSArray *)topObjectFromEachTier;
@end

