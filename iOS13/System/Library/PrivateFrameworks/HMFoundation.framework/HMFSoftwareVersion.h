/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFVersion.h>

@class NSString;

@interface HMFSoftwareVersion : HMFVersion {

	NSString* _buildVersion;

}

@property (copy,readonly) NSString * buildVersion;              //@synthesize buildVersion=_buildVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)versionFromOperatingSystemVersion:(SCD_Struct_HM3)arg1 ;
-(id)localizedDescription;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_HM3)operatingSystemVersion;
-(id)versionString;
-(NSString *)buildVersion;
-(id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3 buildVersion:(id)arg4 ;
-(id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3 ;
-(id)initWithVersionString:(id)arg1 ;
@end

