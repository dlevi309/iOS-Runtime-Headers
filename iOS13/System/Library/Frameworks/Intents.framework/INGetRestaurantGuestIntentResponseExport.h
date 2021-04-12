/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INRestaurantGuest, INRestaurantGuestDisplayPreferences;


@protocol INGetRestaurantGuestIntentResponseExport <NSObject,JSExport>
@property (nonatomic,copy) INRestaurantGuest * guest; 
@property (nonatomic,copy) INRestaurantGuestDisplayPreferences * guestDisplayPreferences; 
@property (nonatomic,readonly) long long code; 
@required
-(id)init;
-(long long)code;
-(INRestaurantGuest *)guest;
-(void)setGuest:(id)arg1;
-(INRestaurantGuestDisplayPreferences *)guestDisplayPreferences;
-(void)setGuestDisplayPreferences:(id)arg1;

@end

