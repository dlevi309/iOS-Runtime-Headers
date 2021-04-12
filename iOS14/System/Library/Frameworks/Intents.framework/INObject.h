/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INRuntimeObject.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/INSpeakable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSMutableDictionary, INImage;

@interface INObject : NSObject <INRuntimeObject, INJSONSerializable, INSpeakable, NSCopying, NSSecureCoding> {

	NSMutableDictionary* _valueForKeyDictionary;
	NSString* _identifier;
	NSString* _displayString;
	NSString* _pronunciationHint;
	NSString* _subtitleString;
	INImage* _displayImage;
	NSArray* _alternativeSpeakableMatches;

}

@property (nonatomic,readonly) NSMutableDictionary * _valueForKeyDictionary;              //@synthesize valueForKeyDictionary=_valueForKeyDictionary - In the implementation block
@property (nonatomic,copy) NSString * descriptionString; 
@property (nonatomic,readonly) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayString;                             //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,readonly) NSString * pronunciationHint;                              //@synthesize pronunciationHint=_pronunciationHint - In the implementation block
@property (nonatomic,copy) NSString * subtitleString;                                     //@synthesize subtitleString=_subtitleString - In the implementation block
@property (nonatomic,retain) INImage * displayImage;                                      //@synthesize displayImage=_displayImage - In the implementation block
@property (nonatomic,retain) NSArray * alternativeSpeakableMatches;                       //@synthesize alternativeSpeakableMatches=_alternativeSpeakableMatches - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * spokenPhrase; 
@property (nonatomic,readonly) NSString * vocabularyIdentifier; 
+(BOOL)supportsSecureCoding;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(NSString *)displayString;
-(NSString *)pronunciationHint;
-(id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(id)_intents_displayImageWithLocalizer:(id)arg1 ;
-(id)_intents_localizedCopyWithLocalizer:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_intents_readableSubtitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(NSString *)subtitleString;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)_dictionaryRepresentation;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(NSMutableDictionary *)_valueForKeyDictionary;
-(NSArray *)alternativeSpeakableMatches;
-(id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 displayString:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 displayString:(id)arg2 subtitleString:(id)arg3 displayImage:(id)arg4 ;
-(void)setAlternativeSpeakableMatches:(NSArray *)arg1 ;
-(id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3 subtitleString:(id)arg4 displayImage:(id)arg5 ;
-(void)setDescriptionString:(NSString *)arg1 ;
-(NSString *)spokenPhrase;
-(NSString *)description;
-(INImage *)displayImage;
-(NSString *)vocabularyIdentifier;
-(NSString *)descriptionString;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDisplayImage:(INImage *)arg1 ;
-(void)setSubtitleString:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

