/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFContextSnapshot.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSNumber, NSString;

@interface AFLocationSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	BOOL _preciseLocationEnabled;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _altitude;
	NSNumber* _direction;
	NSNumber* _speed;
	NSNumber* _verticalAccuracy;
	NSNumber* _horizontalAccuracy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSNumber * latitude;                        //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * longitude;                       //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * altitude;                        //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * direction;                       //@synthesize direction=_direction - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * speed;                           //@synthesize speed=_speed - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * verticalAccuracy;                //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * horizontalAccuracy;              //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (nonatomic,readonly) BOOL preciseLocationEnabled;                     //@synthesize preciseLocationEnabled=_preciseLocationEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(NSNumber *)direction;
-(BOOL)preciseLocationEnabled;
-(id)ad_shortDescription;
-(NSNumber *)latitude;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithSerializedBackingStore:(id)arg1 ;
-(NSNumber *)altitude;
-(id)initWithSetRequestOrigin:(id)arg1 ;
-(id)ace_setRequestOrigin;
-(NSNumber *)speed;
-(NSNumber *)verticalAccuracy;
-(NSNumber *)longitude;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLatitude:(id)arg1 longitude:(id)arg2 altitude:(id)arg3 direction:(id)arg4 speed:(id)arg5 verticalAccuracy:(id)arg6 horizontalAccuracy:(id)arg7 preciseLocationEnabled:(BOOL)arg8 ;
-(NSString *)description;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)serializedBackingStore;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSNumber *)horizontalAccuracy;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

