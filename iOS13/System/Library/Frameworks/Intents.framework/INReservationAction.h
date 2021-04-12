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

@class INDateComponentsRange, NSUserActivity, NSString;

@interface INReservationAction : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {

	long long _type;
	INDateComponentsRange* _validDuration;
	NSUserActivity* _userActivity;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) INDateComponentsRange * validDuration;              //@synthesize validDuration=_validDuration - In the implementation block
@property (nonatomic,copy,readonly) NSUserActivity * userActivity;                      //@synthesize userActivity=_userActivity - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSUserActivity *)userActivity;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithType:(long long)arg1 validDuration:(id)arg2 userActivity:(id)arg3 ;
-(INDateComponentsRange *)validDuration;
@end

