/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <CoreFoundation/NSMutableArray.h>

@class ML3DatabaseConnection, NSMutableDictionary;

@interface ML3SortMapFaultingEntryArray : NSMutableArray {

	ML3DatabaseConnection* _connection;
	NSMutableDictionary* _dirtyInserts;

}
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeLastObject;
-(id)initWithConnection:(id)arg1 ;
-(void)enumerateDirtyObjectsUsingBlock:(/*^block*/id)arg1 ;
@end

