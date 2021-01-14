/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol _CNContactHandleStringEquivalenceStrategy;
@class NSString;

@interface CNContactHandleIndexableString : NSObject <NSCopying, NSSecureCoding> {

	NSString* _indexKey;
	NSString* _stringValue;
	id<_CNContactHandleStringEquivalenceStrategy> _equivalenceStrategy;

}

@property (nonatomic,copy,readonly) NSString * stringValue;                                                    //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) id<_CNContactHandleStringEquivalenceStrategy> equivalenceStrategy;              //@synthesize equivalenceStrategy=_equivalenceStrategy - In the implementation block
@property (nonatomic,copy,readonly) NSString * indexKey;                                                       //@synthesize indexKey=_indexKey - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)equivalenceStrategyWithString:(id)arg1 ;
+(id)emailIndexKey:(id)arg1 ;
+(id)phoneNumberIndexKey:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)initWithFullString:(id)arg1 indexKey:(id)arg2 equivalenceStrategy:(id)arg3 ;
-(id<_CNContactHandleStringEquivalenceStrategy>)equivalenceStrategy;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)indexKey;
-(NSString *)stringValue;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEquivalentToString:(id)arg1 strict:(BOOL*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

