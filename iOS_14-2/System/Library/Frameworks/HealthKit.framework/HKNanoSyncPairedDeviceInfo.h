/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HKNanoSyncPairedDeviceInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _sourceBundleIdentifier;
	NSString* _systemBuildVersion;
	NSString* _productType;
	unsigned long long _state;
	int _protocolVersion;

}

@property (copy,readonly) NSString * sourceBundleIdentifier; 
@property (copy,readonly) NSString * systemBuildVersion; 
@property (copy,readonly) NSString * productType; 
@property (getter=isActive,readonly) BOOL active; 
@property (getter=isRestoreComplete,readonly) BOOL restoreComplete; 
@property (readonly) int protocolVersion; 
+(BOOL)supportsSecureCoding;
-(NSString *)sourceBundleIdentifier;
-(NSString *)productType;
-(BOOL)isActive;
-(void)encodeWithCoder:(id)arg1 ;
-(int)protocolVersion;
-(id)description;
-(BOOL)isRestoreComplete;
-(id)initWithSourceBundleIdentifier:(id)arg1 systemBuildVersion:(id)arg2 productType:(id)arg3 active:(BOOL)arg4 restoreComplete:(BOOL)arg5 protocolVersion:(int)arg6 ;
-(NSString *)systemBuildVersion;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

