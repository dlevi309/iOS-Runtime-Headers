/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INRuntimeObject.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/INSpeakable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSMutableDictionary;

@interface INObject : NSObject <INRuntimeObject, INJSONSerializable, INSpeakable, NSCopying, NSSecureCoding> {

	NSMutableDictionary* _valueForKeyDictionary;
	NSString* _identifier;
	NSString* _displayString;
	NSString* _pronunciationHint;
	NSArray* _alternativeSpeakableMatches;

}

@property (nonatomic,readonly) NSMutableDictionary * _valueForKeyDictionary;              //@synthesize valueForKeyDictionary=_valueForKeyDictionary - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayString;                             //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,readonly) NSString * pronunciationHint;                              //@synthesize pronunciationHint=_pronunciationHint - In the implementation block
@property (nonatomic,retain) NSArray * alternativeSpeakableMatches;                       //@synthesize alternativeSpeakableMatches=_alternativeSpeakableMatches - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * spokenPhrase; 
@property (nonatomic,readonly) NSString * vocabularyIdentifier; 
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(NSString *)spokenPhrase;
-(id)_dictionaryRepresentation;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(NSString *)displayString;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)_intents_localizedCopyWithLocalizer:(id)arg1 ;
-(id)_intents_readableDescriptionWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(NSString *)pronunciationHint;
-(NSString *)vocabularyIdentifier;
-(NSMutableDictionary *)_valueForKeyDictionary;
-(NSArray *)alternativeSpeakableMatches;
-(id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 displayString:(id)arg2 ;
-(void)setAlternativeSpeakableMatches:(NSArray *)arg1 ;
@end

