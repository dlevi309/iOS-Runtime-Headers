/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HomeKitBackingStore/HMBSQLStatement.h>

@class NSDictionary;

@interface HMBSQLQueryStatement : HMBSQLStatement {

	NSDictionary* _arguments;

}

@property (nonatomic,readonly) NSDictionary * arguments;              //@synthesize arguments=_arguments - In the implementation block
-(id)initWithContext:(id)arg1 statement:(sqlite3_stmtRef)arg2 queryPlans:(id)arg3 arguments:(id)arg4 ;
-(NSDictionary *)arguments;
-(id)initWithContext:(id)arg1 statement:(id)arg2 ;
@end

