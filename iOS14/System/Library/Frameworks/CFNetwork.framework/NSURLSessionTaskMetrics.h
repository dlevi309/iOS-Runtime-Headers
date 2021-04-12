/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class __CFN_TaskMetrics, NSArray, NSDateInterval;

@interface NSURLSessionTaskMetrics : NSObject <NSSecureCoding> {

	__CFN_TaskMetrics* __metrics;

}

@property (copy,readonly) NSArray * transactionMetrics; 
@property (copy,readonly) NSDateInterval * taskInterval; 
@property (readonly) unsigned long long redirectCount; 
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSDateInterval *)taskInterval;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)redirectCount;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)transactionMetrics;
@end

