/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class CNContact, NSString, NSSet;

@interface SGMeContact : NSObject {

	CNContact* _meContact;
	NSString* _givenName;
	NSString* _familyName;
	NSString* _formattedName;
	NSSet* _emailAddresses;
	NSSet* _phoneNumbers;
	NSSet* _postalAddresses;

}

@property (nonatomic,readonly) NSString * givenName;                  //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,readonly) NSString * familyName;                 //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,readonly) NSString * formattedName;              //@synthesize formattedName=_formattedName - In the implementation block
@property (nonatomic,readonly) NSSet * emailAddresses;                //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,readonly) NSSet * phoneNumbers;                  //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (nonatomic,readonly) NSSet * postalAddresses;               //@synthesize postalAddresses=_postalAddresses - In the implementation block
+(id)keysToFetch;
-(NSString *)familyName;
-(NSString *)givenName;
-(NSSet *)emailAddresses;
-(NSSet *)postalAddresses;
-(NSSet *)phoneNumbers;
-(id)initWithContact:(id)arg1 ;
-(NSString *)formattedName;
-(BOOL)isSameAsOrUnifiedWithContact:(id)arg1 ;
@end

