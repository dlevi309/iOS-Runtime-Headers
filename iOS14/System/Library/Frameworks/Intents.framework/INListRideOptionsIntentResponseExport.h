/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray, NSDate;


@protocol INListRideOptionsIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSArray * rideOptions; 
@property (nonatomic,copy) NSArray * paymentMethods; 
@property (nonatomic,copy) NSDate * expirationDate; 
@required
-(void)setExpirationDate:(id)arg1;
-(NSArray *)rideOptions;
-(void)setRideOptions:(id)arg1;
-(NSDate *)expirationDate;
-(NSArray *)paymentMethods;
-(void)setPaymentMethods:(id)arg1;
-(long long)code;

@end

