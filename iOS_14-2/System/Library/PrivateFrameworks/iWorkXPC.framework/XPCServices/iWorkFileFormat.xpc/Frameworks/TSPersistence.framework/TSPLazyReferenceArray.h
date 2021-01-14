/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class NSMutableArray, NSArray;

@interface TSPLazyReferenceArray : NSMutableArray {

	NSMutableArray* _references;
	unsigned long long _mutations;

}

@property (nonatomic,readonly) NSArray * references;              //@synthesize references=_references - In the implementation block
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromArray:(id)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromArray:(id)arg2 range:(NSRange)arg3 ;
-(void)removeLastObject;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS174*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(NSArray *)references;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(void)addReference:(id)arg1 ;
-(id)referenceAtIndex:(unsigned long long)arg1 ;
@end

