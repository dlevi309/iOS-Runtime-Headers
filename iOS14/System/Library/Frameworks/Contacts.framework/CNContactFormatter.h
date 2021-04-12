/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPersonNameComponentsFormatter;

@interface CNContactFormatter : NSFormatter <NSSecureCoding> {

	BOOL _ignoresOrganization;
	BOOL _ignoresNickname;
	BOOL _emphasizesPrimaryNameComponent;
	NSPersonNameComponentsFormatter* _nameFormatter;
	long long _style;
	unsigned long long _fallbackStyle;
	long long _sortOrder;

}

@property (assign,nonatomic) BOOL ignoresOrganization;                         //@synthesize ignoresOrganization=_ignoresOrganization - In the implementation block
@property (assign,nonatomic) BOOL ignoresNickname;                             //@synthesize ignoresNickname=_ignoresNickname - In the implementation block
@property (assign,nonatomic) unsigned long long fallbackStyle;                 //@synthesize fallbackStyle=_fallbackStyle - In the implementation block
@property (assign,nonatomic) BOOL emphasizesPrimaryNameComponent;              //@synthesize emphasizesPrimaryNameComponent=_emphasizesPrimaryNameComponent - In the implementation block
@property (assign,nonatomic) long long sortOrder;                              //@synthesize sortOrder=_sortOrder - In the implementation block
@property (assign,nonatomic) long long style;                                  //@synthesize style=_style - In the implementation block
+(id)sharedFullNameFormatter;
+(id)sharedFullNameFormatterWithFallBacks;
+(BOOL)supportsSecureCoding;
+(id)stringFromContact:(id)arg1 style:(long long)arg2 ;
+(id)descriptorForRequiredKeysForStyle:(long long)arg1 ;
+(id)abbreviatedStringFromContact:(id)arg1 trimmingWhitespace:(BOOL)arg2 ;
+(id)attributedStringFromContact:(id)arg1 style:(long long)arg2 defaultAttributes:(id)arg3 ;
+(id)delimiterForContact:(id)arg1 ;
+(id)descriptorForRequiredKeysForNameOrder;
+(id)descriptorForRequiredKeysForDelimiter;
+(long long)nameOrderForContact:(id)arg1 ;
-(id)stringFromGroupIdentity:(id)arg1 ;
-(id)descriptorForRequiredKeys;
-(long long)sortOrder;
-(id)stringForObjectValue:(id)arg1 ;
-(id)init;
-(BOOL)ignoresNickname;
-(id)stringFromContact:(id)arg1 ;
-(void)setFallbackStyle:(unsigned long long)arg1 ;
-(void)setEmphasizesPrimaryNameComponent:(BOOL)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIgnoresOrganization:(BOOL)arg1 ;
-(id)stringFromPotentiallySuggestedContact:(id)arg1 relatedToProperty:(id)arg2 ;
-(void)setSortOrder:(long long)arg1 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIgnoresNickname:(BOOL)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(BOOL)ignoresOrganization;
-(unsigned long long)fallbackStyle;
-(id)attributedStringFromContact:(id)arg1 defaultAttributes:(id)arg2 ;
-(id)stringFromContact:(id)arg1 attributes:(id)arg2 ;
-(BOOL)emphasizesPrimaryNameComponent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
@end

