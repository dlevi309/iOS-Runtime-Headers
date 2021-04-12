/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <CalendarNotification/CalendarNotification-Structs.h>
#import <CalendarNotification/CALNNotificationRecord.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CALNNotificationContent, NSDate;

@interface CALNMutableNotificationRecord : CALNNotificationRecord <NSCopying>

@property (nonatomic,copy) NSString * sourceIdentifier; 
@property (nonatomic,copy) NSString * sourceClientIdentifier; 
@property (nonatomic,copy) CALNNotificationContent * content; 
@property (nonatomic,copy) NSDate * date; 
@property (assign,nonatomic) BOOL shouldPresentAlert; 
@property (assign,nonatomic) BOOL shouldPlaySound; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setContent:(CALNNotificationContent *)arg1 ;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(void)setSourceClientIdentifier:(NSString *)arg1 ;
-(void)setShouldPresentAlert:(BOOL)arg1 ;
-(void)setShouldPlaySound:(BOOL)arg1 ;
@end

