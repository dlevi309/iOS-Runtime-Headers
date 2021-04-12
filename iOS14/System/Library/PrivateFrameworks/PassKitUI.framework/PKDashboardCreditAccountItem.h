/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKAccount, PKTransactionSource, NSArray, PKSpendingSummary, PKSpendingSummaryFetcher, NSString;

@interface PKDashboardCreditAccountItem : NSObject <PKDashboardItem> {

	PKAccount* _account;
	PKTransactionSource* _transactionSource;
	unsigned long long _type;
	NSArray* _weeks;
	NSArray* _months;
	NSArray* _years;
	PKSpendingSummary* _summary;
	PKSpendingSummaryFetcher* _summaryFetcher;
	NSArray* _mostRecentTransactions;
	NSArray* _upcomingScheduledPayments;

}

@property (nonatomic,readonly) PKAccount * account;                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PKTransactionSource * transactionSource;                //@synthesize transactionSource=_transactionSource - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * weeks;                                        //@synthesize weeks=_weeks - In the implementation block
@property (nonatomic,retain) NSArray * months;                                       //@synthesize months=_months - In the implementation block
@property (nonatomic,retain) NSArray * years;                                        //@synthesize years=_years - In the implementation block
@property (nonatomic,retain) PKSpendingSummary * summary;                            //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) PKSpendingSummaryFetcher * summaryFetcher;              //@synthesize summaryFetcher=_summaryFetcher - In the implementation block
@property (nonatomic,retain) NSArray * mostRecentTransactions;                       //@synthesize mostRecentTransactions=_mostRecentTransactions - In the implementation block
@property (nonatomic,retain) NSArray * upcomingScheduledPayments;                    //@synthesize upcomingScheduledPayments=_upcomingScheduledPayments - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(PKAccount *)account;
-(NSArray *)upcomingScheduledPayments;
-(NSArray *)weeks;
-(NSArray *)months;
-(NSArray *)years;
-(PKSpendingSummary *)summary;
-(id)initWithAccount:(id)arg1 transactionSource:(id)arg2 type:(unsigned long long)arg3 ;
-(void)setMonths:(NSArray *)arg1 ;
-(void)setYears:(NSArray *)arg1 ;
-(void)setSummaryFetcher:(PKSpendingSummaryFetcher *)arg1 ;
-(void)setMostRecentTransactions:(NSArray *)arg1 ;
-(void)setUpcomingScheduledPayments:(NSArray *)arg1 ;
-(unsigned long long)type;
-(void)setSummary:(PKSpendingSummary *)arg1 ;
-(PKSpendingSummaryFetcher *)summaryFetcher;
-(NSArray *)mostRecentTransactions;
-(void)setWeeks:(NSArray *)arg1 ;
-(PKTransactionSource *)transactionSource;
-(void)setTransactionSource:(PKTransactionSource *)arg1 ;
@end

