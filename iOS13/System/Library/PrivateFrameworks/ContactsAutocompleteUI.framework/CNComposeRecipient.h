/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <ContactsAutocompleteUI/ContactsAutocompleteUI-Structs.h>
#import <libobjc.A.dylib/NSItemProviderReading.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, CNComposeRecipientOriginContext, NSString, CNContact, CNAutocompleteResult, NSPersonNameComponents;

@interface CNComposeRecipient : NSObject <NSItemProviderReading, NSItemProviderWriting, NSCopying, NSSecureCoding> {

	BOOL _isMemberOfGroup;
	CNComposeRecipientOriginContext* _originContext;
	NSString* _address;
	unsigned long long _kind;
	NSString* _countryCode;
	NSArray* _cachedCompleteMatches;
	NSArray* _cachedMatchedStrings;
	NSArray* _cachedSortedMembers;
	NSString* _compositeName;
	NSString* _contactIdentifier;
	NSString* _valueIdentifier;
	NSString* _unlocalizedLabel;
	NSString* _inputAddress;
	CNContact* _contact;
	NSString* _label;
	NSString* _displayString;
	CNAutocompleteResult* _autocompleteResult;
	NSPersonNameComponents* _nameComponents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (nonatomic,retain) NSArray * cachedCompleteMatches;                                                    //@synthesize cachedCompleteMatches=_cachedCompleteMatches - In the implementation block
@property (nonatomic,retain) NSArray * cachedMatchedStrings;                                                     //@synthesize cachedMatchedStrings=_cachedMatchedStrings - In the implementation block
@property (nonatomic,retain) NSArray * cachedSortedMembers;                                                      //@synthesize cachedSortedMembers=_cachedSortedMembers - In the implementation block
@property (nonatomic,copy) NSString * compositeName;                                                             //@synthesize compositeName=_compositeName - In the implementation block
@property (nonatomic,copy) NSString * contactIdentifier;                                                         //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,copy) NSString * valueIdentifier;                                                           //@synthesize valueIdentifier=_valueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * unlocalizedLabel;                                                          //@synthesize unlocalizedLabel=_unlocalizedLabel - In the implementation block
@property (nonatomic,copy) NSString * inputAddress;                                                              //@synthesize inputAddress=_inputAddress - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                                //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) BOOL isMemberOfGroup;                                                               //@synthesize isMemberOfGroup=_isMemberOfGroup - In the implementation block
@property (nonatomic,copy) NSString * address;                                                                   //@synthesize address=_address - In the implementation block
@property (nonatomic,copy) NSString * label;                                                                     //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                                                               //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * displayString;                                                             //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,retain) CNAutocompleteResult * autocompleteResult;                                          //@synthesize autocompleteResult=_autocompleteResult - In the implementation block
@property (nonatomic,retain) NSPersonNameComponents * nameComponents;                                            //@synthesize nameComponents=_nameComponents - In the implementation block
@property (nonatomic,retain) CNComposeRecipientOriginContext * originContext;                                    //@synthesize originContext=_originContext - In the implementation block
@property (getter=isRemovableFromSearchResults,nonatomic,readonly) BOOL removableFromSearchResults; 
@property (nonatomic,readonly) BOOL showsAccessoryButton; 
@property (nonatomic,readonly) BOOL isGroup; 
@property (nonatomic,readonly) unsigned long long sourceType; 
@property (nonatomic,readonly) BOOL isSuggestedRecipient; 
@property (nonatomic,readonly) BOOL showsChevronButton; 
@property (nonatomic,readonly) BOOL isDirectoryServerResult; 
@property (nonatomic,readonly) NSString * normalizedAddress; 
@property (nonatomic,readonly) NSString * commentedAddress; 
@property (nonatomic,readonly) NSString * uncommentedAddress; 
@property (nonatomic,readonly) unsigned long long kind;                                                          //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) NSString * placeholderName; 
@property (nonatomic,readonly) NSString * shortName; 
+(BOOL)supportsSecureCoding;
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)writableTypeIdentifiersForItemProvider;
+(id)readableTypeIdentifiersForItemProvider;
+(id)os_log;
+(id)descriptorsForRequiredKeysForContact;
+(id)composeRecipientWithAutocompleteResult:(id)arg1 ;
-(id)rawAddress;
-(id)IDSCanonicalAddress;
-(id)IDSCanonicalAddressForAddress:(id)arg1 ;
-(BOOL)isNotAChildOfUnifiedRecipient;
-(BOOL)isUnnamedGroup;
-(BOOL)isNamedGroup;
-(BOOL)isPhone;
-(BOOL)isEmail;
-(CFPhoneNumberRef)copyPhoneNumber;
-(void)setCanonicalAddress:(id)arg1 ;
-(id)canonicalAddress;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)countryCode;
-(NSString *)address;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)kind;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(NSString *)contactIdentifier;
-(id)children;
-(BOOL)isGroup;
-(unsigned long long)sourceType;
-(NSString *)displayString;
-(void)setDisplayString:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(NSPersonNameComponents *)nameComponents;
-(void)setNameComponents:(NSPersonNameComponents *)arg1 ;
-(CNAutocompleteResult *)autocompleteResult;
-(void)setAutocompleteResult:(CNAutocompleteResult *)arg1 ;
-(NSString *)shortName;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(id)labeledValueIdentifier;
-(NSString *)uncommentedAddress;
-(NSString *)normalizedAddress;
-(id)initWithContact:(id)arg1 address:(id)arg2 kind:(unsigned long long)arg3 ;
-(NSString *)compositeName;
-(NSString *)commentedAddress;
-(BOOL)isRemovableFromSearchResults;
-(NSString *)unlocalizedLabel;
-(void)setOriginContext:(CNComposeRecipientOriginContext *)arg1 ;
-(BOOL)isSuggestedRecipient;
-(BOOL)isDirectoryServerResult;
-(BOOL)showsAccessoryButton;
-(void)setValueIdentifier:(NSString *)arg1 ;
-(void)setUnlocalizedLabel:(NSString *)arg1 ;
-(NSString *)placeholderName;
-(id)_unformattedAddress;
-(id)sortedChildren;
-(id)childrenWithCompleteMatches;
-(BOOL)wasCompleteMatch;
-(id)completelyMatchedAttributedStrings;
-(id)preferredSendingAddress;
-(CNComposeRecipientOriginContext *)originContext;
-(NSString *)valueIdentifier;
-(void)setIsMemberOfGroup:(BOOL)arg1 ;
-(BOOL)isMemberOfGroup;
-(BOOL)showsChevronButton;
-(id)initWithContact:(id)arg1 address:(id)arg2 displayString:(id)arg3 kind:(unsigned long long)arg4 ;
-(NSString *)inputAddress;
-(id)rawDisplayString;
-(NSArray *)cachedCompleteMatches;
-(void)setCachedCompleteMatches:(NSArray *)arg1 ;
-(NSArray *)cachedMatchedStrings;
-(void)setCachedMatchedStrings:(NSArray *)arg1 ;
-(NSArray *)cachedSortedMembers;
-(void)setCachedSortedMembers:(NSArray *)arg1 ;
-(void)setCompositeName:(NSString *)arg1 ;
-(void)setInputAddress:(NSString *)arg1 ;
@end

