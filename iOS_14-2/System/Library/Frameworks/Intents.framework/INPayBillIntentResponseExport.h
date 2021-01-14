/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INPaymentAccount, INBillDetails, INPaymentAmount, INDateComponentsRange, NSString;


@protocol INPayBillIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INPaymentAccount * fromAccount; 
@property (nonatomic,copy) INBillDetails * billDetails; 
@property (nonatomic,copy) INPaymentAmount * transactionAmount; 
@property (nonatomic,copy) INDateComponentsRange * transactionScheduledDate; 
@property (nonatomic,copy) NSString * transactionNote; 
@required
-(INBillDetails *)billDetails;
-(void)setBillDetails:(id)arg1;
-(INPaymentAccount *)fromAccount;
-(void)setFromAccount:(id)arg1;
-(INPaymentAmount *)transactionAmount;
-(void)setTransactionAmount:(id)arg1;
-(INDateComponentsRange *)transactionScheduledDate;
-(void)setTransactionScheduledDate:(id)arg1;
-(NSString *)transactionNote;
-(void)setTransactionNote:(id)arg1;
-(long long)code;

@end

