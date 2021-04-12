/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <CoreFoundation/NSURL.h>

@class NSString;

@interface UNSecurityScopedURL : NSURL {

	NSString* _sandboxExtensionClass;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_allowsDirectEncoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_issueSandboxExtension;
-(id)initFileURLWithPath:(id)arg1 sandboxExtensionClass:(id)arg2 ;
@end

