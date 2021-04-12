/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface SPLostModeInfo : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _timestamp;
	NSString* _message;
	NSString* _phoneNumber;

}

@property (nonatomic,copy) NSDate * timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * message;                  //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSDate *)timestamp;
-(NSString *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMessage:(id)arg1 phoneNumber:(id)arg2 timestamp:(id)arg3 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
@end

