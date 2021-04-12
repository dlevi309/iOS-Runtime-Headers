/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSURL, SAUIAppPunchOut, NSNumber, SACalendar, NSString;

@interface SARestaurantOpening : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSURL * bookingId; 
@property (nonatomic,retain) SAUIAppPunchOut * makeReservationPunchOut; 
@property (nonatomic,copy) NSNumber * partySize; 
@property (nonatomic,retain) SACalendar * timeSlot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)opening;
+(id)openingWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setPartySize:(NSNumber *)arg1 ;
-(SACalendar *)timeSlot;
-(NSNumber *)partySize;
-(NSURL *)bookingId;
-(void)setBookingId:(NSURL *)arg1 ;
-(SAUIAppPunchOut *)makeReservationPunchOut;
-(void)setMakeReservationPunchOut:(SAUIAppPunchOut *)arg1 ;
-(void)setTimeSlot:(SACalendar *)arg1 ;
@end

