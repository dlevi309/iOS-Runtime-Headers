/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKPaymentTransactionGroup, PKTransactionSource, PKAccount, NSArray, NSString;

@interface PKDashboardPaymentTransactionGroupItem : NSObject <PKDashboardItem> {

	PKPaymentTransactionGroup* _group;
	PKTransactionSource* _transactionSource;
	PKAccount* _account;
	NSArray* _tokens;

}

@property (nonatomic,retain) PKPaymentTransactionGroup * group;                    //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) PKTransactionSource * transactionSource;              //@synthesize transactionSource=_transactionSource - In the implementation block
@property (nonatomic,retain) PKAccount * account;                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSArray * tokens;                                     //@synthesize tokens=_tokens - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(void)setTokens:(NSArray *)arg1 ;
-(void)setGroup:(PKPaymentTransactionGroup *)arg1 ;
-(PKPaymentTransactionGroup *)group;
-(PKAccount *)account;
-(NSArray *)tokens;
-(void)setAccount:(PKAccount *)arg1 ;
-(unsigned long long)hash;
-(PKTransactionSource *)transactionSource;
-(void)setTransactionSource:(PKTransactionSource *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

