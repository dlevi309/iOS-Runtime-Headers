/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKTablePrinting.h>

@class CRKTable, NSArray;

@interface CRKHeaderTable : NSObject <CRKTablePrinting> {

	CRKTable* _table;
	NSArray* _headers;
	NSArray* _keyPaths;
	NSArray* _objects;

}

@property (nonatomic,copy,readonly) NSArray * headers;               //@synthesize headers=_headers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * keyPaths;              //@synthesize keyPaths=_keyPaths - In the implementation block
@property (nonatomic,copy,readonly) NSArray * objects;               //@synthesize objects=_objects - In the implementation block
@property (nonatomic,readonly) CRKTable * table;                     //@synthesize table=_table - In the implementation block
-(NSArray *)objects;
-(CRKTable *)table;
-(NSArray *)headers;
-(NSArray *)keyPaths;
-(id)crk_JSONRepresentationWithPrettyPrinting:(BOOL)arg1 sortKeys:(BOOL)arg2 ;
-(id)tableString;
-(id)initWithHeaders:(id)arg1 keyPaths:(id)arg2 objects:(id)arg3 ;
@end

