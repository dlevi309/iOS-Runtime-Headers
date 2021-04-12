/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSUserActivity, INCurrencyAmount;


@protocol INRideCompletionStatusExport <NSObject,JSExport>
@property (nonatomic,retain) NSUserActivity * completionUserActivity; 
@property (assign,getter=isCompleted,nonatomic) BOOL completed; 
@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
@property (assign,getter=isMissedPickup,nonatomic) BOOL missedPickup; 
@property (nonatomic,retain) INCurrencyAmount * paymentAmount; 
@property (assign,getter=isOutstanding,nonatomic) BOOL outstanding; 
@property (assign,getter=isCanceledByService,nonatomic) BOOL canceledByService; 
@required
+(BOOL)completed;
+(BOOL)canceledByService;
+(id)completedWithSettledPaymentAmount:(id)arg1;
+(id)completedWithOutstandingPaymentAmount:(id)arg1;
+(id)canceledByUser;
+(id)canceledMissedPickup;
-(id)init;
-(void)setCompleted:(BOOL)arg1;
-(BOOL)isCanceled;
-(BOOL)isCompleted;
-(INCurrencyAmount *)paymentAmount;
-(void)setPaymentAmount:(id)arg1;
-(void)setCanceledByService:(BOOL)arg1;
-(NSUserActivity *)completionUserActivity;
-(void)setCompletionUserActivity:(id)arg1;
-(void)setMissedPickup:(BOOL)arg1;
-(void)setOutstanding:(BOOL)arg1;
-(BOOL)isMissedPickup;
-(BOOL)isOutstanding;
-(BOOL)isCanceledByService;

@end

