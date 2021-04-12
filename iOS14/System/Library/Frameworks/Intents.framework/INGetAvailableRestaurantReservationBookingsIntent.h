/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INGetAvailableRestaurantReservationBookingsIntentExport.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INRestaurant, NSDateComponents, NSNumber, NSDate, NSString;

@interface INGetAvailableRestaurantReservationBookingsIntent : INIntent <INGetAvailableRestaurantReservationBookingsIntentExport, NSCopying> {

	INRestaurant* _restaurant;
	unsigned long long _partySize;
	NSDateComponents* _preferredBookingDateComponents;
	NSNumber* _maximumNumberOfResults;
	NSDate* _earliestBookingDateForResults;
	NSDate* _latestBookingDateForResults;
	NSDate* _preferredBookingDate;

}

@property (nonatomic,retain) NSDate * preferredBookingDate;                                //@synthesize preferredBookingDate=_preferredBookingDate - In the implementation block
@property (nonatomic,copy) INRestaurant * restaurant;                                      //@synthesize restaurant=_restaurant - In the implementation block
@property (assign,nonatomic) unsigned long long partySize;                                 //@synthesize partySize=_partySize - In the implementation block
@property (nonatomic,copy) NSDateComponents * preferredBookingDateComponents;              //@synthesize preferredBookingDateComponents=_preferredBookingDateComponents - In the implementation block
@property (nonatomic,copy) NSNumber * maximumNumberOfResults;                              //@synthesize maximumNumberOfResults=_maximumNumberOfResults - In the implementation block
@property (nonatomic,copy) NSDate * earliestBookingDateForResults;                         //@synthesize earliestBookingDateForResults=_earliestBookingDateForResults - In the implementation block
@property (nonatomic,copy) NSDate * latestBookingDateForResults;                           //@synthesize latestBookingDateForResults=_latestBookingDateForResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)intentDescription;
+(BOOL)supportsSecureCoding;
-(id)initWithRestaurant:(id)arg1 partySize:(unsigned long long)arg2 preferredBookingDateComponents:(id)arg3 maximumNumberOfResults:(id)arg4 earliestBookingDateForResults:(id)arg5 latestBookingDateForResults:(id)arg6 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSNumber *)maximumNumberOfResults;
-(void)setMaximumNumberOfResults:(NSNumber *)arg1 ;
-(void)setPartySize:(unsigned long long)arg1 ;
-(NSDateComponents *)preferredBookingDateComponents;
-(void)setPreferredBookingDateComponents:(NSDateComponents *)arg1 ;
-(NSDate *)latestBookingDateForResults;
-(void)setLatestBookingDateForResults:(NSDate *)arg1 ;
-(NSDate *)preferredBookingDate;
-(void)setPreferredBookingDate:(NSDate *)arg1 ;
-(void)setRestaurant:(INRestaurant *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)earliestBookingDateForResults;
-(unsigned long long)partySize;
-(void)setEarliestBookingDateForResults:(NSDate *)arg1 ;
-(INRestaurant *)restaurant;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

