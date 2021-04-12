/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSDictionary;

@interface CRKLogEvent : NSObject <NSSecureCoding> {

	NSString* _name;
	NSDate* _date;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(void)setName:(NSString *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(id)initWithName:(id)arg1 date:(id)arg2 userInfo:(id)arg3 ;
@end

