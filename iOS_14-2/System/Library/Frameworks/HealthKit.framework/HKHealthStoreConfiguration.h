/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HKProfileIdentifier;

@interface HKHealthStoreConfiguration : NSObject <NSSecureCoding, NSCopying> {

	unsigned _applicationSDKVersion;
	NSString* _sourceBundleIdentifier;
	NSString* _sourceVersion;
	NSString* _debugIdentifier;
	HKProfileIdentifier* _profileIdentifier;

}

@property (nonatomic,copy,readonly) NSString * sourceBundleIdentifier;                    //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceVersion;                             //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * debugIdentifier;                           //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
@property (nonatomic,copy,readonly) HKProfileIdentifier * profileIdentifier;              //@synthesize profileIdentifier=_profileIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned applicationSDKVersion;                            //@synthesize applicationSDKVersion=_applicationSDKVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(HKProfileIdentifier *)profileIdentifier;
-(unsigned)applicationSDKVersion;
-(NSString *)sourceBundleIdentifier;
-(NSString *)debugIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)sourceVersion;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSourceBundleIdentifier:(id)arg1 sourceVersion:(id)arg2 debugIdentifier:(id)arg3 profileIdentifier:(id)arg4 applicationSDKVersion:(unsigned)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

