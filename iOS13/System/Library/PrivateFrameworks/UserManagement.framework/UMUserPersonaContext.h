/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
*/

#import <UserManagement/UserManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_voucher;
@class NSObject;

@interface UMUserPersonaContext : NSObject <NSCopying> {

	NSObject*<OS_voucher> _voucher;

}
+(id)currentPersonaContext;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)contextAdopt;
-(void)setPropertiesFromUserPersona:(id)arg1 ;
-(id)copyPersonaContext:(id*)arg1 ;
@end

