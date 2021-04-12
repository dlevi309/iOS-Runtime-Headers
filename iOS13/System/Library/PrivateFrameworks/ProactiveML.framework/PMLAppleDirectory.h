/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/


@interface PMLAppleDirectory : NSObject
+(id)sharedInstance;
-(id)initWithData:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(BOOL)isEmailInAppleDirectory:(id)arg1 withPhonenumber:(id)arg2 ;
-(BOOL)isEmailInAppleDirectory:(id)arg1 withAnotherEmail:(id)arg2 ;
-(BOOL)isEmailInAppleDirectory:(id)arg1 ;
-(BOOL)isPhoneNumberInAppleDirectory:(id)arg1 ;
-(BOOL)isPhoneNumberInAppleDirectory:(id)arg1 withAnotherPhone:(id)arg2 ;
@end

