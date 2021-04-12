/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface USCategoryUsageReport : NSObject <NSSecureCoding> {

	NSString* _categoryIdentifier;
	double _totalUsageTime;
	NSArray* _applicationUsage;
	NSArray* _webUsage;

}

@property (copy) NSArray * applicationUsage;                          //@synthesize applicationUsage=_applicationUsage - In the implementation block
@property (copy,readonly) NSString * categoryIdentifier;              //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (readonly) double totalUsageTime;                           //@synthesize totalUsageTime=_totalUsageTime - In the implementation block
@property (copy,readonly) NSArray * webUsage;                         //@synthesize webUsage=_webUsage - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)categoryIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)applicationUsage;
-(double)totalUsageTime;
-(id)initWithCategoryIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsage:(id)arg3 webUsage:(id)arg4 ;
-(void)setApplicationUsage:(NSArray *)arg1 ;
-(void)_usCategoryUsageReportCommonInitWithTotalUsageTime:(double)arg1 applicationUsage:(id)arg2 webUsage:(id)arg3 ;
-(NSArray *)webUsage;
@end

