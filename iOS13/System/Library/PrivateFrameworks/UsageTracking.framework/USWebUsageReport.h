/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface USWebUsageReport : NSObject <NSSecureCoding> {

	NSString* _domainIdentifier;
	double _totalUsageTime;
	NSDictionary* _webUsageByDomain;

}

@property (copy,readonly) NSString * domainIdentifier;                  //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (readonly) double totalUsageTime;                             //@synthesize totalUsageTime=_totalUsageTime - In the implementation block
@property (copy,readonly) NSDictionary * webUsageByDomain;              //@synthesize webUsageByDomain=_webUsageByDomain - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(NSString *)domainIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDomainIdentifier:(id)arg1 totalUsageTime:(double)arg2 webUsageByDomain:(id)arg3 ;
-(double)totalUsageTime;
-(NSDictionary *)webUsageByDomain;
-(void)_usWebUsageReportCommonInitWithDomainIdentifier:(id)arg1 totalUsageTime:(double)arg2 webUsageByDomain:(id)arg3 ;
@end

