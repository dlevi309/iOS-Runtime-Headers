/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithPhoneNumberString:(id)arg1 countryCode:(id)arg2 ;
-(SCD_Struct_AB2*)decomposedPhoneNumberPointer;
-(char*)normalizedPhoneChars;
-(NSString *)lastFour;
-(NSString *)originalStringValue;
@end

