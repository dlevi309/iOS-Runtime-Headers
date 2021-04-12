/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INBillPayee, INPaymentAccount, INPaymentAmount, INDateComponentsRange, NSString;


@protocol INPayBillIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INBillPayee * billPayee; 
@property (nonatomic,copy) INPaymentAccount * fromAccount; 
@property (nonatomic,copy) INPaymentAmount * transactionAmount; 
@property (nonatomic,copy) INDateComponentsRange * transactionScheduledDate; 
@property (nonatomic,copy) NSString * transactionNote; 
@property (assign,nonatomic) long long billType; 
@property (nonatomic,copy) INDateComponentsRange * dueDate; 
@required
-(id)init;
-(INDateComponentsRange *)dueDate;
-(long long)billType;
-(void)setBillPayee:(id)arg1;
-(void)setDueDate:(id)arg1;
-(void)setBillType:(long long)arg1;
-(INPaymentAccount *)fromAccount;
-(void)setFromAccount:(id)arg1;
-(INPaymentAmount *)transactionAmount;
-(void)setTransactionAmount:(id)arg1;
-(INDateComponentsRange *)transactionScheduledDate;
-(void)setTransactionScheduledDate:(id)arg1;
-(NSString *)transactionNote;
-(void)setTransactionNote:(id)arg1;
-(INBillPayee *)billPayee;

@end

