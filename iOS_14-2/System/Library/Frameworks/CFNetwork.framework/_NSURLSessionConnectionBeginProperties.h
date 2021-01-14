/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class __CFN_ConnectionMetrics;

@interface _NSURLSessionConnectionBeginProperties : NSObject <NSSecureCoding> {

	__CFN_ConnectionMetrics* __metrics;

}

@property (nonatomic,readonly) NSObject*<OS_nw_endpoint> endpoint; 
@property (getter=isTLSConfigured,nonatomic,readonly) BOOL TLSConfigured; 
@property (getter=isProxyConfigured,nonatomic,readonly) BOOL proxyConfigured; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject*<OS_nw_endpoint>)endpoint;
-(BOOL)isProxyConfigured;
-(BOOL)isTLSConfigured;
-(id)initWithCoder:(id)arg1 ;
@end

