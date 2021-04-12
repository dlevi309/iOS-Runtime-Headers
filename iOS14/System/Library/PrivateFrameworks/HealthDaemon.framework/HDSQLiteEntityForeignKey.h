/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString;

@interface HDSQLiteEntityForeignKey : NSObject {

	Class _entityClass;
	NSString* _property;
	long long _deletionAction;

}

@property (nonatomic,readonly) Class entityClass;                     //@synthesize entityClass=_entityClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * property;              //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) long long deletionAction;              //@synthesize deletionAction=_deletionAction - In the implementation block
-(NSString *)property;
-(Class)entityClass;
-(id)creationSQL;
-(long long)deletionAction;
-(id)initWithEntityClass:(Class)arg1 property:(id)arg2 deletionAction:(long long)arg3 ;
@end

