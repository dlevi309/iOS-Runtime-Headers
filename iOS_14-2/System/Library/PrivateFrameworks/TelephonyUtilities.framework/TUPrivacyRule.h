/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/NSCoding.h>

@class TUPhoneNumber, NSString;

@interface TUPrivacyRule : NSObject <NSCoding> {

	int _type;
	TUPhoneNumber* _phoneNumber;
	NSString* _email;
	NSString* _businessID;

}

@property (nonatomic,readonly) int type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) TUPhoneNumber * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) NSString * email;                         //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) NSString * businessID;                    //@synthesize businessID=_businessID - In the implementation block
+(id)ruleForBusinessID:(id)arg1 ;
+(id)ruleForPhoneNumber:(id)arg1 ;
+(id)ruleForEmail:(id)arg1 ;
-(id)initForPhoneNumber:(id)arg1 ;
-(id)initForEmail:(id)arg1 ;
-(id)initForBusinessID:(id)arg1 ;
-(TUPhoneNumber *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(int)type;
-(NSString *)businessID;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)email;
-(BOOL)isEqual:(id)arg1 ;
@end

