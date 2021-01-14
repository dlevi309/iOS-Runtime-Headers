/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class __CFN_ConnectionMetrics, NSString, NSNumber;

@interface _NSURLSessionConnectionEstablishProperties : NSObject <NSSecureCoding> {

	__CFN_ConnectionMetrics* __metrics;

}

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
-(NSString *)networkProtocolName;
-(BOOL)usedTFO;
-(NSNumber *)negotiatedTLSCipherSuite;
-(NSNumber *)negotiatedTLSProtocolVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)interfaceName;
-(BOOL)isCellular;
-(NSObject*<OS_nw_endpoint>)localEndpoint;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<OS_nw_endpoint>)remoteEndpoint;
-(NSObject*<OS_nw_establishment_report>)establishmentReport;
-(BOOL)isMultipath;
-(BOOL)isConstrained;
-(BOOL)isExpensive;
@end

