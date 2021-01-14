/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSHashTable, NSArray;

@interface CRKPointerSet : NSObject <NSFastEnumeration> {

	NSHashTable* mBackingStore;

}

@property (nonatomic,readonly) long long count; 
@property (nonatomic,copy,readonly) NSArray * allObjects; 
+(id)setWithArray:(id)arg1 ;
+(id)setWithSet:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CR9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(long long)count;
-(void)addObjectsFromArray:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(NSArray *)allObjects;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)setBySubtractingSet:(id)arg1 ;
-(id)setByIntersectingSet:(id)arg1 ;
@end

