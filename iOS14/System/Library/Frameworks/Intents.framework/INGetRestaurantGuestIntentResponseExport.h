/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INRestaurantGuest, INRestaurantGuestDisplayPreferences;


@protocol INGetRestaurantGuestIntentResponseExport <NSObject,JSExport>
@property (nonatomic,copy) INRestaurantGuest * guest; 
@property (nonatomic,copy) INRestaurantGuestDisplayPreferences * guestDisplayPreferences; 
@property (nonatomic,readonly) long long code; 
@required
-(void)setGuest:(id)arg1;
-(INRestaurantGuest *)guest;
-(id)init;
-(INRestaurantGuestDisplayPreferences *)guestDisplayPreferences;
-(void)setGuestDisplayPreferences:(id)arg1;
-(long long)code;

@end

