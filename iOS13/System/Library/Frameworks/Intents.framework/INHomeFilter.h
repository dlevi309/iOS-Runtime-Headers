/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, INSpeakableString, NSString;

@interface INHomeFilter : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	BOOL _isExcludeFilter;
	NSArray* _entityIdentifiers;
	INSpeakableString* _entityName;
	long long _entityType;
	long long _outerDeviceType;
	INSpeakableString* _outerDeviceName;
	long long _deviceType;
	INSpeakableString* _home;
	INSpeakableString* _zone;
	INSpeakableString* _group;
	INSpeakableString* _room;
	INSpeakableString* _accessory;
	long long _subServiceType;

}

@property (nonatomic,copy,readonly) NSArray * entityIdentifiers;                      //@synthesize entityIdentifiers=_entityIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * entityName;                   //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,readonly) long long entityType;                                  //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) long long outerDeviceType;                             //@synthesize outerDeviceType=_outerDeviceType - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * outerDeviceName;              //@synthesize outerDeviceName=_outerDeviceName - In the implementation block
@property (nonatomic,readonly) long long deviceType;                                  //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * home;                         //@synthesize home=_home - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * zone;                         //@synthesize zone=_zone - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * group;                        //@synthesize group=_group - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * room;                         //@synthesize room=_room - In the implementation block
@property (nonatomic,readonly) BOOL isExcludeFilter;                                  //@synthesize isExcludeFilter=_isExcludeFilter - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * scene; 
@property (nonatomic,copy,readonly) INSpeakableString * accessory;                    //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * service; 
@property (nonatomic,readonly) long long serviceType; 
@property (nonatomic,readonly) long long subServiceType;                              //@synthesize subServiceType=_subServiceType - In the implementation block
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)serviceType;
-(long long)deviceType;
-(INSpeakableString *)group;
-(INSpeakableString *)home;
-(INSpeakableString *)entityName;
-(INSpeakableString *)service;
-(id)_dictionaryRepresentation;
-(INSpeakableString *)scene;
-(INSpeakableString *)accessory;
-(INSpeakableString *)room;
-(long long)entityType;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(NSArray *)entityIdentifiers;
-(BOOL)isExcludeFilter;
-(INSpeakableString *)outerDeviceName;
-(long long)outerDeviceType;
-(long long)subServiceType;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)_intents_readableDescriptionWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(id)initWithEntityIdentifiers:(id)arg1 entityName:(id)arg2 entityType:(long long)arg3 outerDeviceType:(long long)arg4 outerDeviceName:(id)arg5 deviceType:(long long)arg6 home:(id)arg7 zone:(id)arg8 group:(id)arg9 room:(id)arg10 isExcludeFilter:(BOOL)arg11 ;
-(id)initWithEntityIdentifiers:(id)arg1 home:(id)arg2 scene:(id)arg3 homeZone:(id)arg4 group:(id)arg5 room:(id)arg6 accessory:(id)arg7 service:(id)arg8 entityType:(long long)arg9 serviceType:(long long)arg10 subServiceType:(long long)arg11 ;
-(id)initWithEntityIdentifiers:(id)arg1 home:(id)arg2 scene:(id)arg3 homeZone:(id)arg4 group:(id)arg5 room:(id)arg6 accessory:(id)arg7 service:(id)arg8 entityType:(long long)arg9 serviceType:(long long)arg10 subServiceType:(long long)arg11 isExcludeFilter:(BOOL)arg12 ;
-(id)initWithEntityIdentifiers:(id)arg1 home:(id)arg2 scene:(id)arg3 homeZone:(id)arg4 group:(id)arg5 room:(id)arg6 accessory:(id)arg7 entityType:(long long)arg8 serviceType:(long long)arg9 subServiceType:(long long)arg10 isExcludeFilter:(BOOL)arg11 entityName:(id)arg12 ;
-(id)initWithEntityIdentifiers:(id)arg1 entityName:(id)arg2 entityType:(long long)arg3 deviceProfileType:(long long)arg4 capabilityName:(id)arg5 capabilityProfileType:(long long)arg6 home:(id)arg7 zone:(id)arg8 group:(id)arg9 room:(id)arg10 isExcludeFilter:(BOOL)arg11 ;
-(id)initWithEntityIdentifiers:(id)arg1 entityName:(id)arg2 entityType:(long long)arg3 outerDeviceType:(long long)arg4 innerDeviceName:(id)arg5 innerDeviceType:(long long)arg6 home:(id)arg7 zone:(id)arg8 group:(id)arg9 room:(id)arg10 isExcludeFilter:(BOOL)arg11 ;
-(long long)deviceProfileType;
@end

