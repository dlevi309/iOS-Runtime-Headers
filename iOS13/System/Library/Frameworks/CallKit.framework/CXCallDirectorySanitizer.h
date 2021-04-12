/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSCharacterSet *)phoneNumbersIgnoredCharacterSet;
-(NSCharacterSet *)nonPhoneNumbersCharacterSet;
-(id)canonicalizedPhoneNumber:(id)arg1 ;
-(NSCharacterSet *)phoneNumbersCharacterSet;
@end

