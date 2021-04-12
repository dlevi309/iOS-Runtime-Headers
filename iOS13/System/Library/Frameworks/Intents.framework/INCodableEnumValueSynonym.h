/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class INCodableEnumValue, NSString;

@interface INCodableEnumValueSynonym : NSObject <NSSecureCoding, NSCopying, INCodableCoding> {

	INCodableEnumValue* _codableEnumValue;
	NSString* _pronunciationHint;
	NSString* _pronunciationHintLocID;
	NSString* _synonym;
	NSString* _synonymLocID;

}

@property (assign,setter=_setCodableEnumValue:,nonatomic,__weak) INCodableEnumValue * _codableEnumValue;              //@synthesize codableEnumValue=_codableEnumValue - In the implementation block
@property (nonatomic,copy) NSString * pronunciationHint;                                                              //@synthesize pronunciationHint=_pronunciationHint - In the implementation block
@property (nonatomic,copy) NSString * pronunciationHintLocID;                                                         //@synthesize pronunciationHintLocID=_pronunciationHintLocID - In the implementation block
@property (nonatomic,copy) NSString * synonym;                                                                        //@synthesize synonym=_synonym - In the implementation block
@property (nonatomic,copy) NSString * synonymLocID;                                                                   //@synthesize synonymLocID=_synonymLocID - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedSynonym; 
@property (nonatomic,copy,readonly) NSString * localizedPronunciationHint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * cacheGroup; 
@property (nonatomic,copy,readonly) NSString * keyPrefix; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)synonym;
-(void)setSynonym:(NSString *)arg1 ;
-(NSString *)cacheGroup;
-(NSString *)keyPrefix;
-(id)dictionaryKeyForKeyPath:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(NSString *)pronunciationHint;
-(void)setPronunciationHint:(NSString *)arg1 ;
-(INCodableEnumValue *)_codableEnumValue;
-(NSString *)localizedSynonym;
-(id)localizedSynonymForLanguage:(id)arg1 ;
-(id)localizedSynonymWithLocalizer:(id)arg1 ;
-(NSString *)localizedPronunciationHint;
-(id)localizedPronunciationHintForLanguage:(id)arg1 ;
-(id)localizedPronunciationHintWithLocalizer:(id)arg1 ;
-(void)_setCodableEnumValue:(id)arg1 ;
-(NSString *)pronunciationHintLocID;
-(void)setPronunciationHintLocID:(NSString *)arg1 ;
-(NSString *)synonymLocID;
-(void)setSynonymLocID:(NSString *)arg1 ;
@end

