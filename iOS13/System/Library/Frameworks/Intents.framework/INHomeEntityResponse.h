/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INHomeEntity, NSArray, NSString;

@interface INHomeEntityResponse : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	INHomeEntity* _entity;
	NSArray* _taskResponses;

}

@property (nonatomic,copy,readonly) INHomeEntity * entity;                //@synthesize entity=_entity - In the implementation block
@property (nonatomic,copy,readonly) NSArray * taskResponses;              //@synthesize taskResponses=_taskResponses - In the implementation block
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INHomeEntity *)entity;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSArray *)taskResponses;
-(id)initWithEntity:(id)arg1 taskResponses:(id)arg2 ;
@end

