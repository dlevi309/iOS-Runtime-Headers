/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(INPaymentAccount *)fromAccount;
-(void)setFromAccount:(id)arg1;
-(INPaymentAmount *)transactionAmount;
-(void)setTransactionAmount:(id)arg1;
-(INDateComponentsRange *)transactionScheduledDate;
-(void)setTransactionScheduledDate:(id)arg1;
-(NSString *)transactionNote;
-(void)setTransactionNote:(id)arg1;
-(INBillPayee *)billPayee;
-(void)setBillPayee:(id)arg1;
-(INDateComponentsRange *)dueDate;
-(void)setDueDate:(id)arg1;
-(long long)billType;
-(void)setBillType:(long long)arg1;

@end

