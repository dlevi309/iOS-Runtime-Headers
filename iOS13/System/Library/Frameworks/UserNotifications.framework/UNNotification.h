/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)speakableIdentifier;
-(id)speakableDate;
-(id)speakableContent;
-(id)speakableDescription;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(UNNotificationRequest *)request;
-(NSString *)sourceIdentifier;
-(id)initWithNotificationRequest:(id)arg1 date:(id)arg2 sourceIdentifier:(id)arg3 intentIdentifiers:(id)arg4 ;
-(NSArray *)intentIdentifiers;
@end

