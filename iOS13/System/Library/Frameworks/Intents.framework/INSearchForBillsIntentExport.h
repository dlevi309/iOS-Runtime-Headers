/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INBillPayee, INDateComponentsRange;


@protocol INSearchForBillsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INBillPayee * billPayee; 
@property (nonatomic,copy) INDateComponentsRange * paymentDateRange; 
@property (assign,nonatomic) long long billType; 
@property (assign,nonatomic) long long status; 
@property (nonatomic,copy) INDateComponentsRange * dueDateRange; 
@required
-(id)init;
-(long long)status;
-(void)setStatus:(long long)arg1;
-(INBillPayee *)billPayee;
-(void)setBillPayee:(id)arg1;
-(long long)billType;
-(void)setBillType:(long long)arg1;
-(INDateComponentsRange *)dueDateRange;
-(void)setDueDateRange:(id)arg1;
-(INDateComponentsRange *)paymentDateRange;
-(void)setPaymentDateRange:(id)arg1;

@end

