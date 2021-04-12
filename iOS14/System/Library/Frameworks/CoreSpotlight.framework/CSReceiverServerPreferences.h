/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CoreSpotlightPreferences.h>

@class NSSet;

@interface CSReceiverServerPreferences : CoreSpotlightPreferences

@property (nonatomic,copy,readonly) NSSet * disabledServices; 
-(void)disableService:(id)arg1 ;
-(id)init;
-(NSSet *)disabledServices;
-(void)enableService:(id)arg1 ;
@end

