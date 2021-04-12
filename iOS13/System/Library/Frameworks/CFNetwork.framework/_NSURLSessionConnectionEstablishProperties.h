/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class __CFN_ConnectionMetrics, NSString, NSNumber;

@interface _NSURLSessionConnectionEstablishProperties : NSObject <NSSecureCoding> {

	__CFN_ConnectionMetrics* __metrics;

}

@property (nonatomic,readonly) __CFN_ConnectionMetrics * _metrics;                                            //@synthesize _metrics=__metrics - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_nw_endpoint> localEndpoint; 
@property (nonatomic,readonly) NSObject*<OS_nw_endpoint> remoteEndpoint; 
@property (nonatomic,copy,readonly) NSString * interfaceName; 
@property (getter=isCellular,nonatomic,readonly) BOOL cellular; 
@property (getter=isExpensive,nonatomic,readonly) BOOL expensive; 
@property (getter=isConstrained,nonatomic,readonly) BOOL constrained; 
@property (getter=isMultipath,nonatomic,readonly) BOOL multipath; 
@property (nonatomic,readonly) BOOL usedTFO; 
@property (nonatomic,copy,readonly) NSString * networkProtocolName; 
@property (nonatomic,copy,readonly) NSNumber * negotiatedTLSProtocolVersion; 
@property (nonatomic,copy,readonly) NSNumber * negotiatedTLSCipherSuite; 
@property (nonatomic,retain,readonly) NSObject*<OS_nw_establishment_report> establishmentReport; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(__CFN_ConnectionMetrics *)_metrics;
-(id)initWithMetrics:(id)arg1 ;
-(NSString *)networkProtocolName;
-(BOOL)isCellular;
-(NSObject*<OS_nw_endpoint>)localEndpoint;
-(NSObject*<OS_nw_endpoint>)remoteEndpoint;
-(NSString *)interfaceName;
-(BOOL)isExpensive;
-(BOOL)isConstrained;
-(BOOL)isMultipath;
-(BOOL)usedTFO;
-(NSNumber *)negotiatedTLSProtocolVersion;
-(NSNumber *)negotiatedTLSCipherSuite;
-(NSObject*<OS_nw_establishment_report>)establishmentReport;
@end

