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

@class NSString, INSpeakableString, INPerson;

@interface INDeviceDetail : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _identifier;
	INSpeakableString* _deviceName;
	long long _deviceClass;
	INSpeakableString* _productName;
	INSpeakableString* _category;
	INPerson* _deviceOwner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * deviceName;               //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) long long deviceClass;                             //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * productName;              //@synthesize productName=_productName - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * category;                 //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) INPerson * deviceOwner;                       //@synthesize deviceOwner=_deviceOwner - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(INSpeakableString *)category;
-(INSpeakableString *)deviceName;
-(id)_dictionaryRepresentation;
-(long long)deviceClass;
-(INSpeakableString *)productName;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INPerson *)deviceOwner;
-(id)initWithIdentifier:(id)arg1 deviceName:(id)arg2 deviceClass:(long long)arg3 productName:(id)arg4 category:(id)arg5 deviceOwner:(id)arg6 ;
@end

