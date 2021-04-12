/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

#import <Trial/Trial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface TRIVersion : NSObject <NSCopying> {

	NSNumber* _majorVersion;
	NSNumber* _minorVersion;
	NSNumber* _patchVersion;

}

@property (nonatomic,readonly) NSNumber * majorVersion;              //@synthesize majorVersion=_majorVersion - In the implementation block
@property (nonatomic,readonly) NSNumber * minorVersion;              //@synthesize minorVersion=_minorVersion - In the implementation block
@property (nonatomic,readonly) NSNumber * patchVersion;              //@synthesize patchVersion=_patchVersion - In the implementation block
+(id)parseVersionFromString:(id)arg1 withPrefix:(id)arg2 ;
+(id)versionWithMajorVersion:(id)arg1 minorVersion:(id)arg2 patchVersion:(id)arg3 ;
-(long long)compare:(id)arg1 ;
-(id)init;
-(id)description;
-(NSNumber *)majorVersion;
-(NSNumber *)minorVersion;
-(unsigned long long)hash;
-(id)initWithMajorVersion:(id)arg1 minorVersion:(id)arg2 patchVersion:(id)arg3 ;
-(BOOL)isEqualToVersion:(id)arg1 ;
-(id)copyWithReplacementMajorVersion:(id)arg1 ;
-(id)copyWithReplacementMinorVersion:(id)arg1 ;
-(id)copyWithReplacementPatchVersion:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)patchVersion;
-(BOOL)isEqual:(id)arg1 ;
@end

