/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDate, NSTimeZone, NSCalendar, CLRegion, NSString, NSDictionary;

@interface UILocalNotification : NSObject <NSCopying, NSCoding>

@property (nonatomic,copy) NSDate * fireDate; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic) unsigned long long repeatInterval; 
@property (nonatomic,copy) NSCalendar * repeatCalendar; 
@property (nonatomic,copy) CLRegion * region; 
@property (assign,nonatomic) BOOL regionTriggersOnce; 
@property (nonatomic,copy) NSString * alertBody; 
@property (assign,nonatomic) BOOL hasAction; 
@property (nonatomic,copy) NSString * alertAction; 
@property (nonatomic,copy) NSString * alertLaunchImage; 
@property (nonatomic,copy) NSString * alertTitle; 
@property (nonatomic,copy) NSString * soundName; 
@property (assign,nonatomic) long long applicationIconBadgeNumber; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (nonatomic,copy) NSString * category; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)nextFireDateForLastFireDate:(id)arg1 ;
-(BOOL)isTriggeredByDate;
-(id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2 ;
-(long long)compareFireDates:(id)arg1 ;
-(void)validate;
-(BOOL)isTriggeredByRegion;
@end

