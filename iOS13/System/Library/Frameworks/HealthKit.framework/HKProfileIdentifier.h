/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)primaryProfile;
+(BOOL)isValidSecondaryProfileType:(long long)arg1 ;
+(id)_profileWithUUID:(id)arg1 type:(long long)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSUUID *)identifier;
@end

