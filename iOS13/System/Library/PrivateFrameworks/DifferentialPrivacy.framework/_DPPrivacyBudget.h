/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@class NSString, _DPPrivacyBudgetProperties, _DPPrivacyBudgetRecord;

@interface _DPPrivacyBudget : NSObject {

	NSString* _name;
	_DPPrivacyBudgetProperties* _budgetProperties;
	_DPPrivacyBudgetRecord* _budgetRecord;

}

@property (nonatomic,readonly) _DPPrivacyBudgetProperties * budgetProperties;              //@synthesize budgetProperties=_budgetProperties - In the implementation block
@property (retain) _DPPrivacyBudgetRecord * budgetRecord;                                  //@synthesize budgetRecord=_budgetRecord - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                       //@synthesize name=_name - In the implementation block
+(void)initialize;
+(void)updateAllBudgetsUnsafeIn:(id)arg1 ;
+(BOOL)createDatabaseRecordIfMissingIn:(id)arg1 key:(id)arg2 balance:(long long)arg3 ;
+(id)fetchBudgetRecordFrom:(id)arg1 key:(id)arg2 ;
+(id)budgetWithName:(id)arg1 ;
+(void)removeBudgetWithName:(id)arg1 ;
+(BOOL)debit:(unsigned long long)arg1 budgetWithName:(id)arg2 ;
+(BOOL)credit:(unsigned long long)arg1 budgetWithName:(id)arg2 ;
+(long long)balanceForBudgetWithName:(id)arg1 ;
+(void)resetLastUpdateDateForName:(id)arg1 ;
+(void)updateAllBudgetsIn:(id)arg1 ;
+(void)createBudgetRecordsIn:(id)arg1 ;
+(id)fetchBudgetKeyNamesFrom:(id)arg1 ;
-(id)init;
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 budgetProperties:(id)arg2 ;
-(_DPPrivacyBudgetRecord *)budgetRecord;
-(_DPPrivacyBudgetProperties *)budgetProperties;
-(void)setBudgetRecord:(_DPPrivacyBudgetRecord *)arg1 ;
-(BOOL)initializeBudgetRecordFrom:(id)arg1 ;
@end

