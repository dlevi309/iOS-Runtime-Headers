/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKTablePrinting.h>

@class CRKTable, NSArray;

@interface CRKKeyValueTable : NSObject <CRKTablePrinting> {

	CRKTable* _table;
	NSArray* _keyValuePairs;

}

@property (nonatomic,copy,readonly) NSArray * keyValuePairs;              //@synthesize keyValuePairs=_keyValuePairs - In the implementation block
@property (nonatomic,readonly) CRKTable * table;                          //@synthesize table=_table - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(CRKTable *)table;
-(NSArray *)keyValuePairs;
-(id)initWithKeyValuePairs:(id)arg1 ;
-(id)crk_JSONRepresentationWithPrettyPrinting:(BOOL)arg1 sortKeys:(BOOL)arg2 ;
-(id)tableString;
@end

