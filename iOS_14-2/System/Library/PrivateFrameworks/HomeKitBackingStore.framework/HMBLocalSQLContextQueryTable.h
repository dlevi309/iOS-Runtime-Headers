/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)columnNames;
-(id)initWithColumnNames:(id)arg1 ;
-(id)description;
-(NSDictionary *)indexes;
-(NSMutableDictionary *)mutableIndexes;
@end

