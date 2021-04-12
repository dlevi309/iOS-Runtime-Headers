/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)setWithSet:(id)arg1 ;
+(id)setWithArray:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CR11*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)removeAllObjects;
-(BOOL)containsObject:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(NSArray *)allObjects;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(id)setBySubtractingSet:(id)arg1 ;
-(id)setByIntersectingSet:(id)arg1 ;
@end

