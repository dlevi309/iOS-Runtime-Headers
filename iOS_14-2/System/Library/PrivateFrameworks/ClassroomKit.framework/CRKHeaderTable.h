/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)keyPaths;
-(CRKTable *)table;
-(NSArray *)headers;
-(id)crk_JSONRepresentationWithPrettyPrinting:(BOOL)arg1 sortKeys:(BOOL)arg2 ;
-(id)tableString;
-(id)initWithHeaders:(id)arg1 keyPaths:(id)arg2 objects:(id)arg3 ;
@end

