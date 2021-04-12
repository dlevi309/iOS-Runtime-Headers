/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(INDateComponentsRange *)dueDateRange;
-(void)setDueDateRange:(id)arg1;
-(INDateComponentsRange *)paymentDateRange;
-(void)setPaymentDateRange:(id)arg1;
-(long long)billType;
-(void)setBillPayee:(id)arg1;
-(void)setBillType:(long long)arg1;
-(void)setStatus:(long long)arg1;
-(INBillPayee *)billPayee;
-(long long)status;

@end

