/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSBundleProxy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface LSVPNPluginProxy : LSBundleProxy <NSSecureCoding>
+(BOOL)supportsSecureCoding;
+(id)VPNPluginProxyForIdentifier:(id)arg1 ;
+(id)VPNPluginProxyForIdentifier:(id)arg1 withContext:(LSContext*)arg2 ;
-(id)_initWithBundleIdentifier:(id)arg1 withContext:(LSContext*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

