/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HomeKitBackingStore/HMBSQLStatement.h>

@class NSDictionary;

@interface HMBSQLQueryStatement : HMBSQLStatement {

	NSDictionary* _arguments;

}

@property (nonatomic,readonly) NSDictionary * arguments;              //@synthesize arguments=_arguments - In the implementation block
-(NSDictionary *)arguments;
-(id)initWithContext:(id)arg1 statement:(id)arg2 ;
-(id)initWithContext:(id)arg1 statement:(sqlite3_stmtRef)arg2 queryPlans:(id)arg3 arguments:(id)arg4 ;
@end

