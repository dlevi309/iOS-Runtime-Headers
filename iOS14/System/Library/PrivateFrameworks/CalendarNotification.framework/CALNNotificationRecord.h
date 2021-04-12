/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <CalendarNotification/CalendarNotification-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CALNNotificationContent, NSDate;

@interface CALNNotificationRecord : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _sourceIdentifier;
	NSString* _sourceClientIdentifier;
	CALNNotificationContent* _content;
	NSDate* _date;
	BOOL _shouldPresentAlert;
	BOOL _shouldPlaySound;

}

@property (nonatomic,copy,readonly) NSString * sourceIdentifier;                    //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceClientIdentifier;              //@synthesize sourceClientIdentifier=_sourceClientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) CALNNotificationContent * content;              //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                  //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL shouldPresentAlert;                             //@synthesize shouldPresentAlert=_shouldPresentAlert - In the implementation block
@property (nonatomic,readonly) BOOL hasAlertContent; 
@property (nonatomic,readonly) BOOL shouldPlaySound;                                //@synthesize shouldPlaySound=_shouldPlaySound - In the implementation block
@property (nonatomic,readonly) BOOL hasSound; 
+(BOOL)supportsSecureCoding;
-(BOOL)hasSound;
-(BOOL)shouldPlaySound;
-(id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 content:(id)arg3 ;
-(CALNNotificationContent *)content;
-(NSString *)sourceClientIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 content:(id)arg3 date:(id)arg4 shouldPresentAlert:(BOOL)arg5 shouldPlaySound:(BOOL)arg6 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isEqualToRecord:(id)arg1 ;
-(BOOL)hasAlertContent;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(BOOL)shouldPresentAlert;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)sourceIdentifier;
@end

