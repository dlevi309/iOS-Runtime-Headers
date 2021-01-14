/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INHomeFilter, NSString, NSNumber;

@interface INAnnouncementRecord : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	INHomeFilter* _originator;
	NSString* _identifier;
	NSNumber* _duration;

}

@property (nonatomic,copy,readonly) INHomeFilter * originator;              //@synthesize originator=_originator - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * duration;                    //@synthesize duration=_duration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)initWithOriginator:(id)arg1 identifier:(id)arg2 duration:(id)arg3 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(INHomeFilter *)originator;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(NSString *)identifier;
-(NSNumber *)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

