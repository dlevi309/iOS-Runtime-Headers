/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@class NSDate, NSString;

@interface WebCoreNSURLSessionTaskTransactionMetrics : NSObject {

	NetworkLoadMetrics* _metrics;

}

@property (copy,readonly) NSDate * fetchStartDate; 
@property (copy,readonly) NSDate * domainLookupStartDate; 
@property (copy,readonly) NSDate * domainLookupEndDate; 
@property (copy,readonly) NSDate * connectStartDate; 
@property (copy,readonly) NSDate * secureConnectionStartDate; 
@property (copy,readonly) NSDate * connectEndDate; 
@property (copy,readonly) NSDate * requestStartDate; 
@property (copy,readonly) NSDate * responseStartDate; 
@property (copy,readonly) NSDate * responseEndDate; 
@property (copy,readonly) NSString * networkProtocolName; 
@property (getter=isReusedConnection,readonly) BOOL reusedConnection; 
@property (getter=isCellular,readonly) BOOL cellular; 
@property (getter=isExpensive,readonly) BOOL expensive; 
@property (getter=isConstrained,readonly) BOOL constrained; 
@property (getter=isMultipath,readonly) BOOL multipath; 
-(NSString *)networkProtocolName;
-(NSDate *)responseStartDate;
-(NSDate *)responseEndDate;
-(NSDate *)secureConnectionStartDate;
-(NSDate *)fetchStartDate;
-(NSDate *)connectEndDate;
-(NSDate *)connectStartDate;
-(NSDate *)domainLookupStartDate;
-(NSDate *)requestStartDate;
-(BOOL)isReusedConnection;
-(NSDate *)domainLookupEndDate;
-(BOOL)expensive;
-(id)_initWithMetrics:(const NetworkLoadMetrics*)arg1 ;
-(BOOL)constrained;
-(BOOL)cellular;
-(BOOL)multipath;
@end

