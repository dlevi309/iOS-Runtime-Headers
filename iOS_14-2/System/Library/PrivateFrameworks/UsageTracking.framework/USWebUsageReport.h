/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface USWebUsageReport : NSObject <NSSecureCoding> {

	BOOL _webUsageTrusted;
	NSString* _domainIdentifier;
	double _totalUsageTime;
	NSDictionary* _webUsageByDomain;

}

@property (copy,readonly) NSString * domainIdentifier;                  //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (readonly) BOOL webUsageTrusted;                              //@synthesize webUsageTrusted=_webUsageTrusted - In the implementation block
@property (readonly) double totalUsageTime;                             //@synthesize totalUsageTime=_totalUsageTime - In the implementation block
@property (copy,readonly) NSDictionary * webUsageByDomain;              //@synthesize webUsageByDomain=_webUsageByDomain - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)domainIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(double)totalUsageTime;
-(id)initWithDomainIdentifier:(id)arg1 webUsageTrusted:(BOOL)arg2 totalUsageTime:(double)arg3 webUsageByDomain:(id)arg4 ;
-(NSDictionary *)webUsageByDomain;
-(void)_usWebUsageReportCommonInitWithDomainIdentifier:(id)arg1 webUsageTrusted:(BOOL)arg2 totalUsageTime:(double)arg3 webUsageByDomain:(id)arg4 ;
-(BOOL)webUsageTrusted;
-(id)initWithDomainIdentifier:(id)arg1 totalUsageTime:(double)arg2 webUsageByDomain:(id)arg3 ;
@end

