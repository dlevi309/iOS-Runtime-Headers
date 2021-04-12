/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKAccount, PKPaymentPass, PKPaymentWebService, PKPaymentTransactionGroup, PKCreditAccountStatement, PKCreditAccountSummary, NSArray, NSString;

@interface PKDashboardBalanceSummaryItem : NSObject <PKDashboardItem> {

	PKAccount* _account;
	PKPaymentPass* _paymentPass;
	PKPaymentWebService* _webService;
	unsigned long long _type;
	PKPaymentTransactionGroup* _transactionGroup;
	PKCreditAccountStatement* _statement;
	PKCreditAccountSummary* _summary;
	NSArray* _statements;

}

@property (nonatomic,retain) PKAccount * account;                                       //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;                               //@synthesize paymentPass=_paymentPass - In the implementation block
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
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(PKAccount *)account;
-(void)setAccount:(PKAccount *)arg1 ;
-(void)setStatements:(NSArray *)arg1 ;
-(PKCreditAccountStatement *)statement;
-(void)setStatement:(PKCreditAccountStatement *)arg1 ;
-(PKCreditAccountSummary *)summary;
-(PKPaymentPass *)paymentPass;
-(void)setSummary:(PKCreditAccountSummary *)arg1 ;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(PKPaymentWebService *)webService;
-(NSArray *)statements;
-(PKPaymentTransactionGroup *)transactionGroup;
-(void)setWebService:(PKPaymentWebService *)arg1 ;
-(void)setTransactionGroup:(PKPaymentTransactionGroup *)arg1 ;
@end

