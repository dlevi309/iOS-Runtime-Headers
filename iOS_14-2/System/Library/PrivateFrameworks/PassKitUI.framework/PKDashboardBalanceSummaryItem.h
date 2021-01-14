/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKAccount, PKTransactionSource, PKPaymentWebService, PKPaymentTransactionGroup, PKCreditAccountStatement, PKCreditAccountSummary, NSArray, NSString;

@interface PKDashboardBalanceSummaryItem : NSObject <PKDashboardItem> {

	PKAccount* _account;
	PKTransactionSource* _transactionSource;
	PKPaymentWebService* _webService;
	unsigned long long _type;
	PKPaymentTransactionGroup* _transactionGroup;
	PKCreditAccountStatement* _statement;
	PKCreditAccountSummary* _summary;
	NSArray* _statements;

}

@property (nonatomic,retain) PKAccount * account;                                       //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PKTransactionSource * transactionSource;                   //@synthesize transactionSource=_transactionSource - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * webService;                          //@synthesize webService=_webService - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionGroup * transactionGroup;              //@synthesize transactionGroup=_transactionGroup - In the implementation block
@property (nonatomic,retain) PKCreditAccountStatement * statement;                      //@synthesize statement=_statement - In the implementation block
@property (nonatomic,retain) PKCreditAccountSummary * summary;                          //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSArray * statements;                                      //@synthesize statements=_statements - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(PKCreditAccountStatement *)statement;
-(PKAccount *)account;
-(void)setAccount:(PKAccount *)arg1 ;
-(PKPaymentWebService *)webService;
-(void)setType:(unsigned long long)arg1 ;
-(PKPaymentTransactionGroup *)transactionGroup;
-(NSArray *)statements;
-(PKCreditAccountSummary *)summary;
-(void)setStatement:(PKCreditAccountStatement *)arg1 ;
-(void)setWebService:(PKPaymentWebService *)arg1 ;
-(void)setTransactionGroup:(PKPaymentTransactionGroup *)arg1 ;
-(unsigned long long)type;
-(void)setStatements:(NSArray *)arg1 ;
-(void)setSummary:(PKCreditAccountSummary *)arg1 ;
-(PKTransactionSource *)transactionSource;
-(void)setTransactionSource:(PKTransactionSource *)arg1 ;
@end

