/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <CoreFoundation/NSMutableArray.h>

@class ML3DatabaseConnection, NSMutableDictionary;

@interface ML3SortMapFaultingEntryArray : NSMutableArray {

	ML3DatabaseConnection* _connection;
	NSMutableDictionary* _dirtyInserts;

}
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeLastObject;
-(id)initWithConnection:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)enumerateDirtyObjectsUsingBlock:(/*^block*/id)arg1 ;
@end

