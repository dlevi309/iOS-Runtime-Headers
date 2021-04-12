/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INIntent.h>

@class NSString, NSNumber, INCurrencyAmount;

@interface INSendRideFeedbackIntent : INIntent {

	NSString* _rideIdentifier;
	NSNumber* _rating;
	INCurrencyAmount* _tip;

}

@property (nonatomic,copy,readonly) NSString * rideIdentifier;              //@synthesize rideIdentifier=_rideIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * rating;                               //@synthesize rating=_rating - In the implementation block
@property (nonatomic,copy) INCurrencyAmount * tip;                          //@synthesize tip=_tip - In the implementation block
+(id)intentDescription;
+(BOOL)supportsSecureCoding;
-(NSNumber *)rating;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setRating:(NSNumber *)arg1 ;
-(NSString *)rideIdentifier;
-(void)setTip:(INCurrencyAmount *)arg1 ;
-(id)initWithRideIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INCurrencyAmount *)tip;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

