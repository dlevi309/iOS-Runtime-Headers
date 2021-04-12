/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/_CNContactHandleStringEquivalenceStrategy.h>

@class NSString;

@interface _CNContactPhoneNumberEquivalence : NSObject <_CNContactHandleStringEquivalenceStrategy> {

	NSString* _rawString;
	SCD_Struct_CN11* _decomposedRepresentation;
	char* _decomposedNumberDigits;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)indexKeyForString:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEquivalentToString:(id)arg1 strict:(BOOL*)arg2 ;
-(id)initWithPhoneNumberString:(id)arg1 ;
-(BOOL)isRawStringEquivalent:(id)arg1 ;
-(BOOL)preparePhoneNumberRepresentation;
-(BOOL)isPhoneNumberEquivalent:(id)arg1 strict:(BOOL*)arg2 ;
@end

