/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy,readonly) NSString * pasteboardString; 
@property (nonatomic,readonly) BOOL supportsPasteboardUnarchiving; 
@property (nonatomic,readonly) unsigned long long kind;                                                          //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) NSString * placeholderName; 
@property (nonatomic,readonly) NSString * shortName; 
+(BOOL)supportsSecureCoding;
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)writableTypeIdentifiersForItemProvider;
+(id)readableTypeIdentifiersForItemProvider;
+(id)descriptorsForRequiredKeysForContact;
+(id)composeRecipientWithAutocompleteResult:(id)arg1 ;
+(id)os_log;
-(BOOL)isPhone;
-(BOOL)isEmail;
-(CFPhoneNumberRef)copyPhoneNumber;
-(void)setCanonicalAddress:(id)arg1 ;
-(id)canonicalAddress;
-(id)IDSCanonicalAddress;
-(BOOL)isNamedGroup;
-(BOOL)isUnnamedGroup;
-(id)IDSCanonicalAddressForAddress:(id)arg1 ;
-(BOOL)isNotAChildOfUnifiedRecipient;
-(id)rawAddress;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)children;
-(NSString *)contactIdentifier;
-(unsigned long long)sourceType;
-(CNContact *)contact;
-(CNAutocompleteResult *)autocompleteResult;
-(NSString *)displayString;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(void)setContact:(CNContact *)arg1 ;
-(NSString *)countryCode;
-(BOOL)isGroup;
-(id)init;
-(BOOL)isSuggestedRecipient;
-(BOOL)isDirectoryServerResult;
-(void)setIsMemberOfGroup:(BOOL)arg1 ;
-(BOOL)isMemberOfGroup;
-(BOOL)showsChevronButton;
-(void)encodeWithCoder:(id)arg1 ;
-(id)labeledValueIdentifier;
-(NSString *)shortName;
-(unsigned long long)kind;
-(void)setDisplayString:(NSString *)arg1 ;
-(void)setCompositeName:(NSString *)arg1 ;
-(NSString *)description;
-(void)setAutocompleteResult:(CNAutocompleteResult *)arg1 ;
-(NSString *)inputAddress;
-(NSString *)address;
-(NSString *)unlocalizedLabel;
-(void)setOriginContext:(CNComposeRecipientOriginContext *)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(id)initWithContact:(id)arg1 address:(id)arg2 displayString:(id)arg3 kind:(unsigned long long)arg4 ;
-(void)setValueIdentifier:(NSString *)arg1 ;
-(void)setUnlocalizedLabel:(NSString *)arg1 ;
-(NSString *)placeholderName;
-(id)rawDisplayString;
-(void)addRecipientToPasteboard:(id)arg1 ;
-(id)childrenWithCompleteMatches;
-(BOOL)showsAccessoryButton;
-(BOOL)wasCompleteMatch;
-(id)completelyMatchedAttributedStrings;
-(id)preferredSendingAddress;
-(id)displayStringPreferringNickname:(BOOL)arg1 ;
-(NSString *)pasteboardString;
-(BOOL)supportsPasteboardUnarchiving;
-(CNComposeRecipientOriginContext *)originContext;
-(id)_unformattedAddress;
-(NSArray *)cachedCompleteMatches;
-(void)setCachedCompleteMatches:(NSArray *)arg1 ;
-(NSArray *)cachedMatchedStrings;
-(void)setCachedMatchedStrings:(NSArray *)arg1 ;
-(NSArray *)cachedSortedMembers;
-(void)setCachedSortedMembers:(NSArray *)arg1 ;
-(NSString *)valueIdentifier;
-(void)setInputAddress:(NSString *)arg1 ;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)normalizedAddress;
-(id)initWithContact:(id)arg1 address:(id)arg2 kind:(unsigned long long)arg3 ;
-(NSString *)compositeName;
-(NSString *)uncommentedAddress;
-(NSString *)commentedAddress;
-(BOOL)isRemovableFromSearchResults;
-(void)setLabel:(NSString *)arg1 ;
-(void)setNameComponents:(NSPersonNameComponents *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(NSPersonNameComponents *)nameComponents;
-(BOOL)isEqual:(id)arg1 ;
-(id)sortedChildren;
@end

