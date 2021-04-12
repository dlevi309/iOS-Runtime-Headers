/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)namedEmailAddressWithFieldValue:(id)arg1 ;
+(id)namedEmailAddressWithCSPerson:(id)arg1 ;
+(id)namedEmailAddressesWithFieldValues:(id)arg1 ;
+(id)namedEmailAddressesWithEmailToNameDictionary:(id)arg1 ;
+(id)emailToNameDictionaryWithNamedEmailAddresses:(id)arg1 ;
+(id)serializeAll:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)emailAddress;
-(id)serialized;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 ;
-(BOOL)isEqualToNamedEmailAddress:(id)arg1 ;
-(id)asCSPerson;
@end

