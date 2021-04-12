/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INSpeakableString, NSString;

@interface INTimer : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	INSpeakableString* _label;
	double _duration;
	double _remainingTime;
	NSString* _identifier;
	long long _state;
	long long _type;

}

@property (nonatomic,copy,readonly) INSpeakableString * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) double duration;                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double remainingTime;                        //@synthesize remainingTime=_remainingTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long type;                              //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(long long)state;
-(double)duration;
-(INSpeakableString *)label;
-(id)_dictionaryRepresentation;
-(double)remainingTime;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithLabel:(id)arg1 duration:(double)arg2 remainingTime:(double)arg3 identifier:(id)arg4 state:(long long)arg5 type:(long long)arg6 ;
-(id)initWithLabel:(id)arg1 duration:(double)arg2 remainingTime:(double)arg3 identifier:(id)arg4 state:(long long)arg5 ;
@end

