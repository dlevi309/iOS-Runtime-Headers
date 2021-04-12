/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray, NSDate;


@protocol INListRideOptionsIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSArray * rideOptions; 
@property (nonatomic,copy) NSArray * paymentMethods; 
@property (nonatomic,copy) NSDate * expirationDate; 
@required
-(long long)code;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(id)arg1;
-(NSArray *)paymentMethods;
-(void)setPaymentMethods:(id)arg1;
-(NSArray *)rideOptions;
-(void)setRideOptions:(id)arg1;

@end

