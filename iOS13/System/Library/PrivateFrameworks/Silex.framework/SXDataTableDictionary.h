/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableIndexSet, NSMutableArray;

@interface SXDataTableDictionary : NSObject <NSFastEnumeration> {

	unsigned long long _numberOfRows;
	unsigned long long _numberOfColumns;
	NSMutableIndexSet* _indexes;
	NSMutableArray* _storage;

}

@property (nonatomic,readonly) unsigned long long numberOfRows;                 //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfColumns;              //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * indexes;                       //@synthesize indexes=_indexes - In the implementation block
@property (nonatomic,retain) NSMutableArray * storage;                          //@synthesize storage=_storage - In the implementation block
+(id)dataTableDictionaryWithRows:(unsigned long long)arg1 andColumns:(unsigned long long)arg2 ;
-(id)description;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SX16*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)removeAllObjects;
-(NSMutableArray *)storage;
-(void)setStorage:(NSMutableArray *)arg1 ;
-(unsigned long long)numberOfColumns;
-(unsigned long long)numberOfRows;
-(NSMutableIndexSet *)indexes;
-(void)setIndexes:(NSMutableIndexSet *)arg1 ;
-(unsigned long long)indexForIndexPath:(NSRange)arg1 ;
-(NSRange)indexPathForIndex:(unsigned long long)arg1 ;
-(id)objectForIndexPath:(NSRange)arg1 ;
-(void)setObject:(id)arg1 forIndexPath:(NSRange)arg2 ;
-(id)initWithRows:(unsigned long long)arg1 andColumns:(unsigned long long)arg2 ;
-(id)arrayWithObject:(id)arg1 forCount:(unsigned long long)arg2 ;
-(void)removeObjectForIndexPath:(NSRange)arg1 ;
-(NSRange)indexPathOfObject:(id)arg1 ;
@end

