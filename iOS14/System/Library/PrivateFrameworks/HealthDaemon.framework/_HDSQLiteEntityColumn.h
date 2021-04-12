/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString, HDSQLiteEntityForeignKey;

@interface _HDSQLiteEntityColumn : NSObject {

	unsigned char _keyPathType;
	NSString* _name;
	NSString* _columnType;
	HDSQLiteEntityForeignKey* _foreignKey;

}

@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * columnType;                         //@synthesize columnType=_columnType - In the implementation block
@property (nonatomic,readonly) unsigned char keyPathType;                          //@synthesize keyPathType=_keyPathType - In the implementation block
@property (nonatomic,readonly) HDSQLiteEntityForeignKey * foreignKey;              //@synthesize foreignKey=_foreignKey - In the implementation block
-(HDSQLiteEntityForeignKey *)foreignKey;
-(NSString *)name;
-(id)description;
-(NSString *)columnType;
-(id)creationSQL;
-(id)initWithName:(id)arg1 columnType:(id)arg2 keyPathType:(unsigned char)arg3 foreignKey:(id)arg4 ;
-(id)_columnNameAndTypeString;
-(id)initWithName:(id)arg1 columnType:(id)arg2 keyPathType:(unsigned char)arg3 ;
-(id)initWithName:(id)arg1 columnType:(id)arg2 keyPathType:(unsigned char)arg3 targetEntityClass:(Class)arg4 targetProperty:(id)arg5 deletionAction:(long long)arg6 ;
-(unsigned char)keyPathType;
@end

