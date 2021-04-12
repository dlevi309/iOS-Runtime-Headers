/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)name;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 ;
@end

