/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)canceledByUser;
+(id)completedWithSettledPaymentAmount:(id)arg1;
+(id)completedWithOutstandingPaymentAmount:(id)arg1;
+(id)canceledMissedPickup;
+(BOOL)canceledByService;
-(BOOL)isCanceled;
-(id)init;
-(INCurrencyAmount *)paymentAmount;
-(void)setPaymentAmount:(id)arg1;
-(BOOL)isMissedPickup;
-(BOOL)isOutstanding;
-(BOOL)isCanceledByService;
-(void)setCompleted:(BOOL)arg1;
-(BOOL)isCompleted;
-(void)setCanceledByService:(BOOL)arg1;
-(NSUserActivity *)completionUserActivity;
-(void)setCompletionUserActivity:(id)arg1;
-(void)setMissedPickup:(BOOL)arg1;
-(void)setOutstanding:(BOOL)arg1;

@end

