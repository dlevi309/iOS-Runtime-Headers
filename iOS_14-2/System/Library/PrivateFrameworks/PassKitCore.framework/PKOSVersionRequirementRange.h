/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKOSVersionRequirement;

@interface PKOSVersionRequirementRange : NSObject <NSSecureCoding, NSCopying> {

	PKOSVersionRequirement* _minimum;
	PKOSVersionRequirement* _maximum;

}

@property (nonatomic,readonly) PKOSVersionRequirement * minimum;              //@synthesize minimum=_minimum - In the implementation block
@property (nonatomic,readonly) PKOSVersionRequirement * maximum;              //@synthesize maximum=_maximum - In the implementation block
+(BOOL)supportsSecureCoding;
-(PKOSVersionRequirement *)maximum;
-(PKOSVersionRequirement *)minimum;
-(id)asDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithMinimumVersion:(id)arg1 maximumVersion:(id)arg2 ;
-(unsigned long long)hash;
-(BOOL)isEqualToOSVersionRequirementRange:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)versionMeetsRequirements:(id)arg1 deviceClass:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

