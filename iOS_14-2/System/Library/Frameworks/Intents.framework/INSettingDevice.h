/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface INSettingDevice : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _deviceName;
	NSString* _deviceModel;
	long long _deviceCategory;

}

@property (nonatomic,copy,readonly) NSString * deviceName;               //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceModel;              //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,readonly) long long deviceCategory;                 //@synthesize deviceCategory=_deviceCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)deviceName;
-(NSString *)deviceModel;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(long long)deviceCategory;
-(id)initWithDeviceName:(id)arg1 deviceModel:(id)arg2 deviceCategory:(long long)arg3 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

