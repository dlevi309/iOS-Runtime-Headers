/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsPurchaseEvent : SSMetricsBaseEvent

@property (assign,nonatomic) double requestStartTime; 
@property (assign,nonatomic) double responseEndTime; 
@property (assign,nonatomic) double responseStartTime; 
@property (nonatomic,retain) NSString * transactionIdentifier; 
-(double)responseEndTime;
-(id)init;
-(void)setResponseStartTime:(double)arg1 ;
-(double)responseStartTime;
-(void)addFieldsFromPurchaseResponse:(id)arg1 ;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(void)setRequestStartTime:(double)arg1 ;
-(void)setResponseEndTime:(double)arg1 ;
-(double)requestStartTime;
-(NSString *)transactionIdentifier;
@end

