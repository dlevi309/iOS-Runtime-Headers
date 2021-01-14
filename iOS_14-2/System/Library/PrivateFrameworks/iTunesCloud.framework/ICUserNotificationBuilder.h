/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString;

@interface ICUserNotificationBuilder : NSObject <NSCopying> {

	NSMutableDictionary* _userNotificationDictionary;
	long long _alertLevel;
	double _timeoutInterval;

}

@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * alternateButtonTitle; 
@property (nonatomic,copy) NSString * defaultButtonTitle; 
@property (nonatomic,copy) NSString * otherButtonTitle; 
@property (assign,nonatomic) BOOL allowInCar; 
@property (assign,nonatomic) BOOL displaysActionButtonOnLockScreen; 
@property (assign,nonatomic) BOOL displaysAsTopMost; 
@property (assign,nonatomic) BOOL forcesModalAppearance; 
@property (assign,nonatomic) long long alertLevel;                               //@synthesize alertLevel=_alertLevel - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                             //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(void)setAlternateButtonTitle:(NSString *)arg1 ;
-(NSString *)message;
-(id)init;
-(NSString *)alternateButtonTitle;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)allowInCar;
-(void)setAllowInCar:(BOOL)arg1 ;
-(long long)alertLevel;
-(void)_setBoolValue:(BOOL)arg1 forKey:(CFStringRef)arg2 ;
-(id)initWithStoreDialog:(id)arg1 ;
-(CFUserNotificationRef)createCFUserNotification;
-(BOOL)displaysActionButtonOnLockScreen;
-(BOOL)displaysAsTopMost;
-(BOOL)forcesModalAppearance;
-(void)setDisplaysActionButtonOnLockScreen:(BOOL)arg1 ;
-(void)setDisplaysAsTopMost:(BOOL)arg1 ;
-(void)setForcesModalAppearance:(BOOL)arg1 ;
-(void)setAlertLevel:(long long)arg1 ;
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1 ;
-(NSString *)defaultButtonTitle;
-(void)setDefaultButtonTitle:(NSString *)arg1 ;
-(NSString *)otherButtonTitle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOtherButtonTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

