/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface HKProfileIdentifier : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _identifier;
	long long _type;

}

@property (copy,readonly) NSUUID * identifier; 
@property (readonly) long long type; 
+(BOOL)supportsSecureCoding;
+(BOOL)isValidProfileType:(long long)arg1 ;
+(BOOL)isValidSecondaryProfileType:(long long)arg1 ;
+(id)_profileWithUUID:(id)arg1 type:(long long)arg2 ;
+(id)primaryProfile;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

