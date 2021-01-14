/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HKFHIRVersion : NSObject <NSCopying, NSSecureCoding> {

	NSString* _invalidVersionString;
	long long _majorVersion;
	long long _minorVersion;
	long long _patchVersion;

}

@property (nonatomic,readonly) long long majorVersion;                            //@synthesize majorVersion=_majorVersion - In the implementation block
@property (nonatomic,readonly) long long minorVersion;                            //@synthesize minorVersion=_minorVersion - In the implementation block
@property (nonatomic,readonly) long long patchVersion;                            //@synthesize patchVersion=_patchVersion - In the implementation block
@property (nonatomic,readonly) NSString * FHIRRelease; 
@property (nonatomic,copy,readonly) NSString * stringRepresentation; 
+(BOOL)supportsSecureCoding;
+(id)primaryR4Version;
+(id)versionFromVersionString:(id)arg1 error:(id*)arg2 ;
+(id)primaryDSTU2Version;
+(id)versionFromVersionString:(id)arg1 ;
-(NSString *)stringRepresentation;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)FHIRRelease;
-(id)initWithInvalidVersionString:(id)arg1 ;
-(id)description;
-(long long)majorVersion;
-(long long)minorVersion;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)patchVersion;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSemanticVersion:(SCD_Struct_HK3)arg1 ;
@end

