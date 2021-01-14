/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDate, NSNumber;

@interface SANotificationObject : SADomainObject

@property (nonatomic,copy) NSString * applicationId; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSNumber * dateIsAllDay; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSString * notificationId; 
@property (nonatomic,copy) NSNumber * previewRestricted; 
@property (nonatomic,copy) NSString * priority; 
@property (nonatomic,copy) NSDate * recencyDate; 
@property (nonatomic,copy) NSString * source; 
@property (nonatomic,copy) NSString * threadIdentifier; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSString * type; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)notificationId;
-(NSString *)threadIdentifier;
-(NSDate *)endDate;
-(void)setNotificationId:(NSString *)arg1 ;
-(void)setThreadIdentifier:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)applicationId;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(void)setApplicationId:(NSString *)arg1 ;
-(void)setDateIsAllDay:(NSNumber *)arg1 ;
-(void)setPreviewRestricted:(NSNumber *)arg1 ;
-(void)setRecencyDate:(NSDate *)arg1 ;
-(NSString *)type;
-(NSString *)timeZoneId;
-(NSDate *)date;
-(NSString *)priority;
-(void)setPriority:(NSString *)arg1 ;
-(NSNumber *)dateIsAllDay;
-(NSDate *)recencyDate;
-(NSNumber *)previewRestricted;
-(NSString *)source;
@end

