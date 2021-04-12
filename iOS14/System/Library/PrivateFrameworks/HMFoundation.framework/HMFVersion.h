/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLocalizable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HMFVersion : HMFObject <HMFLocalizable, NSCopying, NSSecureCoding> {

	unsigned long long _majorVersion;
	unsigned long long _minorVersion;
	unsigned long long _updateVersion;

}

@property (readonly) unsigned long long majorVersion;                   //@synthesize majorVersion=_majorVersion - In the implementation block
@property (readonly) unsigned long long minorVersion;                   //@synthesize minorVersion=_minorVersion - In the implementation block
@property (readonly) unsigned long long updateVersion;                  //@synthesize updateVersion=_updateVersion - In the implementation block
@property (copy,readonly) NSString * versionString; 
@property (copy,readonly) NSString * localizedDescription; 
+(id)hmbVersionFromData:(id)arg1 ;
+(id)versionWithHMDVersion:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isLessThan:(id)arg1 ;
-(BOOL)isGreaterThan:(id)arg1 ;
-(BOOL)isGreaterThanOrEqualTo:(id)arg1 ;
-(BOOL)isLessThanOrEqualTo:(id)arg1 ;
-(id)hmbData;
-(BOOL)isLessThan:(id)arg1 ;
-(BOOL)isGreaterThan:(id)arg1 ;
-(BOOL)isGreaterThanOrEqualTo:(id)arg1 ;
-(BOOL)isLessThanOrEqualTo:(id)arg1 ;
-(NSString *)versionString;
-(long long)compare:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isAtLeastVersion:(id)arg1 ;
-(id)description;
-(unsigned long long)majorVersion;
-(NSString *)localizedDescription;
-(unsigned long long)minorVersion;
-(id)initWithVersionString:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3 ;
-(BOOL)isEqualToVersion:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)updateVersion;
-(BOOL)isGreaterThanVersion:(id)arg1 ;
@end

