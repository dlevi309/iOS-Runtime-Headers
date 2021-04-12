/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@class NSSet, NSMutableDictionary, NSDictionary;

@interface HMBLocalSQLContextQueryTable : HMFObject {

	NSSet* _columnNames;
	NSMutableDictionary* _mutableIndexes;

}

@property (nonatomic,readonly) NSMutableDictionary * mutableIndexes;              //@synthesize mutableIndexes=_mutableIndexes - In the implementation block
@property (nonatomic,readonly) NSSet * columnNames;                               //@synthesize columnNames=_columnNames - In the implementation block
@property (nonatomic,readonly) NSDictionary * indexes; 
-(id)description;
-(NSDictionary *)indexes;
-(NSSet *)columnNames;
-(NSMutableDictionary *)mutableIndexes;
-(id)initWithColumnNames:(id)arg1 ;
@end

