/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)phoneNumbers;
-(NSArray *)unknown;
-(NSArray *)emailAddresses;
-(id)initWithEmailAddresses:(id)arg1 phoneNumbers:(id)arg2 unknown:(id)arg3 ;
-(id)initWithBuilder:(id)arg1 ;
@end

