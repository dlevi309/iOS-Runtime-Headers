/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INCodableAttributeRelationComparing.h>
#import <libobjc.A.dylib/INKeyImageProducing.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INSpeakable.h>
#import <libobjc.A.dylib/INPersonExport.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INPersonHandle, NSPersonNameComponents, INImage, NSArray;

@interface INPerson : NSObject <INCacheableContainer, INCodableAttributeRelationComparing, INKeyImageProducing, INImageProxyInjecting, INSpeakable, INPersonExport, NSMutableCopying, NSCopying, NSSecureCoding> {

	NSString* _displayName;
	NSPersonNameComponents* _nameComponents;
	NSString* _userInput;
	NSArray* _aliases;
	long long _suggestionType;
	NSArray* _alternatives;
	BOOL _isMe;
	NSString* _sourceAppBundleIdentifier;
	INPersonHandle* _personHandle;
	INImage* _image;
	NSString* _contactIdentifier;
	NSString* _customIdentifier;
	NSString* _relationship;
	NSString* _phonemeData;

}

@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (nonatomic,copy,readonly) NSString * userName; 
@property (nonatomic,copy,readonly) NSString * userIdentifier; 
@property (nonatomic,copy,readonly) NSString * userURIString; 
@property (nonatomic,copy,readonly) NSString * fullName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * aliases; 
@property (nonatomic,readonly) long long suggestionType; 
@property (readonly) INImage * _keyImage; 
@property (nonatomic,copy,readonly) NSArray * siriMatches; 
@property (nonatomic,readonly) BOOL isMe; 
@property (nonatomic,readonly) NSString * spokenPhrase; 
@property (nonatomic,readonly) NSString * pronunciationHint; 
@property (nonatomic,readonly) NSString * vocabularyIdentifier; 
@property (nonatomic,readonly) NSArray * alternativeSpeakableMatches; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,copy) INPersonHandle * personHandle;                          //@synthesize personHandle=_personHandle - In the implementation block
@property (nonatomic,copy) NSPersonNameComponents * nameComponents;                //@synthesize nameComponents=_nameComponents - In the implementation block
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) INImage * image;                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * contactIdentifier;                           //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,copy) NSString * customIdentifier;                            //@synthesize customIdentifier=_customIdentifier - In the implementation block
@property (nonatomic,copy) NSString * relationship;                                //@synthesize relationship=_relationship - In the implementation block
@property (nonatomic,copy) NSArray * aliases;                                      //@synthesize aliases=_aliases - In the implementation block
@property (assign,nonatomic) long long suggestionType;                             //@synthesize suggestionType=_suggestionType - In the implementation block
@property (assign,nonatomic) BOOL isMe;                                            //@synthesize isMe=_isMe - In the implementation block
@property (nonatomic,copy) NSArray * alternatives;                                 //@synthesize alternatives=_alternatives - In the implementation block
@property (nonatomic,copy) NSString * phonemeData;                                 //@synthesize phonemeData=_phonemeData - In the implementation block
@property (nonatomic,copy,readonly) NSArray * alternativeSiriMatches; 
@property (nonatomic,copy) NSString * handle; 
+(BOOL)supportsSecureCoding;
+(id)expectedCNContactKeys;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)userName;
-(NSString *)userIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)handle;
-(NSString *)displayName;
-(id)_displayName;
-(INImage *)image;
-(void)setImage:(INImage *)arg1 ;
-(long long)suggestionType;
-(INPersonHandle *)personHandle;
-(NSString *)contactIdentifier;
-(NSString *)customIdentifier;
-(void)setCustomIdentifier:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(INImage *)_keyImage;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)relationship;
-(NSString *)fullName;
-(NSString *)spokenPhrase;
-(id)_dictionaryRepresentation;
-(void)setHandle:(NSString *)arg1 ;
-(NSArray *)alternatives;
-(id)_userInput;
-(NSPersonNameComponents *)nameComponents;
-(void)setNameComponents:(NSPersonNameComponents *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(BOOL)isMe;
-(void)setIsMe:(BOOL)arg1 ;
-(void)setSuggestionType:(long long)arg1 ;
-(NSArray *)aliases;
-(id)initWithContact:(id)arg1 ;
-(NSString *)phonemeData;
-(void)setPhonemeData:(NSString *)arg1 ;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(void)setRelationship:(NSString *)arg1 ;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(NSString *)userURIString;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)_sourceAppBundleIdentifier;
-(id)_intents_readableDescriptionWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(void)setAlternatives:(NSArray *)arg1 ;
-(NSString *)pronunciationHint;
-(NSString *)vocabularyIdentifier;
-(NSArray *)alternativeSpeakableMatches;
-(BOOL)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2 ;
-(id)_aliases;
-(void)setAliases:(NSArray *)arg1 ;
-(void)setPersonHandle:(INPersonHandle *)arg1 ;
-(id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 ;
-(id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 isMe:(BOOL)arg7 ;
-(id)initWithHandle:(id)arg1 nameComponents:(id)arg2 contactIdentifier:(id)arg3 ;
-(id)initWithHandle:(id)arg1 displayName:(id)arg2 contactIdentifier:(id)arg3 ;
-(id)initWithHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 ;
-(id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 customIdentifier:(id)arg7 relationship:(id)arg8 aliases:(id)arg9 suggestionType:(long long)arg10 isMe:(BOOL)arg11 alternatives:(id)arg12 sourceAppBundleIdentifier:(id)arg13 ;
-(id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 customIdentifier:(id)arg7 relationship:(id)arg8 aliases:(id)arg9 suggestionType:(long long)arg10 isMe:(BOOL)arg11 alternatives:(id)arg12 sourceAppBundleIdentifier:(id)arg13 phonemeData:(id)arg14 ;
-(NSArray *)alternativeSiriMatches;
-(id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 aliases:(id)arg7 suggestionType:(long long)arg8 ;
-(id)spokenPhrases;
-(id)_intents_indexingRepresentation;
-(NSArray *)siriMatches;
@end

