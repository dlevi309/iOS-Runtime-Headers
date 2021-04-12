/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSDate;

@interface ASDTestFlightServiceExtensionPushMessage : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _userInfo;
	NSDate* _timestamp;

}

@property (nonatomic,readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)userInfo;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTimestamp:(id)arg1 userInfo:(id)arg2 ;
@end

