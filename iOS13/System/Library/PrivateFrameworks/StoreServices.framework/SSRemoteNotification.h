/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSDictionary, NSString, NSArray, NSDate;

@interface SSRemoteNotification : NSObject <SSXPCCoding> {

	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) NSDictionary * notificationUserInfo; 
@property (nonatomic,readonly) long long actionType; 
@property (nonatomic,readonly) NSString * alertBodyString; 
@property (nonatomic,readonly) NSString * alertCancelString; 
@property (nonatomic,readonly) NSString * alertOKString; 
@property (nonatomic,readonly) NSString * alertTitleString; 
@property (nonatomic,readonly) id badgeValue; 
@property (nonatomic,readonly) NSString * soundFileName; 
@property (nonatomic,readonly) BOOL explicitContent; 
@property (nonatomic,readonly) NSString * artworkUrl; 
@property (nonatomic,readonly) NSArray * buttons; 
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,readonly) NSDictionary * metrics; 
@property (nonatomic,readonly) NSString * tapUrl; 
@property (nonatomic,readonly) long long version; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)category;
-(id)valueForKey:(id)arg1 ;
-(long long)version;
-(NSDate *)expirationDate;
-(NSDictionary *)metrics;
-(id)badgeValue;
-(long long)actionType;
-(NSArray *)buttons;
-(NSString *)artworkUrl;
-(BOOL)explicitContent;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithNotificationUserInfo:(id)arg1 ;
-(id)_valueForAlertKey:(id)arg1 ;
-(id)_valueForAPSKey:(id)arg1 ;
-(NSString *)alertBodyString;
-(NSString *)alertCancelString;
-(NSString *)alertOKString;
-(NSString *)alertTitleString;
-(NSString *)soundFileName;
-(NSString *)tapUrl;
-(NSDictionary *)notificationUserInfo;
@end

