/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INDateComponentsRange, CLPlacemark;

@interface INTicketedEvent : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	long long _category;
	NSString* _name;
	INDateComponentsRange* _eventDuration;
	CLPlacemark* _location;

}

@property (nonatomic,readonly) long long category;                                      //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) INDateComponentsRange * eventDuration;              //@synthesize eventDuration=_eventDuration - In the implementation block
@property (nonatomic,copy,readonly) CLPlacemark * location;                             //@synthesize location=_location - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INDateComponentsRange *)eventDuration;
-(id)initWithCategory:(long long)arg1 name:(id)arg2 eventDuration:(id)arg3 location:(id)arg4 ;
-(CLPlacemark *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(long long)category;
-(NSString *)name;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

