/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEFilterVerdict.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEFilterRemediationVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>
+(id)dropVerdict;
+(id)allowVerdict;
+(id)needRulesVerdict;
-(long long)filterAction;
@end

