/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


#import <FileProvider/FileProvider-Structs.h>
@class NSMutableOrderedSet, NSMutableDictionary, NSMutableSet;

@interface _FPItemList : NSObject {

	NSMutableOrderedSet* _orderedSet;
	NSMutableDictionary* _itemsByIDs;
	NSMutableSet* _formerIDs;

}
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 inSortedRange:(NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(/*^block*/id)arg4 ;
-(void)removeLastObject;
-(id)init;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)mutableCopy;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)allObjects;
-(id)description;
-(void)addObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)sortUsingDescriptors:(id)arg1 ;
-(unsigned long long)indexOfItemID:(id)arg1 ;
-(void)removeObjectWithID:(id)arg1 ;
-(BOOL)isObsoleteID:(id)arg1 ;
@end

