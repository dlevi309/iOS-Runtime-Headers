/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <CoreFoundation/NSURL.h>

@class NSString;

@interface UNSecurityScopedURL : NSURL {

	NSString* _sandboxExtensionClass;

}
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_allowsDirectEncoding;
-(id)_issueSandboxExtension;
-(id)initFileURLWithPath:(id)arg1 sandboxExtensionClass:(id)arg2 ;
@end

