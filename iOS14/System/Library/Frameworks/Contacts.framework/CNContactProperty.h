/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,copy,readonly) CNContact * contact; 
@property (nonatomic,copy,readonly) NSString * key; 
@property (nonatomic,readonly) id value; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * label; 
+(id)phoneticPropertiesMap;
+(BOOL)supportsSecureCoding;
+(id)contactPropertyWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 ;
+(id)contactPropertyWithContactNoCopy:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 ;
-(id)property;
-(id)phoneticProperty;
-(CNContact *)contact;
-(void)encodeWithCoder:(id)arg1 ;
-(id)sourceContact;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(id)labeledValue;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(id)value;
-(int)multiValueIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

