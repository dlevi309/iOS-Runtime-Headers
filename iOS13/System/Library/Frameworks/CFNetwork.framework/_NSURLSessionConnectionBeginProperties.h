/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class __CFN_ConnectionMetrics;

@interface _NSURLSessionConnectionBeginProperties : NSObject <NSSecureCoding> {

	__CFN_ConnectionMetrics* __metrics;

}

@property (nonatomic,readonly) __CFN_ConnectionMetrics * _metrics;                         //@synthesize _metrics=__metrics - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_nw_endpoint> endpoint; 
@property (getter=isTLSConfigured,nonatomic,readonly) BOOL TLSConfigured; 
@property (getter=isProxyConfigured,nonatomic,readonly) BOOL proxyConfigured; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<OS_nw_endpoint>)endpoint;
-(__CFN_ConnectionMetrics *)_metrics;
-(id)initWithMetrics:(id)arg1 ;
-(BOOL)isTLSConfigured;
-(BOOL)isProxyConfigured;
@end

