/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setStorage:(NSMutableArray *)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SX16*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(NSMutableArray *)storage;
-(unsigned long long)numberOfRows;
-(unsigned long long)numberOfColumns;
-(id)description;
-(void)removeAllObjects;
-(void)setIndexes:(NSMutableIndexSet *)arg1 ;
-(unsigned long long)indexForIndexPath:(NSRange)arg1 ;
-(NSRange)indexPathForIndex:(unsigned long long)arg1 ;
-(NSMutableIndexSet *)indexes;
-(id)objectForIndexPath:(NSRange)arg1 ;
-(void)setObject:(id)arg1 forIndexPath:(NSRange)arg2 ;
-(id)initWithRows:(unsigned long long)arg1 andColumns:(unsigned long long)arg2 ;
-(id)arrayWithObject:(id)arg1 forCount:(unsigned long long)arg2 ;
-(void)removeObjectForIndexPath:(NSRange)arg1 ;
-(NSRange)indexPathOfObject:(id)arg1 ;
@end

