/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class NSString;

@interface SXPresentableContact : NSObject {

	NSString* _email;
	NSString* _phoneNumber;

}

@property (nonatomic,readonly) NSString * email;                    //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
-(NSString *)phoneNumber;
-(NSString *)email;
-(id)initWithPhoneNumber:(id)arg1 ;
-(id)initWithEmail:(id)arg1 ;
@end

