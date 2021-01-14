/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILocalNotification.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSTimeZone, NSCalendar, CLRegion, NSString, NSData;

@interface UIConcreteLocalNotification : UILocalNotification <NSSecureCoding> {

	NSDate* fireDate;
	NSTimeZone* timeZone;
	unsigned long long repeatInterval;
	NSCalendar* repeatCalendar;
	CLRegion* region;
	BOOL regionTriggersOnce;
	NSString* alertBody;
	BOOL hasAction;
	NSString* alertAction;
	NSString* alertLaunchImage;
	NSString* alertTitle;
	NSString* soundName;
	long long applicationIconBadgeNumber;
	NSData* userInfoData;
	NSString* category;

}
+(BOOL)supportsSecureCoding;
-(void)setUserInfo:(id)arg1 ;
-(void)validate;
-(id)fireDate;
-(id)timeZone;
-(id)soundName;
-(void)setSoundName:(id)arg1 ;
-(id)region;
-(void)setCategory:(id)arg1 ;
-(void)setRegion:(id)arg1 ;
-(void)setTimeZone:(id)arg1 ;
-(id)alertBody;
-(id)userInfo;
-(id)init;
-(void)setFireDate:(id)arg1 ;
-(void)setRepeatCalendar:(id)arg1 ;
-(void)setHasAction:(BOOL)arg1 ;
-(void)setAlertTitle:(id)arg1 ;
-(void)setAlertAction:(id)arg1 ;
-(void)_setUserInfoData:(id)arg1 ;
-(void)setApplicationIconBadgeNumber:(long long)arg1 ;
-(void)setRegionTriggersOnce:(BOOL)arg1 ;
-(id)repeatCalendar;
-(long long)applicationIconBadgeNumber;
-(BOOL)regionTriggersOnce;
-(id)nextFireDateForLastFireDate:(id)arg1 ;
-(BOOL)isTriggeredByDate;
-(long long)compareFireDates:(id)arg1 ;
-(id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2 ;
-(BOOL)isTriggeredByRegion;
-(void)encodeWithCoder:(id)arg1 ;
-(id)category;
-(void)setRepeatInterval:(unsigned long long)arg1 ;
-(void)setAlertBody:(id)arg1 ;
-(id)description;
-(BOOL)isValid;
-(BOOL)hasAction;
-(void)setAlertLaunchImage:(id)arg1 ;
-(id)alertLaunchImage;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)alertTitle;
-(id)alertAction;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)repeatInterval;
-(BOOL)isEqual:(id)arg1 ;
@end

