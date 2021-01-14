/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
*/

#import <NearbyInteraction/NearbyInteraction-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NIRegionPredicate : NSObject <NSCopying, NSSecureCoding> {

	float _radius;
	NSString* _name;
	long long _preferredUpdateRate;

}

@property (readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (readonly) float radius;                             //@synthesize radius=_radius - In the implementation block
@property (assign) long long preferredUpdateRate;              //@synthesize preferredUpdateRate=_preferredUpdateRate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(float)radius;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)descriptionInternal;
-(id)initWithName:(id)arg1 radius:(float)arg2 preferredUpdateRate:(long long)arg3 ;
-(long long)preferredUpdateRate;
-(id)initWithName:(id)arg1 radius:(float)arg2 ;
-(void)setPreferredUpdateRate:(long long)arg1 ;
@end

