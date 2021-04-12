/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
*/

#import <DuetActivityScheduler/DuetActivityScheduler-Structs.h>
#import <libobjc.A.dylib/_DASBudgetPersisting.h>

@class NSMutableDictionary, NSString;

@interface _DASSharedMemoryBudgetPersistence : NSObject <_DASBudgetPersisting> {

	SCD_Struct_DA3* _currentData;
	NSMutableDictionary* _budgetToIndex;

}

@property (nonatomic,retain) NSMutableDictionary * budgetToIndex;              //@synthesize budgetToIndex=_budgetToIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)log;
+(id)persistence;
-(id)init;
-(NSMutableDictionary *)budgetToIndex;
-(id)validatedStringFromStoredValue:(char*)arg1 withAllowedNames:(id)arg2 ;
-(id)loadBudgetsWithExpectedNames:(id)arg1 ;
-(void)saveBudgets:(id)arg1 ;
-(void)updateBudget:(id)arg1 ;
-(void)saveModulationDate:(id)arg1 ;
-(id)lastModulationDate;
-(void)setBudgetToIndex:(NSMutableDictionary *)arg1 ;
@end

