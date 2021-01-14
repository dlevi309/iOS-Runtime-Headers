/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSPersonNameComponents, INImage, NSArray, NSDateComponents;

@interface INContactCard : NSObject <NSCopying, NSSecureCoding> {

	NSString* _contactIdentifier;
	NSPersonNameComponents* _nameComponents;
	BOOL _isMe;
	INImage* _image;
	NSString* _organizationName;
	NSString* _departmentName;
	NSString* _jobTitle;
	NSArray* _phoneNumbers;
	NSArray* _emailAddresses;
	NSArray* _postalAddresses;
	NSArray* _urlAddresses;
	NSArray* _contactRelations;
	NSArray* _instantMessageAddresses;
	NSDateComponents* _birthday;
	NSArray* _dates;

}

@property (nonatomic,copy,readonly) NSString * contactIdentifier;                         //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSPersonNameComponents * nameComponents;              //@synthesize nameComponents=_nameComponents - In the implementation block
@property (nonatomic,readonly) BOOL isMe;                                                 //@synthesize isMe=_isMe - In the implementation block
@property (nonatomic,copy,readonly) INImage * image;                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSString * organizationName;                          //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,copy,readonly) NSString * departmentName;                            //@synthesize departmentName=_departmentName - In the implementation block
@property (nonatomic,copy,readonly) NSString * jobTitle;                                  //@synthesize jobTitle=_jobTitle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * phoneNumbers;                               //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * emailAddresses;                             //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,copy,readonly) NSArray * postalAddresses;                            //@synthesize postalAddresses=_postalAddresses - In the implementation block
@property (nonatomic,copy,readonly) NSArray * urlAddresses;                               //@synthesize urlAddresses=_urlAddresses - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contactRelations;                           //@synthesize contactRelations=_contactRelations - In the implementation block
@property (nonatomic,copy,readonly) NSArray * instantMessageAddresses;                    //@synthesize instantMessageAddresses=_instantMessageAddresses - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * birthday;                          //@synthesize birthday=_birthday - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dates;                                      //@synthesize dates=_dates - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)initWithContactIdentifier:(id)arg1 nameComponents:(id)arg2 isMe:(BOOL)arg3 image:(id)arg4 organizationName:(id)arg5 departmentName:(id)arg6 jobTitle:(id)arg7 phoneNumbers:(id)arg8 emailAddresses:(id)arg9 postalAddresses:(id)arg10 urlAddresses:(id)arg11 contactRelations:(id)arg12 instantMessageAddresses:(id)arg13 birthday:(id)arg14 dates:(id)arg15 ;
-(NSArray *)instantMessageAddresses;
-(BOOL)isMe;
-(NSString *)contactIdentifier;
-(NSArray *)dates;
-(id)initWithContactIdentifier:(id)arg1 nameComponents:(id)arg2 isMe:(BOOL)arg3 image:(id)arg4 organizationName:(id)arg5 departmentName:(id)arg6 jobTitle:(id)arg7 phoneNumbers:(id)arg8 emailAddresses:(id)arg9 postalAddresses:(id)arg10 urlAddresses:(id)arg11 contactRelations:(id)arg12 instantMessageAddresses:(id)arg13 birthday:(id)arg14 dates:(id)arg15 ;
-(NSString *)organizationName;
-(NSString *)departmentName;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)emailAddresses;
-(NSArray *)postalAddresses;
-(NSDateComponents *)birthday;
-(INImage *)image;
-(NSString *)jobTitle;
-(NSArray *)phoneNumbers;
-(NSArray *)urlAddresses;
-(NSArray *)contactRelations;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSPersonNameComponents *)nameComponents;
-(BOOL)isEqual:(id)arg1 ;
@end

