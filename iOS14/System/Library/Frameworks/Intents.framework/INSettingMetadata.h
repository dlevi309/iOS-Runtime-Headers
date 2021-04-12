/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INSettingDevice, INAppIdentifier;

@interface INSettingMetadata : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _settingId;
	INSettingDevice* _targetDevice;
	INAppIdentifier* _targetApp;

}

@property (nonatomic,copy,readonly) NSString * settingId;                        //@synthesize settingId=_settingId - In the implementation block
@property (nonatomic,copy,readonly) INSettingDevice * targetDevice;              //@synthesize targetDevice=_targetDevice - In the implementation block
@property (nonatomic,copy,readonly) INAppIdentifier * targetApp;                 //@synthesize targetApp=_targetApp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INSettingDevice *)targetDevice;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)settingId;
-(INAppIdentifier *)targetApp;
-(id)_dictionaryRepresentation;
-(id)initWithSettingId:(id)arg1 targetDevice:(id)arg2 targetApp:(id)arg3 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

