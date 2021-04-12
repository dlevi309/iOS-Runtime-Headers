/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSSqliteResultRow.h>

@class NSArray;

@interface _BSSqliteFrozenResultRow : BSSqliteResultRow {

	unsigned long long _count;
	NSArray* _frozenColumnNames;
	NSArray* _frozenObjects;
	NSArray* _frozenIntegers;
	NSArray* _frozenDoubles;
	NSArray* _frozenStrings;
	NSArray* _frozenDatas;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(BOOL)isValid;
-(double)doubleAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_indexForKey:(id)arg1 ;
-(long long)integerAtIndex:(unsigned long long)arg1 ;
-(id)stringAtIndex:(unsigned long long)arg1 ;
-(id)dataAtIndex:(unsigned long long)arg1 ;
-(id)initWithResultRow:(id)arg1 ;
-(id)initWithStatement:(sqlite3_stmtRef)arg1 ;
@end

