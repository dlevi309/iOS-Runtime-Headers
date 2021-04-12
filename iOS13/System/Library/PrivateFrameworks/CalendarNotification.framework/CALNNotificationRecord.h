/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(CALNNotificationContent *)content;
-(NSString *)sourceIdentifier;
-(BOOL)shouldPresentAlert;
-(BOOL)hasSound;
-(NSString *)sourceClientIdentifier;
-(id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 content:(id)arg3 ;
-(id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 content:(id)arg3 date:(id)arg4 shouldPresentAlert:(BOOL)arg5 shouldPlaySound:(BOOL)arg6 ;
-(BOOL)shouldPlaySound;
-(BOOL)isEqualToRecord:(id)arg1 ;
-(BOOL)hasAlertContent;
@end

