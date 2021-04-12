/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <CoreFoundation/NSMutableDictionary.h>

@class ML3DatabaseConnection, NSMutableDictionary;

@interface ML3SortMapFaultingNameOrderDictionary : NSMutableDictionary {

	ML3DatabaseConnection* _connection;
	NSMutableDictionary* _dirtyInserts;

}
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithConnection:(id)arg1 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

