/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSBundleProxy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface LSVPNPluginProxy : LSBundleProxy <NSSecureCoding>
+(BOOL)supportsSecureCoding;
+(id)VPNPluginProxyForIdentifier:(id)arg1 ;
+(id)VPNPluginProxyForIdentifier:(id)arg1 withContext:(LSContext*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithBundleIdentifier:(id)arg1 withContext:(LSContext*)arg2 ;
@end

