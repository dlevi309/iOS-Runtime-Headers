/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>

@class HMBSQLContext, NSArray;

@interface HMBSQLStatement : HMFObject {

	HMBSQLContext* _context;
	sqlite3_stmtRef _statement;
	NSArray* _queryPlans;

}

@property (assign,nonatomic) sqlite3_stmtRef statement;                     //@synthesize statement=_statement - In the implementation block
@property (nonatomic,__weak,readonly) HMBSQLContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSArray * queryPlans;                        //@synthesize queryPlans=_queryPlans - In the implementation block
+(BOOL)explainStatements;
+(sqlite3_stmtRef)sqlStatementForContext:(id)arg1 statement:(id)arg2 ;
+(void)setExplainStatements:(BOOL)arg1 ;
+(id)queryPlansForContext:(id)arg1 statement:(id)arg2 ;
-(sqlite3_stmtRef)statement;
-(void)finalize;
-(HMBSQLContext *)context;
-(id)initWithContext:(id)arg1 statement:(id)arg2 ;
-(void)setStatement:(sqlite3_stmtRef)arg1 ;
-(void)dealloc;
-(id)initWithContext:(id)arg1 statement:(sqlite3_stmtRef)arg2 queryPlans:(id)arg3 ;
-(NSArray *)queryPlans;
@end

