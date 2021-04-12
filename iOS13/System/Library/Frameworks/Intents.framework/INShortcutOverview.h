/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INSpeakableString, INImage, NSArray, NSString;

@interface INShortcutOverview : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {

	INSpeakableString* _name;
	INSpeakableString* _voiceCommand;
	INImage* _icon;
	INSpeakableString* _descriptiveText;
	NSArray* _steps;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) INSpeakableString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * voiceCommand;                 //@synthesize voiceCommand=_voiceCommand - In the implementation block
@property (nonatomic,copy,readonly) INImage * icon;                                   //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * descriptiveText;              //@synthesize descriptiveText=_descriptiveText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * steps;                                  //@synthesize steps=_steps - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(INSpeakableString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(INImage *)icon;
-(NSArray *)steps;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INSpeakableString *)descriptiveText;
-(INSpeakableString *)voiceCommand;
-(id)initWithName:(id)arg1 voiceCommand:(id)arg2 icon:(id)arg3 descriptiveText:(id)arg4 steps:(id)arg5 ;
@end

