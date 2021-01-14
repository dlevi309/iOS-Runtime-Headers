/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)stringAtIndex:(unsigned long long)arg1 ;
-(id)dataAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(BOOL)isValid;
-(long long)integerAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)doubleAtIndex:(unsigned long long)arg1 ;
@end

