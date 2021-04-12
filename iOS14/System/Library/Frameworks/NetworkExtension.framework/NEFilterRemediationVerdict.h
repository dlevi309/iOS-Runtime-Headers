/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEFilterVerdict.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEFilterRemediationVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>
+(id)allowVerdict;
+(id)dropVerdict;
+(id)needRulesVerdict;
-(long long)filterAction;
@end

