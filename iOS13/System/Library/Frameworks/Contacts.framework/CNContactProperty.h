/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNContact;

@interface CNContactProperty : NSObject <NSCopying, NSSecureCoding> {

	NSString* _key;
	NSString* _identifier;
	CNContact* _internalContact;

}

@property (nonatomic,retain) CNContact * internalContact;              //@synthesize internalContact=_internalContact - In the implementation block
@property (nonatomic,copy) NSString * key;                             //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) CNContact * contact; 
@property (nonatomic,readonly) id value; 
@property (nonatomic,copy,readonly) NSString * label; 
+(BOOL)supportsSecureCoding;
+(id)contactPropertyWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 ;
+(id)contactPropertyWithContactNoCopy:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)value;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)label;
-(CNContact *)contact;
-(void)setInternalContact:(CNContact *)arg1 ;
-(CNContact *)internalContact;
-(id)primitiveValue;
-(id)labeledValueForContact:(id)arg1 ;
-(id)labeledValue;
-(BOOL)isMultiValueProperty;
-(id)sourceContact;
-(int)multiValueIdentifier;
@end

