/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSArray* _zones;

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
@property (nonatomic,copy,readonly) NSArray * zones;                             //@synthesize zones=_zones - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(INSpeakableString *)zone;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INSpeakableString *)group;
-(INSpeakableString *)room;
-(INSpeakableString *)entityName;
-(long long)deviceType;
-(NSArray *)zones;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)name;
-(NSArray *)deviceTypes;
-(NSString *)description;
-(long long)type;
-(long long)sceneType;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)initWithName:(id)arg1 type:(long long)arg2 deviceType:(long long)arg3 ;
-(id)initWithEntityName:(id)arg1 type:(long long)arg2 entityIdentifier:(id)arg3 deviceTypes:(id)arg4 sceneType:(long long)arg5 room:(id)arg6 home:(id)arg7 group:(id)arg8 zones:(id)arg9 ;
-(id)initWithEntityName:(id)arg1 type:(long long)arg2 entityIdentifier:(id)arg3 deviceTypes:(id)arg4 sceneType:(long long)arg5 room:(id)arg6 zone:(id)arg7 home:(id)arg8 group:(id)arg9 ;
-(NSString *)entityIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(INSpeakableString *)home;
@end

