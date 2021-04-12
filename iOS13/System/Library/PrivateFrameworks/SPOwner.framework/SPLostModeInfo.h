/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(NSString *)phoneNumber;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)initWithMessage:(id)arg1 phoneNumber:(id)arg2 timestamp:(id)arg3 ;
@end

