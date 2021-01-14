/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFMDMv1InstallAppResultObject : CATTaskResultObject {

	NSString* _bundleIdentifier;
	unsigned long long _state;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                      //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithBundleIdentifier:(id)arg1 state:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
@end

