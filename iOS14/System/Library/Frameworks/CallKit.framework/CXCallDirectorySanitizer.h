/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/


@class NSCharacterSet;

@interface CXCallDirectorySanitizer : NSObject {

	NSCharacterSet* _phoneNumbersCharacterSet;
	NSCharacterSet* _nonPhoneNumbersCharacterSet;
	NSCharacterSet* _phoneNumbersIgnoredCharacterSet;

}

@property (nonatomic,readonly) NSCharacterSet * phoneNumbersCharacterSet;                     //@synthesize phoneNumbersCharacterSet=_phoneNumbersCharacterSet - In the implementation block
@property (nonatomic,readonly) NSCharacterSet * nonPhoneNumbersCharacterSet;                  //@synthesize nonPhoneNumbersCharacterSet=_nonPhoneNumbersCharacterSet - In the implementation block
@property (nonatomic,readonly) NSCharacterSet * phoneNumbersIgnoredCharacterSet;              //@synthesize phoneNumbersIgnoredCharacterSet=_phoneNumbersIgnoredCharacterSet - In the implementation block
-(id)canonicalizedPhoneNumber:(id)arg1 ;
-(id)init;
-(NSCharacterSet *)nonPhoneNumbersCharacterSet;
-(NSCharacterSet *)phoneNumbersCharacterSet;
-(NSCharacterSet *)phoneNumbersIgnoredCharacterSet;
@end

