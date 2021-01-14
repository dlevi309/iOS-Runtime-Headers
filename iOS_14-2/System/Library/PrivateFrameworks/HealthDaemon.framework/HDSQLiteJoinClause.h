/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString;

@interface HDSQLiteJoinClause : NSObject {

	NSString* _joinAsName;
	NSString* _localTable;
	Class _targetEntityClass;
	NSString* _localReferenceProperty;
	NSString* _targetKeyProperty;
	long long _joinType;

}

@property (nonatomic,copy,readonly) NSString * localTable;                          //@synthesize localTable=_localTable - In the implementation block
@property (nonatomic,readonly) Class targetEntityClass;                             //@synthesize targetEntityClass=_targetEntityClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * joinAsName; 
@property (nonatomic,copy,readonly) NSString * localReferenceProperty;              //@synthesize localReferenceProperty=_localReferenceProperty - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetKeyProperty;                   //@synthesize targetKeyProperty=_targetKeyProperty - In the implementation block
@property (nonatomic,readonly) long long joinType;                                  //@synthesize joinType=_joinType - In the implementation block
+(id)innerJoinClauseFromTable:(id)arg1 toTargetEntity:(Class)arg2 as:(id)arg3 localReference:(id)arg4 targetKey:(id)arg5 ;
+(id)leftJoinClauseFromTable:(id)arg1 toTargetEntity:(Class)arg2 as:(id)arg3 localReference:(id)arg4 targetKey:(id)arg5 ;
-(NSString *)localReferenceProperty;
-(id)description;
-(long long)joinType;
-(id)SQLJoinClause;
-(id)copyWithJoinType:(long long)arg1 ;
-(NSString *)localTable;
-(unsigned long long)hash;
-(id)_initWithJoinType:(long long)arg1 fromTable:(id)arg2 toTargetEntity:(Class)arg3 as:(id)arg4 localReference:(id)arg5 targetKey:(id)arg6 ;
-(NSString *)targetKeyProperty;
-(NSString *)joinAsName;
-(BOOL)isEqual:(id)arg1 ;
-(Class)targetEntityClass;
@end

