/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(id)intentDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(INCurrencyAmount *)tip;
-(NSNumber *)rating;
-(void)setRating:(NSNumber *)arg1 ;
-(void)setTip:(INCurrencyAmount *)arg1 ;
-(NSString *)rideIdentifier;
-(id)initWithRideIdentifier:(id)arg1 ;
@end

