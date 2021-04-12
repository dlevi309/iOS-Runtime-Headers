/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


#import <FileProvider/FileProvider-Structs.h>
@class NSMutableOrderedSet, NSMutableDictionary, NSMutableSet;

@interface _FPItemList : NSObject {

	NSMutableOrderedSet* _orderedSet;
	NSMutableDictionary* _itemsByIDs;
	NSMutableSet* _formerIDs;

}
-(id)init;
-(id)description;
-(id)mutableCopy;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeLastObject;
-(id)allObjects;
-(unsigned long long)indexOfObject:(id)arg1 inSortedRange:(NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(/*^block*/id)arg4 ;
-(void)sortUsingDescriptors:(id)arg1 ;
-(unsigned long long)indexOfItemID:(id)arg1 ;
-(void)removeObjectWithID:(id)arg1 ;
-(BOOL)isObsoleteID:(id)arg1 ;
@end

