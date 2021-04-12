/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)userInfo;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)fireDate;
-(void)setFireDate:(id)arg1 ;
-(void)setTimeZone:(id)arg1 ;
-(id)timeZone;
-(id)category;
-(void)setCategory:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(id)region;
-(unsigned long long)repeatInterval;
-(void)setRegion:(id)arg1 ;
-(void)setRepeatInterval:(unsigned long long)arg1 ;
-(void)setRepeatCalendar:(id)arg1 ;
-(void)setAlertBody:(id)arg1 ;
-(void)setHasAction:(BOOL)arg1 ;
-(void)setAlertAction:(id)arg1 ;
-(void)setAlertLaunchImage:(id)arg1 ;
-(void)setAlertTitle:(id)arg1 ;
-(void)setSoundName:(id)arg1 ;
-(void)setApplicationIconBadgeNumber:(long long)arg1 ;
-(void)_setUserInfoData:(id)arg1 ;
-(void)setRegionTriggersOnce:(BOOL)arg1 ;
-(id)repeatCalendar;
-(id)alertBody;
-(BOOL)hasAction;
-(id)alertAction;
-(id)alertLaunchImage;
-(id)alertTitle;
-(id)soundName;
-(long long)applicationIconBadgeNumber;
-(BOOL)regionTriggersOnce;
-(id)nextFireDateForLastFireDate:(id)arg1 ;
-(BOOL)isTriggeredByDate;
-(id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2 ;
-(long long)compareFireDates:(id)arg1 ;
-(void)validate;
-(BOOL)isTriggeredByRegion;
@end

