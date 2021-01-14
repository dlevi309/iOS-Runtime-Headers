/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SGSimpleNamedEmailAddress : NSObject <NSCopying, NSSecureCoding> {

	NSString* _emailAddress;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)serializeAll:(id)arg1 ;
+(id)namedEmailAddressWithFieldValue:(id)arg1 ;
+(id)namedEmailAddressWithCSPerson:(id)arg1 ;
+(id)namedEmailAddressesWithFieldValues:(id)arg1 ;
+(id)namedEmailAddressesWithEmailToNameDictionary:(id)arg1 ;
+(id)emailToNameDictionaryWithNamedEmailAddresses:(id)arg1 ;
-(NSString *)emailAddress;
-(id)serialized;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)asCSPerson;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 ;
-(BOOL)isEqualToNamedEmailAddress:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

