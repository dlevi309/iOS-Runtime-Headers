/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UNNotificationAttachmentOptions : NSObject <NSCopying, NSSecureCoding>
+(BOOL)supportsSecureCoding;
+(id)optionsForFamily:(unsigned long long)arg1 fromOptionsDictionary:(id)arg2 ;
+(Class)optionsClassForFamily:(unsigned long long)arg1 ;
+(id)optionsFromOptionsDictionary:(id)arg1 ;
+(id)optionsClasses;
+(CGRect)santizedClippingRect:(CGRect)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

