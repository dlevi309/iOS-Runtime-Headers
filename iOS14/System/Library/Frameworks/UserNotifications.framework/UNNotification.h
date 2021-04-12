/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/AFOpportuneSpeakable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, UNNotificationRequest, NSString, NSArray;

@interface UNNotification : NSObject <AFOpportuneSpeakable, NSCopying, NSSecureCoding> {

	NSDate* _date;
	UNNotificationRequest* _request;
	NSString* _sourceIdentifier;
	NSArray* _intentIdentifiers;

}

@property (nonatomic,copy,readonly) NSString * sourceIdentifier;                  //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * intentIdentifiers;                  //@synthesize intentIdentifiers=_intentIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) UNNotificationRequest * request;              //@synthesize request=_request - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)notificationWithRequest:(id)arg1 date:(id)arg2 ;
+(id)notificationWithRequest:(id)arg1 date:(id)arg2 sourceIdentifier:(id)arg3 intentIdentifiers:(id)arg4 ;
-(id)speakableContent;
-(id)speakableDescription;
-(id)speakableDate;
-(id)speakableIdentifier;
-(NSArray *)intentIdentifiers;
-(void)encodeWithCoder:(id)arg1 ;
-(UNNotificationRequest *)request;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithNotificationRequest:(id)arg1 date:(id)arg2 sourceIdentifier:(id)arg3 intentIdentifiers:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)sourceIdentifier;
@end

