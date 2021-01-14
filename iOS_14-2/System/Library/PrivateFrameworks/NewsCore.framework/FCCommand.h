/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface FCCommand : NSObject <NSSecureCoding>
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)canCoalesceWithCommand:(id)arg1 ;
-(void)coalesceWithCommand:(id)arg1 ;
-(unsigned long long)statusForCloudKitError:(id)arg1 ;
@end

