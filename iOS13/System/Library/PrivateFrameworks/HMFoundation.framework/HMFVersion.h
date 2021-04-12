/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDescription;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)versionString;
-(unsigned long long)majorVersion;
-(unsigned long long)minorVersion;
-(unsigned long long)updateVersion;
-(id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3 ;
-(BOOL)isEqualToVersion:(id)arg1 ;
-(id)initWithVersionString:(id)arg1 ;
-(BOOL)isAtLeastVersion:(id)arg1 ;
-(BOOL)isGreaterThanVersion:(id)arg1 ;
@end

