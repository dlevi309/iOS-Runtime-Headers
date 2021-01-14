/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CRKTable *)table;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)keyValuePairs;
-(id)initWithKeyValuePairs:(id)arg1 ;
-(id)crk_JSONRepresentationWithPrettyPrinting:(BOOL)arg1 sortKeys:(BOOL)arg2 ;
-(id)tableString;
@end

