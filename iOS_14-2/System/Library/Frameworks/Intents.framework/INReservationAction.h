/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INDateComponentsRange, NSUserActivity, NSString;

@interface INReservationAction : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	long long _type;
	INDateComponentsRange* _validDuration;
	NSUserActivity* _userActivity;

}

@property (nonatomic,readonly) long long type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) INDateComponentsRange * validDuration;              //@synthesize validDuration=_validDuration - In the implementation block
@property (nonatomic,copy,readonly) NSUserActivity * userActivity;                      //@synthesize userActivity=_userActivity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSUserActivity *)userActivity;
-(id)initWithType:(long long)arg1 validDuration:(id)arg2 userActivity:(id)arg3 ;
-(INDateComponentsRange *)validDuration;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)description;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

