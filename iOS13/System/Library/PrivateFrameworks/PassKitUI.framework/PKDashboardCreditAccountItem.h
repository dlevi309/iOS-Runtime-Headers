/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKAccount, PKPaymentPass, NSArray, PKSpendingSummary, PKSpendingSummaryFetcher, NSString;

@interface PKDashboardCreditAccountItem : NSObject <PKDashboardItem> {

	PKAccount* _account;
	PKPaymentPass* _pass;
	unsigned long long _type;
	NSArray* _weeks;
	NSArray* _months;
	PKSpendingSummary* _summary;
	PKSpendingSummaryFetcher* _summaryFetcher;
	NSArray* _mostRecentTransactions;
	NSArray* _upcomingScheduledPayments;

}

@property (nonatomic,readonly) PKAccount * account;                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * pass;                                 //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * weeks;                                        //@synthesize weeks=_weeks - In the implementation block
@property (nonatomic,retain) NSArray * months;                                       //@synthesize months=_months - In the implementation block
@property (nonatomic,retain) PKSpendingSummary * summary;                            //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) PKSpendingSummaryFetcher * summaryFetcher;              //@synthesize summaryFetcher=_summaryFetcher - In the implementation block
@property (nonatomic,retain) NSArray * mostRecentTransactions;                       //@synthesize mostRecentTransactions=_mostRecentTransactions - In the implementation block
@property (nonatomic,retain) NSArray * upcomingScheduledPayments;                    //@synthesize upcomingScheduledPayments=_upcomingScheduledPayments - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)type;
-(PKAccount *)account;
-(PKSpendingSummary *)summary;
-(void)setSummary:(PKSpendingSummary *)arg1 ;
-(PKPaymentPass *)pass;
-(PKSpendingSummaryFetcher *)summaryFetcher;
-(NSArray *)weeks;
-(NSArray *)months;
-(NSArray *)mostRecentTransactions;
-(NSArray *)upcomingScheduledPayments;
-(id)initWithAccount:(id)arg1 pass:(id)arg2 type:(unsigned long long)arg3 ;
-(void)setWeeks:(NSArray *)arg1 ;
-(void)setMonths:(NSArray *)arg1 ;
-(void)setSummaryFetcher:(PKSpendingSummaryFetcher *)arg1 ;
-(void)setMostRecentTransactions:(NSArray *)arg1 ;
-(void)setUpcomingScheduledPayments:(NSArray *)arg1 ;
@end

