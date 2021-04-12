/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentResponse.h>

@class INCurrencyAmount, NSDateComponents;

@interface INCancelRideIntentResponse : INIntentResponse {

	INCurrencyAmount* _cancellationFee;
	NSDateComponents* _cancellationFeeThreshold;

}

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INCurrencyAmount * cancellationFee;                       //@synthesize cancellationFee=_cancellationFee - In the implementation block
@property (nonatomic,copy) NSDateComponents * cancellationFeeThreshold;              //@synthesize cancellationFeeThreshold=_cancellationFeeThreshold - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INCurrencyAmount *)cancellationFee;
-(void)setCancellationFee:(INCurrencyAmount *)arg1 ;
-(NSDateComponents *)cancellationFeeThreshold;
-(void)setCancellationFeeThreshold:(NSDateComponents *)arg1 ;
-(long long)code;
@end

