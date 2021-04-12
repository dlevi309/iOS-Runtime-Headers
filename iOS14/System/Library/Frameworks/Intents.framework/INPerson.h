/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSArray* _scoredAlternatives;
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
@property (nonatomic,copy) NSArray * alternatives; 
@property (nonatomic,copy) NSArray * scoredAlternatives;                           //@synthesize scoredAlternatives=_scoredAlternatives - In the implementation block
@property (nonatomic,copy) NSString * phonemeData;                                 //@synthesize phonemeData=_phonemeData - In the implementation block
@property (nonatomic,copy,readonly) NSArray * alternativeSiriMatches; 
@property (nonatomic,copy) NSString * handle; 
+(BOOL)supportsSecureCoding;
+(id)expectedCNContactKeys;
+(id)toNilScoredPersons:(id)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSArray *)aliases;
-(BOOL)isMe;
-(void)setHandle:(NSString *)arg1 ;
-(INPersonHandle *)personHandle;
-(NSString *)firstName;
-(id)_displayName;
-(NSString *)lastName;
-(NSString *)contactIdentifier;
-(id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 customIdentifier:(id)arg7 relationship:(id)arg8 aliases:(id)arg9 suggestionType:(long long)arg10 isMe:(BOOL)arg11 alternatives:(id)arg12 sourceAppBundleIdentifier:(id)arg13 phonemeData:(id)arg14 ;
-(NSString *)userIdentifier;
-(id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 customIdentifier:(id)arg7 relationship:(id)arg8 aliases:(id)arg9 suggestionType:(long long)arg10 isMe:(BOOL)arg11 scoredAlternatives:(id)arg12 sourceAppBundleIdentifier:(id)arg13 phonemeData:(id)arg14 ;
-(id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 customIdentifier:(id)arg7 relationship:(id)arg8 aliases:(id)arg9 suggestionType:(long long)arg10 isMe:(BOOL)arg11 alternatives:(id)arg12 sourceAppBundleIdentifier:(id)arg13 ;
-(NSString *)fullName;
-(id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 aliases:(id)arg7 suggestionType:(long long)arg8 ;
-(id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 relationship:(id)arg7 ;
-(void)setImage:(INImage *)arg1 ;
-(NSString *)handle;
-(NSString *)relationship;
-(NSString *)pronunciationHint;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(id)_sourceAppBundleIdentifier;
-(NSString *)userName;
-(id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_intents_indexingRepresentation;
-(id)_dictionaryRepresentation;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(INImage *)image;
-(NSArray *)alternativeSpeakableMatches;
-(void)setRelationship:(NSString *)arg1 ;
-(BOOL)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2 ;
-(void)setAlternatives:(NSArray *)arg1 ;
-(NSArray *)siriMatches;
-(void)setAliases:(NSArray *)arg1 ;
-(void)setIsMe:(BOOL)arg1 ;
-(NSString *)spokenPhrase;
-(NSString *)description;
-(void)setPersonHandle:(INPersonHandle *)arg1 ;
-(id)initWithHandle:(id)arg1 nameComponents:(id)arg2 contactIdentifier:(id)arg3 ;
-(id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 ;
-(id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 isMe:(BOOL)arg7 ;
-(id)initWithHandle:(id)arg1 displayName:(id)arg2 contactIdentifier:(id)arg3 ;
-(NSArray *)scoredAlternatives;
-(void)setScoredAlternatives:(NSArray *)arg1 ;
-(id)initWithHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 ;
-(NSArray *)alternativeSiriMatches;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setSuggestionType:(long long)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(NSString *)customIdentifier;
-(id)spokenPhrases;
-(NSString *)vocabularyIdentifier;
-(NSArray *)alternatives;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(INImage *)_keyImage;
-(unsigned long long)hash;
-(id)_userInput;
-(NSString *)phonemeData;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)userURIString;
-(void)setPhonemeData:(NSString *)arg1 ;
-(void)setCustomIdentifier:(NSString *)arg1 ;
-(id)_aliases;
-(NSString *)identifier;
-(void)setNameComponents:(NSPersonNameComponents *)arg1 ;
-(long long)suggestionType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(NSPersonNameComponents *)nameComponents;
-(BOOL)isEqual:(id)arg1 ;
@end

