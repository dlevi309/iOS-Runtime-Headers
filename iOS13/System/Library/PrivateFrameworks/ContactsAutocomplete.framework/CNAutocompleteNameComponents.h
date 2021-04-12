/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <ContactsAutocomplete/ContactsAutocomplete-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CNAutocompleteNameComponents : NSObject <NSCopying> {

	NSString* _firstName;
	NSString* _lastName;
	NSString* _nickname;
	NSString* _nameSuffix;

}

@property (readonly) NSString * firstName;               //@synthesize firstName=_firstName - In the implementation block
@property (readonly) NSString * lastName;                //@synthesize lastName=_lastName - In the implementation block
@property (readonly) NSString * nickname;                //@synthesize nickname=_nickname - In the implementation block
@property (readonly) NSString * nameSuffix;              //@synthesize nameSuffix=_nameSuffix - In the implementation block
+(id)contactKeys;
+(id)nameComponentsWithFirstName:(id)arg1 lastName:(id)arg2 nickname:(id)arg3 nameSuffix:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)nameSuffix;
-(NSString *)nickname;
-(NSString *)firstName;
-(NSString *)lastName;
@end

