/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface ASDNotification : NSObject <NSSecureCoding> {

	NSString* _name;
	NSDictionary* _userInfo;

}

@property (readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)notificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 ;
-(NSString *)name;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

