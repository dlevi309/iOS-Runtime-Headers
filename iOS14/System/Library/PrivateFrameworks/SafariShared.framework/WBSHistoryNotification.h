/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface WBSHistoryNotification : NSObject <NSSecureCoding> {

	NSString* _name;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)userInfo;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 ;
-(NSString *)name;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

