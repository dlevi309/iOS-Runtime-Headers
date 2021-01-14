/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/


#import <AddressBookLegacy/AddressBookLegacy-Structs.h>
@class NSString;

@interface ABPhoneNumber : NSObject {

	SCD_Struct_AB2 _decomposedPhoneNumber;
	char* _phoneNumberBytes;
	NSString* _lastFour;
	NSString* _originalStringValue;

}

@property (readonly) SCD_Struct_AB2* decomposedPhoneNumberPointer; 
@property (readonly) NSString * lastFour;                                       //@synthesize lastFour=_lastFour - In the implementation block
@property (readonly) NSString * originalStringValue;                            //@synthesize originalStringValue=_originalStringValue - In the implementation block
@property (readonly) char* normalizedPhoneChars; 
-(id)initWithPhoneNumberString:(id)arg1 countryCode:(id)arg2 ;
-(NSString *)lastFour;
-(SCD_Struct_AB2*)decomposedPhoneNumberPointer;
-(NSString *)originalStringValue;
-(char*)normalizedPhoneChars;
-(void)dealloc;
@end

