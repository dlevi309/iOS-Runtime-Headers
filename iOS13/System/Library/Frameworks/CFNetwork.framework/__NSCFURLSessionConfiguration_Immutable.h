/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLSessionConfiguration.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURLSessionConfiguration;

@interface __NSCFURLSessionConfiguration_Immutable : NSURLSessionConfiguration <NSCopying, NSSecureCoding> {

	NSURLSessionConfiguration* _target;

}
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(CFHSTSPolicyRef)copyHSTSPolicy;
-(HTTPConnectionCacheLimits)getConnectionCacheLimits;
-(void*)_copyAttribute:(CFStringRef)arg1 ;
-(BOOL)_isProxySession;
-(id)disposition;
@end

