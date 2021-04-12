/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INSpeakableString, NSString, NSArray;

@interface INHomeEntity : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	INSpeakableString* _entityName;
	long long _type;
	NSString* _entityIdentifier;
	NSArray* _deviceTypes;
	long long _sceneType;
	INSpeakableString* _room;
	INSpeakableString* _zone;
	INSpeakableString* _home;
	INSpeakableString* _group;

}

@property (nonatomic,copy,readonly) INSpeakableString * entityName;              //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,readonly) long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityIdentifier;                 //@synthesize entityIdentifier=_entityIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * deviceTypes;                       //@synthesize deviceTypes=_deviceTypes - In the implementation block
@property (nonatomic,readonly) long long sceneType;                              //@synthesize sceneType=_sceneType - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * room;                    //@synthesize room=_room - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * zone;                    //@synthesize zone=_zone - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * home;                    //@synthesize home=_home - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * group;                   //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) long long deviceType; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(INSpeakableString *)zone;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)deviceType;
-(INSpeakableString *)group;
-(INSpeakableString *)home;
-(INSpeakableString *)entityName;
-(id)_dictionaryRepresentation;
-(INSpeakableString *)room;
-(NSString *)entityIdentifier;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSArray *)deviceTypes;
-(long long)sceneType;
-(id)initWithEntityName:(id)arg1 type:(long long)arg2 entityIdentifier:(id)arg3 deviceTypes:(id)arg4 sceneType:(long long)arg5 room:(id)arg6 zone:(id)arg7 home:(id)arg8 group:(id)arg9 ;
-(id)initWithName:(id)arg1 type:(long long)arg2 deviceType:(long long)arg3 ;
@end

