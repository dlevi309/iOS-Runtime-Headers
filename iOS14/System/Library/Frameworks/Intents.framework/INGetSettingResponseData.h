/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INSettingMetadata, INNumericSettingValue, NSString;

@interface INGetSettingResponseData : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	INSettingMetadata* _settingMetadata;
	INNumericSettingValue* _numericValue;
	long long _boundedValue;
	long long _binaryValue;
	NSString* _labeledValue;

}

@property (nonatomic,copy,readonly) INSettingMetadata * settingMetadata;               //@synthesize settingMetadata=_settingMetadata - In the implementation block
@property (nonatomic,copy,readonly) INNumericSettingValue * numericValue;              //@synthesize numericValue=_numericValue - In the implementation block
@property (nonatomic,readonly) long long boundedValue;                                 //@synthesize boundedValue=_boundedValue - In the implementation block
@property (nonatomic,readonly) long long binaryValue;                                  //@synthesize binaryValue=_binaryValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * labeledValue;                           //@synthesize labeledValue=_labeledValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)initWithSettingMetadata:(id)arg1 numericValue:(id)arg2 boundedValue:(long long)arg3 binaryValue:(long long)arg4 labeledValue:(id)arg5 ;
-(long long)boundedValue;
-(INSettingMetadata *)settingMetadata;
-(NSString *)description;
-(unsigned long long)hash;
-(NSString *)labeledValue;
-(id)initWithCoder:(id)arg1 ;
-(long long)binaryValue;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(INNumericSettingValue *)numericValue;
@end

