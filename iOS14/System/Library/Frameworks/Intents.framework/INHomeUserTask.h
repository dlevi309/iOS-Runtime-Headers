/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INHomeAttributeValue, NSString;

@interface INHomeUserTask : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	long long _taskType;
	long long _attribute;
	INHomeAttributeValue* _value;

}

@property (nonatomic,readonly) long long taskType;                             //@synthesize taskType=_taskType - In the implementation block
@property (nonatomic,readonly) long long attribute;                            //@synthesize attribute=_attribute - In the implementation block
@property (nonatomic,copy,readonly) INHomeAttributeValue * value;              //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(long long)attribute;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(long long)taskType;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(INHomeAttributeValue *)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTaskType:(long long)arg1 attribute:(long long)arg2 value:(id)arg3 ;
@end

