/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSDate *)date;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithName:(id)arg1 date:(id)arg2 userInfo:(id)arg3 ;
@end

