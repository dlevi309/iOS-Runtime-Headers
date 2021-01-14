/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSArray, NSNumber, NSDictionary, NSMapTable;

@interface HMBModelQuery : HMFObject {

	NSString* _sqlPredicate;
	NSArray* _sqlColumns;
	unsigned long long _maximumRowsPerSelect;
	NSNumber* _initialSequence;
	NSDictionary* _arguments;
	NSMapTable* _preparedQueries;
	Class _modelClass;
	NSString* _sqlSelect;
	NSDictionary* _argumentFields;
	NSDictionary* _defaultArgumentValues;

}

@property (nonatomic,readonly) NSString * sqlPredicate;                              //@synthesize sqlPredicate=_sqlPredicate - In the implementation block
@property (nonatomic,readonly) NSArray * sqlColumns;                                 //@synthesize sqlColumns=_sqlColumns - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumRowsPerSelect;              //@synthesize maximumRowsPerSelect=_maximumRowsPerSelect - In the implementation block
@property (nonatomic,readonly) NSNumber * initialSequence;                           //@synthesize initialSequence=_initialSequence - In the implementation block
@property (nonatomic,readonly) NSDictionary * arguments;                             //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,readonly) NSMapTable * preparedQueries;                         //@synthesize preparedQueries=_preparedQueries - In the implementation block
@property (nonatomic,retain) Class modelClass;                                       //@synthesize modelClass=_modelClass - In the implementation block
@property (nonatomic,readonly) NSString * sqlSelect;                                 //@synthesize sqlSelect=_sqlSelect - In the implementation block
@property (nonatomic,readonly) NSDictionary * argumentFields;                        //@synthesize argumentFields=_argumentFields - In the implementation block
@property (nonatomic,readonly) NSDictionary * defaultArgumentValues;                 //@synthesize defaultArgumentValues=_defaultArgumentValues - In the implementation block
@property (nonatomic,readonly) BOOL hasExpectedIndexes; 
-(NSDictionary *)arguments;
-(id)description;
-(void)setModelClass:(Class)arg1 ;
-(Class)modelClass;
-(id)performQueryOn:(id)arg1 arguments:(id)arg2 ;
-(BOOL)hasExpectedIndexes;
-(unsigned long long)maximumRowsPerSelect;
-(id)prepareOnTable:(id)arg1 ;
-(NSMapTable *)preparedQueries;
-(NSArray *)sqlColumns;
-(NSString *)sqlPredicate;
-(id)initWithSQLPredicate:(id)arg1 sqlColumns:(id)arg2 initialSequence:(id)arg3 maximumRowsPerSelect:(unsigned long long)arg4 arguments:(id)arg5 ;
-(NSNumber *)initialSequence;
-(NSString *)sqlSelect;
-(NSDictionary *)argumentFields;
-(NSDictionary *)defaultArgumentValues;
@end

