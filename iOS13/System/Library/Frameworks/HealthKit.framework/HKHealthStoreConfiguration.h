/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HKProfileIdentifier;

@interface HKHealthStoreConfiguration : NSObject <NSSecureCoding, NSCopying> {

	unsigned _applicationSDKVersion;
	NSString* _sourceBundleIdentifier;
	NSString* _debugIdentifier;
	HKProfileIdentifier* _profileIdentifier;

}

@property (nonatomic,copy,readonly) NSString * sourceBundleIdentifier;                    //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * debugIdentifier;                           //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
@property (nonatomic,copy,readonly) HKProfileIdentifier * profileIdentifier;              //@synthesize profileIdentifier=_profileIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned applicationSDKVersion;                            //@synthesize applicationSDKVersion=_applicationSDKVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)debugIdentifier;
-(HKProfileIdentifier *)profileIdentifier;
-(NSString *)sourceBundleIdentifier;
-(id)initWithSourceBundleIdentifier:(id)arg1 debugIdentifier:(id)arg2 profileIdentifier:(id)arg3 applicationSDKVersion:(unsigned)arg4 ;
-(unsigned)applicationSDKVersion;
@end

