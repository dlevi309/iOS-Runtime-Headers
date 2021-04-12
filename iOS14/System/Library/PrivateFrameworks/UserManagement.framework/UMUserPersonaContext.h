/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPropertiesFromUserPersona:(id)arg1 ;
-(id)copyPersonaContext:(id*)arg1 ;
-(void)contextAdopt;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

