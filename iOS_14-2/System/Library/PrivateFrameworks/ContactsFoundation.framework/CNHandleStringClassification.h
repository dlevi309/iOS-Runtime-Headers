/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CNHandleStringClassification : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _emailAddresses;
	NSArray* _phoneNumbers;
	NSArray* _unknown;

}

@property (nonatomic,copy,readonly) NSArray * emailAddresses;              //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,copy,readonly) NSArray * phoneNumbers;                //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * unknown;                     //@synthesize unknown=_unknown - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)unknown;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)emailAddresses;
-(NSArray *)phoneNumbers;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBuilder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithEmailAddresses:(id)arg1 phoneNumbers:(id)arg2 unknown:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

