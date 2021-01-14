/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLInsertStatementValue.h>

@class NSString, NSMutableArray, NSMutableOrderedSet;

@interface EFSQLInsertStatement : NSObject <EFSQLInsertStatementValue> {

	NSString* _table;
	unsigned long long _conflictResolution;
	NSMutableArray* _values;
	NSMutableOrderedSet* _requiredColumns;

}

@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,copy,readonly) NSString * queryString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)addValue;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSString *)queryString;
-(id)initWithTable:(id)arg1 ;
-(id)initWithTable:(id)arg1 conflictResolution:(unsigned long long)arg2 ;
-(void)renderStatementWithNamedBindingsInto:(id)arg1 ;
-(void)enumerateBindingIndicesAndValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateBindingNamesAndValuesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isEmpty;
@end

