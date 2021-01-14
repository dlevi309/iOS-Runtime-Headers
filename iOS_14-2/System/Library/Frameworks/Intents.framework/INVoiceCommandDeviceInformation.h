/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface INVoiceCommandDeviceInformation : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	long long _deviceIdiom;
	NSNumber* _isHomePodInUltimateMode;

}

@property (nonatomic,readonly) long long deviceIdiom;                                //@synthesize deviceIdiom=_deviceIdiom - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isHomePodInUltimateMode;              //@synthesize isHomePodInUltimateMode=_isHomePodInUltimateMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSNumber *)isHomePodInUltimateMode;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)deviceIdiom;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDeviceIdiom:(long long)arg1 isHomePodInUltimateMode:(id)arg2 ;
@end

