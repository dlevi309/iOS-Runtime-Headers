/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFVersion.h>

@class NSString;

@interface HMFSoftwareVersion : HMFVersion {

	NSString* _buildVersion;

}

@property (nonatomic,readonly) BOOL hf_softwareUpdateWouldSupportHomePodPairing; 
@property (copy,readonly) NSString * buildVersion;                                            //@synthesize buildVersion=_buildVersion - In the implementation block
@property (copy,readonly) NSString * shortVersionString; 
+(BOOL)supportsSecureCoding;
+(id)versionFromOperatingSystemVersion:(SCD_Struct_HM6)arg1 ;
-(BOOL)hf_softwareUpdateWouldSupportHomePodPairing;
-(id)versionString;
-(long long)compare:(id)arg1 ;
-(SCD_Struct_HM6)operatingSystemVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(id)localizedDescription;
-(id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3 buildVersion:(id)arg4 ;
-(id)initWithVersionString:(id)arg1 ;
-(NSString *)buildVersion;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3 ;
-(NSString *)shortVersionString;
@end

