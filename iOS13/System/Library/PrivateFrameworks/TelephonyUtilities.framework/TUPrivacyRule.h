/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/NSCoding.h>

@class TUPhoneNumber, NSString;

@interface TUPrivacyRule : NSObject <NSCoding> {

	int _type;
	TUPhoneNumber* _phoneNumber;
	NSString* _email;

}

@property (nonatomic,readonly) int type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) TUPhoneNumber * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) NSString * email;                         //@synthesize email=_email - In the implementation block
+(id)ruleForPhoneNumber:(id)arg1 ;
+(id)ruleForEmail:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TUPhoneNumber *)phoneNumber;
-(NSString *)email;
-(id)initForPhoneNumber:(id)arg1 ;
-(id)initForEmail:(id)arg1 ;
@end

